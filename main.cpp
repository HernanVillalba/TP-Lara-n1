#include <iostream>
#include <locale.h>
using namespace std;
#include "rlutil.h"
using namespace rlutil;
#include "prototipos.h"
#include "funciones.h"
#include "platos.h"

int main()
{
    presentacion();
    setlocale(LC_ALL, "spanish");
    main_principal();
    return 0;
}
