#ifndef PLATOS_H_INCLUDED
#define PLATOS_H_INCLUDED
#include "funciones.h"

void submenu_platos(){

    int opc_submenu_platos;
    while(true){

        dibujar_submenu_platos(&opc_submenu_platos);

        switch(opc_submenu_platos){
        case 1:
            nuevo_plato();
            break;
        case 2:
            modificar_plato();
            break;
        case 3:
            listar_plato_por_ID();
            break;
        case 4:
            listar_platos_por_restaurante();
            break;
        case 5:
            listar_todos_los_platos();
            break;
        case 6:
            eliminar_plato();
            break;
        default:
            cout<<"Opcion incorrecta!!!"<<endl;
            break;
        case 0:
            return;
        }
        cout<<endl;
        system("pause");
        cls();
    }


}

#endif // PLATOS_H_INCLUDED
