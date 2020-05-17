#ifndef PEDIDOS_H_INCLUDED
#define PEDIDOS_H_INCLUDED

void submenu_pedidos(){
    int opc;
    while(true){
        setColor(WHITE);
        dibujar_submenu_pedidos(&opc);
        switch(opc){
            case 0: return;
            case 1: nuevo_pedido(); break;
            case 2: modificar_pedido(); break;
            case 3: listar_pedido_x_ID(); break;
            case 4: listar_todos_los_pedidos(); break;
            default:{
                setColor(RED);
                cout<<"Opcion incorrecta!!!"<<endl;
                setColor(WHITE);
            }break;
        }
    anykey();
    cls();
    }
}


#endif // PEDIDOS_H_INCLUDED
