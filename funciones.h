#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void presentacion(){
    presentacion_sin_color();
    presentacion_a_color();
    salami();
    system("pause");
    cls();
}

void presentacion_sin_color(){
    gotoxy(50,1);
    cout<<"TP - LARA"<<endl;
    gotoxy(32,2);            cout<<"///==========================================="<<endl;
    Sleep(200);gotoxy(32,3); cout<<"///==========================================="<<endl;
    Sleep(190);gotoxy(32,4); cout<<"///==========================================="<<endl;
    Sleep(180);gotoxy(32,5); cout<<"   ///;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(170);gotoxy(32,6); cout<<"    ///;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(160);gotoxy(32,7); cout<<"     ///;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(150);gotoxy(32,8); cout<<"      ///;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(140);gotoxy(32,9); cout<<"       ///;;;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(130);gotoxy(32,10);cout<<"        ///;;;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(120);gotoxy(32,11);cout<<"         ///;;;;;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(110);gotoxy(32,12);cout<<"          ///;;;;;;;;;;;;;;;;;;;;;;;"<<endl;///////////
    Sleep(100);gotoxy(32,13);cout<<"           ///;;;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(90);gotoxy(32,14); cout<<"            ///;;;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(80);gotoxy(32,15); cout<<"             ///;;;;;;;;;;;;;;;;;"<<endl;
    Sleep(70);gotoxy(32,16); cout<<"              ///;;;;;;;;;;;;;;;"<<endl;
    Sleep(60);gotoxy(32,17); cout<<"               ///;;;;;;;;;;;;;"<<endl;
    Sleep(50);gotoxy(32,18); cout<<"                ///;;;;;;;;;;;"<<endl;
    Sleep(40);gotoxy(32,19); cout<<"                 ///;;;;;;;;;"<<endl;
    Sleep(30);gotoxy(32,20); cout<<"                  ///;;;;;;;"<<endl;
    Sleep(20);gotoxy(32,21); cout<<"                   ///;;;;;"<<endl;
    Sleep(10);gotoxy(32,22); cout<<"                    ///;;;"<<endl;
    Sleep(5);gotoxy(32,23);  cout<<"                     ///;"<<endl;
             gotoxy(32,24);  cout<<"                      //"<<endl;
}

void salami(){
    Sleep(350);
    setColor(RED);
    gotoxy(45,7);cout<<"°°°°°";
    gotoxy(44,8);cout<<"°°°°°°°";
    gotoxy(45,9);cout<<"°°°°°";

    Sleep(250);

    gotoxy(61,11);cout<<"°°°°°";
    gotoxy(59,12);cout<<"°°°°°°°°°";
    gotoxy(57,13);cout<<"°°°°°°°°°°";
    gotoxy(56,14);cout<<"°°°°°°°°°°";
    gotoxy(54,15);cout<<"°°°°°°°°°°°";////medio
    gotoxy(56,16);cout<<"°°°°°°°°";
    gotoxy(57,17);cout<<"°°°°°°";
    gotoxy(59,18);cout<<"°°°";

    setColor(WHITE);
    gotoxy(65,24);cout<<"°°°°°°°°°°°°";
    gotoxy(65,25);cout<<"°°°°°°°°°°°°";
    gotoxy(65,26);cout<<"°°°°°°°°°°°°";

    setColor(GREEN);
    Sleep(250);
    gotoxy(66,25);cout<<"By Hernan.";

    cout<<"\n\n";
    setColor(WHITE);
}

