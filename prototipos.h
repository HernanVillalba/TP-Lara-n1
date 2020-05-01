#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

//////////////STRUCTs////////////////////
struct Platos{
    int ID_plato;
    char nombre_plato[50];
    float costo_preparacion_plato;
    float valor_venta_plato;
    int tiempo_preparacion_plato;
    bool estado_plato;
    int ID_restaurante;
    int comision_restaurante;
    int ID_categoria;
};

/////////////constantes//////////////////
 const char ARCHIVO_PLATO[] = "platos.dat";

/////////////prototipos platos/////////////////
void presentacion();

void presentacion_sin_color();

void presentacion_a_color();

void salami();

void crear_archivo_platos();

void main_principal();

void dibujar_menu_principal(int *);

void submenu_platos(); //todo el submenu de platos;

void dibujar_submenu_platos(int *);

void nuevo_plato(); //cargo y guardo el plato

bool cargar_plato(Platos *); //cargo el plato en la variable de la Struct de platos

bool existe_plato(int); //me retorna la posicion del plato si lo encuentra, -1 si no lo encuentra;

bool guardar_plato_en_archivo(Platos);

void listar_todos_los_platos();

void mostrar_plato(Platos,int);

void visual_de_mostrar_plato(int);

void modificar_plato();

int buscar_posicion_plato(int);

bool sobreescribir_plato(int);

void mostrar_plato_por_ID(int);

void pedir_nuevo_plato(Platos);

void mostrar_plato_por_ID();

bool cargar_plato_para_sobreescribir(Platos*);

void listar_plato_por_ID();

void listar_platos_por_restaurante();

bool existe_restaurante(int);

void mostrar_plato_por_restaurante(int);

void eliminar_plato();

bool baja_del_plato_en_el_archivo(Platos,int);

#endif // PROTOTIPOS_H_INCLUDED
