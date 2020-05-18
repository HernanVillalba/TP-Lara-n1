#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

//////////////STRUCTs//////////////////////////
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

struct Fecha{
    int dia,mes,anio;
};

struct Clientes{
    int ID_cliente;
    char apellidos_cliente[50];
    char nombres_cliente[50];
    char mail_cliente[50];
    char domicilio_cliente[100];
    int CP_cliente;
    Fecha fec_nac;
    bool estado;
};

struct Pedidos{
    int ID_pedido;
    int ID_cliente_pedido;
    int ID_plato_pedido;
    int cantidad_pedido;
    float precio_unitario_pedido;
    Fecha fec_ped;
    float valoracion_pedido;
    int estado_pedido;
};

/////////////constantes////////////////////////
const char ARCHIVO_PLATO[] = "platos.dat";

const char ARCHIVO_CLIENTE[] = "clientes.dat";

const char *ARCHIVO_PEDIDO = "pedidos.dat"; //es la misma declaración que la de arriba, porque ambos son punteros;

/*COPIAS DE SEGURIDAD*/

const char *COPIA_ARCHIVO_PLATO = "platos.bkp";

const char *COPIA_ARCHIVO_CLIENTE = "cliente.bkp";

const char *COPIA_ARCHIVO_PEDIDO = "pedidos.bkp";

////////////prototipos presentacion////////////
void presentacion();

void presentacion_sin_color();

void presentacion_a_color();

void salami();

void despedida();

/////////////////////////////////////PROTOTIPOS MAIN PRINCIPAL////////////////////////////////
void crear_archivo_platos();
void crear_archivo_cliente();
void crear_archivo_pedido();

void main_principal();

void dibujar_menu_principal(int *);

void crear_archivos_pla_cli_ped();


/////////////prototipos platos/////////////////

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

int cantidad_platos();

void listar_cantidad_platos();

//////////////////////////////prototipos clientes///////////////////////////////
void submenu_clientes();

void dibujar_submenu_clientes(int*);

void nuevo_cliente();

bool cargar_cliente(Clientes *);

int cantidad_clientes();

bool guardar_cliente_en_archivo(Clientes);

void listar_todos_los_clientes();

void ordenar_clientes(Clientes*,int);

Clientes leer_cliente(Clientes,int);

void mostrar_cliente(Clientes);

void mostrar_cantidad_clientes();

void modificar_cliente();

int buscar_posicion_cliente(int);

bool sobreescribir_cliente(int);

void listar_cliente_x_ID();

void mostrar_cliente_x_ID(int);

void eliminar_cliente();

bool baja_del_cliente_en_el_archivo(int);

bool validar_mail_cliente(char*);

bool validar_cantidad_caracteres(char *);

bool validar_fecha(int,int,int);

bool caracter_alfanumerico_antesYDespues_arroba(char*);

//////////////////////////////////////PROTOTIPOS PEDIDOS////////////////////////////
void submenu_pedidos();

void dibujar_submenu_pedidos(int*);

void nuevo_pedido();

bool cargar_pedido(Pedidos*);

int cantidad_pedidos();

float buscar_valor_plato(int);

bool guardar_pedido_en_arhivo(Pedidos);

void listar_pedido_x_ID();

int buscar_posicion_pedido(int);

void mostrar_pedido_x_ID(int);

void mostrar_pedido(Pedidos,int);

void listar_todos_los_pedidos();

void visual_de_mostrar_pedido(int);

bool buscar_estado_cliente_pedido(int);

bool buscar_estado_plato_pedido(int);

void modificar_pedido();

bool sobreescribir_pedido(int);

/////////////////////////////////////PROPOTIPOS CONFIGURACION////////////////////////////
void submenu_configuracion();

void dibujar_submenu_configuracion(int*);

void realizar_copia_seguridad();

bool crear_copias_seguridad();

bool copiar_arhivos_originales_en_copia_seguridad();

bool copiar_platos_en_copia_seguridad();

bool copiar_clientes_en_copia_seguridad();

bool copiar_pedidos_en_copia_seguridad();

void listar_copias_seguridad();

void restaurar_copia_seguridad();

bool copia_seguridad_en_archivo_original();

bool restaurar_archivo_platos();

bool restaurar_archivo_clientes();

bool restaurar_archivo_clientes();

bool restaurar_archivo_pedidos();

int cantidad_platos_copia();

int cantidad_clientes_copia();

int cantidad_pedidos_copia();

#endif // PROTOTIPOS_H_INCLUDED