void presentacion_a_color(){

    setColor(YELLOW);
    Sleep(100);gotoxy(35,5); cout<<"///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,6); cout<<" ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,7); cout<<"  ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,8); cout<<"   ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,9); cout<<"    ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,10);cout<<"     ///°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,11);cout<<"      ///°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,12);cout<<"       ///°°°°°°°°°°°°°°°°°°°°°°°"<<endl;///////////

    Sleep(100);gotoxy(35,23);cout<<"                  ///°"<<endl;
    Sleep(100);gotoxy(35,22);cout<<"                 ///°°°"<<endl;
    Sleep(100);gotoxy(35,21);cout<<"                ///°°°°°"<<endl;
    Sleep(100);gotoxy(35,20);cout<<"               ///°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,19);cout<<"              ///°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,18);cout<<"             ///°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,17);cout<<"            ///°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,16);cout<<"           ///°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,15);cout<<"          ///°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,14);cout<<"         ///°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(100);gotoxy(35,13);cout<<"        ///°°°°°°°°°°°°°°°°°°°°°"<<endl;

    ///////////BORDES IZQUIERDA PIZZA /////////////
    int x=0;
    for(int i=0;i<20;i++){
        Sleep(100-x);
        x+=5;
        setColor(BROWN);
        if(i==19){
            gotoxy(35+i,5+i);cout<<"°°";
            break;
        }
        gotoxy(35+i,5+i);cout<<"°°°";
    }

    /////////////BORDE ARRIBA PIZZA////////////
    setColor(BROWN);
    for(int x=0;x<3;x++){
        gotoxy(32,2+x);
        for(int y=0;y<46;y++){
            Sleep(10);
            cout<<"°";

        }

    }
}

void main_principal(){
    int opc_menu_principal;
    while(true){
        dibujar_menu_principal(&opc_menu_principal);
        switch(opc_menu_principal){
        case 0:
            return;
        case 1:
            submenu_platos();
            break;

        default:
            cout<<"Opcion incorrecta!!!"<<endl;
            break;
        }
        system("pause");
        cls();
    }
}

void dibujar_menu_principal(int *opc_menu_principal){
    cout<<"MENÚ PRINCIPAL"<<endl;
    cout<<"=============="<<endl;
    cout<<"[1] PLATOS"<<endl;
    cout<<"[2] CLIENTES"<<endl;
    cout<<"[3] PEDIDOS"<<endl;
    cout<<"[4] REPORTES"<<endl;
    cout<<"[5] CONFIGURACIÓN"<<endl;
    cout<<"======================"<<endl;
    cout<<"[0] SALIR DEL PROGRAMA"<<endl;
    cout<<"Opcion: [   ]";
    gotoxy(11,10);
    cin>>*opc_menu_principal;
    cls();
}

////////////////////FUNCIONES DE PLATOS///////////////////////////

void dibujar_submenu_platos(int *opc_submenu_platos){
    cout<<"MENÚ PLATOS"<<endl;
    cout<<"=================="<<endl;
    cout<<"[1] NUEVO PLATO"<<endl;
    cout<<"[2] MODIFICAR PLATO"<<endl;
    cout<<"[3] LISTAR PLATO POR ID"<<endl;
    cout<<"[4] PLATOS POR RESTAURANT"<<endl;
    cout<<"[5] LISTAR TODOS LOS PLATOS"<<endl;
    cout<<"[6] ELIMINAR PLATO"<<endl;
    cout<<"================================"<<endl;
    cout<<"[0] VOLVER AL MENÚ PRINCIPAL"<<endl;
    cout<<"Opcion: ";
    cin>>*opc_submenu_platos;
    cls();
    crear_archivo_platos();
}

void crear_archivo_platos(){
    FILE *p = fopen(ARCHIVO_PLATO,"ab");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para crearlo. *"<<endl;
        return;
    }
    fclose(p);
    return;
}

void nuevo_plato(){
    Platos var_platos;
    if( cargar_plato(&var_platos) == false ){
        cout<<"No se pudo cargar el plato."<<endl;
        return;
    }
    else if(guardar_plato_en_archivo(var_platos) == false){
        cout<<"No se pudo guardar el plato en el archivo."<<endl;
        return;
    }
    cout<<"Plato cargado y guardado en el archivo correctamente."<<endl;
    return;
}

