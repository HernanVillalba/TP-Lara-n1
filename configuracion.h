#ifndef CONFIGURACION_H_INCLUDED
#define CONFIGURACION_H_INCLUDED

void submenu_configuracion(){
    int opc;
    while(true){
        dibujar_submenu_configuracion(&opc);
        switch(opc){
            case 0: return;
            case 1: realizar_copia_seguridad(); break;
            case 2: restaurar_copia_seguridad(); break;
            case 19991: listar_copias_seguridad(); break;
            default: setColor(RED);cout<<"Opción incorrecta!!!"<<endl;setColor(WHITE); break;
        }
        anykey();
        cls();
    }

}


#endif // CONFIGURACION_H_INCLUDED
