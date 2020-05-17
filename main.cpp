#include <iostream>
#include <locale>
#include <time.h>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "prototipos.h"
#include "funciones.h"
#include "platos.h"
#include "clientes.h"
#include "pedidos.h"
#include "configuracion.h"

int main()
{
    presentacion();
    setlocale(LC_ALL, "SPANISH");
    main_principal();
    anykey();
    return 0;
}