bool cargar_plato(Platos *var_platos){
    cout<<"\t\t---Datos plato---"<<endl;
    cout<<"ID: ";
    cin>>var_platos -> ID_plato;
    if( var_platos->ID_plato < 1 ){ //debe ser un número entero positivo
        cout<<"*Error --- Ingrese un ID positivo."<<endl;
        return false;
    }
    if( existe_plato(var_platos->ID_plato) ){
        cout<<"* Error --- Ya existe un plato con el ID ingresado."<<endl;
        return false;
    }
    cin.ignore();
    cout<<"Nombre: ";
    cin.getline(var_platos->nombre_plato,50);
    cout<<"Costo de preparación: ";
    cin>>var_platos->costo_preparacion_plato;
    if(var_platos->costo_preparacion_plato < 0){ //número real que no puede ser negativo;
        cout<<"*Error --- Ingrese un numero entero y positivo."<<endl;
        return false;
    }
    cout<<"Valor de venta: ";
    cin>>var_platos->valor_venta_plato;
    if(var_platos->valor_venta_plato < var_platos->costo_preparacion_plato ||
       var_platos->valor_venta_plato < 0){
        cout<<"*Error --- El valor de venta del plato debe ser positivo y mayor al costo de preparación."<<endl;
        return false;
    }
    cout<<"Tiempo de preparación: ";
    cin>>var_platos->tiempo_preparacion_plato;
    if(var_platos->tiempo_preparacion_plato < 0){
        cout<<"*Error --- El tiempo de preparación debe ser un numero positivo."<<endl;
        return false;
    }
    cout<<endl;
    cout<<"\t\t---Datos Restaurante---"<<endl;
    cout<<"ID: ";
    cin>>var_platos->ID_restaurante;
    if(var_platos->ID_restaurante < 1){
        cout<<"*Error --- El ID del restaurante debe ser positivo."<<endl;
        return false;
    }
    cout<<"Comisión del restaurante: ";
    cin>>var_platos->comision_restaurante;
    if(var_platos->comision_restaurante < 0 || var_platos->comision_restaurante >100){
        cout<<"Error --- La comisión debe ser un valor entre 0 (cero) y 100 (cien)."<<endl;
        return false;
    }
    cout<<"ID de categoria: ";
    cin>>var_platos->ID_categoria;
    if(var_platos->ID_categoria < 1){
        cout<<"Error --- El ID de categoría debe ser entero positivo."<<endl;
        return false;
    }
    var_platos->estado_plato=true;
    return true;
}

bool existe_plato(int ID_plato_buscado){
    Platos var_platos;
    FILE *p;
    p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"*Error --- No se pudo abrir el archivo para verificar si existe el plato en el archivo. *"<<endl;
        return true; //no se si existe pero no pude abrir el archivo,por lo tanto hago como que existe para no cargarlo;
    }
    while( fread(&var_platos, sizeof(Platos), 1, p) == 1 ){
        if(ID_plato_buscado == var_platos.ID_plato){
            fclose(p);
            return true;
        }
    }
    fclose(p);
    return false; //no existe el plato;
}

bool guardar_plato_en_archivo(Platos var_platos){
    FILE *p;
    p = fopen(ARCHIVO_PLATO,"ab");
    if(p == NULL){
        cout<<"No se pudo abrir el archivo."<<endl;
        return false;
    }
    if( fwrite(&var_platos,sizeof(Platos),1,p) == 0){
        cout<<"No se pudo escribir en el archivo."<<endl;
        fclose(p);
        return false;
    }
    fclose(p);
    return true;
}

void listar_todos_los_platos(){
    Platos var_platos;
    FILE *p;
    p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"No se pudo abrir el archivo."<<endl;
        return;
    }
    int i=0;
    while(fread(&var_platos,sizeof(Platos),1,p) == 1){
        mostrar_plato(var_platos,i);
        i++;
    }
    fclose(p);
}

