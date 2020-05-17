#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

void submenu_clientes(){
    int opc_submenu_clientes;
    while(true){
        setColor(WHITE);
        dibujar_submenu_clientes(&opc_submenu_clientes);
        cin.ignore();
        switch(opc_submenu_clientes){
            case 0: return;
            case 1: nuevo_cliente(); break;
            case 2: modificar_cliente(); break;
            case 3: listar_cliente_x_ID(); break;
            case 4: listar_todos_los_clientes(); break;
            case 5: eliminar_cliente(); break;
            case 6: mostrar_cantidad_clientes(); break;
            default:
                setColor(RED);
                cout<<"Opción incorrecta!!!"<<endl;
                setColor(WHITE);
                break;
        }
        cout<<endl;
        anykey();
        cls();
    }
}


#endif // CLIENTES_H_INCLUDED