void mostrar_plato(Platos var_platos,int i){
    visual_de_mostrar_plato(i);

    if(var_platos.estado_plato){
        setColor(GREEN); //si el plato está activo,lo muestro en verde;
    }
    else{
        setColor(RED); //si el plato está inactivo, lo muestro en rojo;
    }

    gotoxy(3,4+i*2);cout<<var_platos.ID_plato;
    gotoxy(10,4+i*2);cout<<var_platos.nombre_plato;
    gotoxy(33,4+i*2);cout<<"$"<<var_platos.costo_preparacion_plato;
    gotoxy(41,4+i*2);cout<<"$"<<var_platos.valor_venta_plato;
    gotoxy(52,4+i*2);cout<<var_platos.tiempo_preparacion_plato;
    gotoxy(64,4+i*2);cout<<var_platos.ID_restaurante;
    gotoxy(77,4+i*2);cout<<var_platos.comision_restaurante<<" %";
    gotoxy(90,4+i*2);cout<<var_platos.ID_categoria;
    gotoxy(102,4+i*2);
    if(var_platos.estado_plato){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    Sleep(150);
    setColor(WHITE);
    //////division entre los diferentes datos,parte de abajo,1x1;
    cout<<"#---------------------------------------------------------------------------------------------------------#"<<endl;
}

void visual_de_mostrar_plato(int i){
    gotoxy(1,1);cout<<"#=========================================================================================================#";
    gotoxy(1,2);cout<<"|  ID  |        Nombre        | Costo | Precio | Tiempo | ID Restaurant | Comisión | IDCategoria | Estado |";
    gotoxy(1,3);cout<<"#=========================================================================================================#";

    ///////barritas que van al costado de los campos///////////
    gotoxy(1,4+i*2);cout<<"|";  //izq ID;
    gotoxy(8,4+i*2);cout<<"|";  //izq nombre;
    gotoxy(31,4+i*2);cout<<"|"; //izq costo;
    gotoxy(39,4+i*2);cout<<"|"; //izq precio;
    gotoxy(48,4+i*2);cout<<"|"; //izq tiempo;
    gotoxy(57,4+i*2);cout<<"|"; //izq ID Rest;
    gotoxy(73,4+i*2);cout<<"|"; //izq comision;
    gotoxy(84,4+i*2);cout<<"|"; //izq IDCat;
    gotoxy(98,4+i*2);cout<<"|"; //izq estado;
    gotoxy(107,4+i*2);cout<<"|"<<endl; //der estado;
}

void modificar_plato(){
    int ID_a_buscar, posicion_ID;
    cout<<"Ingrese un ID a buscar: ";
    cin>>ID_a_buscar;
    if(ID_a_buscar < 0){
        cout<<"* Error --- Ingrese un ID positivo."<<endl;
        return;
    }
    posicion_ID = buscar_posicion_plato(ID_a_buscar);
    if(posicion_ID >= 0){
        mostrar_plato_por_ID(posicion_ID);
        if(sobreescribir_plato(posicion_ID)){
            cout<<"Plato editado correctamente."<<endl;
            return;
        }
        else{
            cout<<"No se pudo editar el plato."<<endl;
        }
    }
    else{
        cout<<"No existe el ID ingresado."<<endl;
    }
}

int buscar_posicion_plato(int ID_a_buscar){
    Platos var_platos;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"* Error --- No se pudo abrir el archivo."<<endl;
        return -2;
    }
    int pos=0;
    while( fread(&var_platos,sizeof(Platos), 1, p) == 1){
        if(ID_a_buscar == var_platos.ID_plato){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    pos = -1;
    cout<<"* Error - No se enctró el ID ingresado. *"<<endl;
    return pos;
}

bool sobreescribir_plato(int pos){
    Platos var_platos;
    FILE *p = fopen(ARCHIVO_PLATO,"rb+");
    if(p == NULL){
        cout<<"* Error --- No se pudo abrir el archivo."<<endl;
        return false;
    }
    fseek(p,pos*sizeof(Platos), SEEK_SET);
    fread(&var_platos,sizeof(Platos),1,p);
    if(cargar_plato_para_sobreescribir(&var_platos) == false){
        cout<<"* Error --- No se pudo cargar el plato. *"<<endl;
        return false;
    }
    fseek(p,pos*sizeof(Platos), SEEK_SET);
    if(fwrite(&var_platos,sizeof(Platos),1,p)){
        cout<<"Plato sobreescrito en el archivo correctamente."<<endl;
        fclose(p);
        return true;
    }
    else{
        cout<<"No se pudo sobreescribir el Plato en el archivo."<<endl;
        fclose(p);
        return false;
    }
}

void mostrar_plato_por_ID(int pos){
    Platos var_platos;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"* Error --- No se pudo abrir el archivo."<<endl;
        return;
    }
    fseek(p, pos*sizeof(Platos), SEEK_SET);
    fread(&var_platos, sizeof(Platos),1,p);
    int i=0;
    mostrar_plato(var_platos,i);
    fclose(p);
}

bool cargar_plato_para_sobreescribir(Platos *var_platos){
    cout<<"Nuevo valor de venta: "<<endl;
    cin>>var_platos->valor_venta_plato;
    if(var_platos->valor_venta_plato < var_platos->costo_preparacion_plato){
        cout<<"* Error --- Ingrese un valor de plato mayor al costo de preparación. *"<<endl;
        return false;
    }
    cout<<"Nuevo tiempo de preparación: ";
    cin>>var_platos->tiempo_preparacion_plato;
    return true;
}

void listar_plato_por_ID(){
    int ID;
    cout<<"Ingrese un ID: ";
    cin>>ID;
    if(existe_plato(ID)){
        mostrar_plato_por_ID(buscar_posicion_plato(ID));
    }
    else{
        cout<<"No existe el plato con el ID ingresado."<<endl;
    }
}

void listar_platos_por_restaurante(){
    int ID_restaurante_a_buscar;
    cout<<"Ingrese ID de restaurante: ";
    cin>>ID_restaurante_a_buscar;
    if(existe_restaurante(ID_restaurante_a_buscar) == false){
        cout<<"No se encontró un restaurante en el archivo con el ID ingresado."<<endl;
        return;
    }
    mostrar_plato_por_restaurante(ID_restaurante_a_buscar);
}

bool existe_restaurante(int ID_restaurante_a_buscar){
    Platos var_platos;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para comprobar si existe el restaurante."<<endl;
        return false;
    }
    while(fread(&var_platos,sizeof(Platos),1,p) == 1){
        if(ID_restaurante_a_buscar == var_platos.ID_restaurante){
            fclose(p);
            return true;
        }
    }
    fclose(p);
    return false;
}

void mostrar_plato_por_restaurante(int ID_restaurante_a_buscar){
    Platos var_platos;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para mostrar los platos por restaurante."<<endl;
        return;
    }
    int i=0;
    while(fread(&var_platos,sizeof(Platos),1,p) == 1){
        if(ID_restaurante_a_buscar == var_platos.ID_restaurante){
            mostrar_plato(var_platos,i);
            i++;
        }
    }
    fclose(p);
}

void eliminar_plato(){
    Platos var_platos;
    int ID_plato_a_eliminar, pos;
    cout<<"Ingrese el ID del plato que desea eliminar: ";
    cin>>ID_plato_a_eliminar;
    if(existe_plato(ID_plato_a_eliminar) == false){
        cout<<"No existe el ID ingresado."<<endl;
        return;
    }
    pos = buscar_posicion_plato(ID_plato_a_eliminar);
    if(pos>=0){
        mostrar_plato_por_ID(pos);
        int opc;
        cout<<"Seguro que desea dar de baja el plato?"<<endl;
        cout<<"[1] - Para si."<<endl;
        cout<<"Cualquier otro numero para no."<<endl;
        cin>>opc;

        if(opc!=1){
            cout<<"No se modificó el plato."<<endl;
            return;
        }
        else{
            if(baja_del_plato_en_el_archivo(var_platos, pos)){
                cout<<endl;
                cout<<"Baja del plato realizada correctamente."<<endl;
            }
            else{
                cout<<endl;
                cout<<"No se pudo dar la baja del plato."<<endl;
            }
        }
    }

}

bool baja_del_plato_en_el_archivo(Platos var_platos, int pos){
    var_platos.estado_plato = false;
    FILE *p = fopen(ARCHIVO_PLATO,"rb+");
    if(p == NULL){
        cout<<"No se pudo abrir el archivo para hacer la baja lógica del plato."<<endl;
        return false;
    }
    fseek(p,pos*sizeof(Platos),SEEK_SET);
    if(fread(&var_platos,sizeof(Platos),1,p)){
        fseek(p,pos*sizeof(Platos),SEEK_SET);
        var_platos.estado_plato = false;
        fwrite(&var_platos,sizeof(Platos),1,p);
        fclose(p);
        return true;
    }
    else{
        cout<<"No se pudo leer el archivo para dar de baja el plato."<<endl;
        fclose(p);
        return false;
    }
}

#endif // FUNCIONES_H_INCLUDED
