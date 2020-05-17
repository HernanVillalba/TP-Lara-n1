#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

////////////////////////77////////////////////FUNCIONES PRESENTACION/////////////////////////////////////////////////////////////
void presentacion(){
    presentacion_sin_color();
    presentacion_a_color();
    salami();
    system("pause");
    cls();
}

void despedida(){
    int num =300;
    for(int i=1;i<=num;i++){
            Sleep(20+i);
            setColor(GREEN);
            cout<<"1011";
        if(i%2!=0){
            cout<<"010";
        }
        else{
            Sleep(5+i);
            cout<<"01011";
        }
    }
    gotoxy(30,3);cout<<"°°°";                          gotoxy(36,3);cout<<"°°°";
        gotoxy(30,4);cout<<"°°°";                          gotoxy(36,4);cout<<"°°°";
        gotoxy(30,5);cout<<"°°°";gotoxy(33,5);cout<<"°°°°";gotoxy(36,5);cout<<"°°°";
        gotoxy(30,6);cout<<"°°°";                          gotoxy(36,6);cout<<"°°°";
        gotoxy(30,7);cout<<"°°°";                          gotoxy(36,7);cout<<"°°°"<<endl;
}

void presentacion_sin_color(){
    gotoxy(50,1);
    cout<<"TP - LARA"<<endl;
    gotoxy(32,2);            cout<<"///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(200);gotoxy(32,3); cout<<"///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(190);gotoxy(32,4); cout<<"///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(180);gotoxy(32,5); cout<<"   ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(170);gotoxy(32,6); cout<<"    ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(160);gotoxy(32,7); cout<<"     ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(150);gotoxy(32,8); cout<<"      ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(140);gotoxy(32,9); cout<<"       ///°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(130);gotoxy(32,10);cout<<"        ///°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(120);gotoxy(32,11);cout<<"         ///°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(110);gotoxy(32,12);cout<<"          ///°°°°°°°°°°°°°°°°°°°°°°°"<<endl;///////////
    Sleep(100);gotoxy(32,13);cout<<"           ///°°°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(90);gotoxy(32,14); cout<<"            ///°°°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(80);gotoxy(32,15); cout<<"             ///°°°°°°°°°°°°°°°°°"<<endl;
    Sleep(70);gotoxy(32,16); cout<<"              ///°°°°°°°°°°°°°°°"<<endl;
    Sleep(60);gotoxy(32,17); cout<<"               ///°°°°°°°°°°°°°"<<endl;
    Sleep(50);gotoxy(32,18); cout<<"                ///°°°°°°°°°°°"<<endl;
    Sleep(40);gotoxy(32,19); cout<<"                 ///°°°°°°°°°"<<endl;
    Sleep(30);gotoxy(32,20); cout<<"                  ///°°°°°°°"<<endl;
    Sleep(20);gotoxy(32,21); cout<<"                   ///°°°°°"<<endl;
    Sleep(10);gotoxy(32,22); cout<<"                    ///°°°"<<endl;
    Sleep(5);gotoxy(32,23);  cout<<"                     ///°"<<endl;
             gotoxy(32,24);  cout<<"                      //"<<endl;
}

void salami(){
    Sleep(350);
    setColor(RED);
    gotoxy(53,5);cout<<"°°°";
    gotoxy(51,6);cout<<"°°°°°°°";
    gotoxy(50,7);cout<<"°°°°°°°°°";
    gotoxy(51,8);cout<<"°°°°°°°";
    gotoxy(53,9);cout<<"°°°";

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


///////////////////////////////////////////////////MAIN PRINCIPAL////////////////////////////////////////////////////////////////
void main_principal(){
    int opc_menu_principal;
    while(true){
        dibujar_menu_principal(&opc_menu_principal);
        switch(opc_menu_principal){
        case 0: return;
        case 1: submenu_platos(); break;
        case 2: submenu_clientes(); break;
        case 3: submenu_pedidos(); break;
        case 4: setColor(RED);
                cout<<"No está codeado aún :("<<endl;
                setColor(WHITE);
                break;
        case 5: submenu_configuracion(); break;
        default: cout<<"Opcion incorrecta!!!"<<endl; break;
        }
        anykey();
        cls();
    }
}

void dibujar_menu_principal(int *opc_menu_principal){
    crear_archivos_pla_cli_ped();
    setColor(WHITE);
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

void crear_archivos_pla_cli_ped(){
    /*crea los archivos si no existen, solo eso;
    viene bien para cuando usas el programa la primera vez;
    lo uso porque hay validaciones en la carga de los archivos en las que solo uso el modo leer y si era el primer registro cargado -
        me tiraba error de que no se pudo abrir el archivo ya que este nunca fue creado;
    */
    void crear_archivo_platos();
    void crear_archivo_cliente();
    void crear_archivo_pedido();
}


//////////////////////////////////////////////////FUNCIONES DE PLATOS/////////////////////////////////////////////////////////////
void dibujar_submenu_platos(int *opc_submenu_platos){
    setColor(WHITE);
    cout<<"MENÚ PLATOS"<<endl;
    cout<<"=================="<<endl;
    cout<<"[1] - NUEVO PLATO"<<endl;
    cout<<"[2] - MODIFICAR PLATO"<<endl;
    cout<<"[3] - LISTAR PLATO POR ID"<<endl;
    cout<<"[4] - PLATOS POR RESTAURANT"<<endl;
    cout<<"[5] - LISTAR TODOS LOS PLATOS"<<endl;
    cout<<"[6] - ELIMINAR PLATO"<<endl;
    cout<<"[7] - CANTIDAD DE PLATOS"<<endl;
    cout<<"================================"<<endl;
    cout<<"[0] - VOLVER AL MENÚ PRINCIPAL"<<endl;
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
}

void nuevo_plato(){
    Platos var_platos;
    if( cargar_plato(&var_platos) == false ){
        setColor(RED);
        cout<<"- No se pudo cargar el plato."<<endl;
        setColor(WHITE);
        return;
    }
    else if(guardar_plato_en_archivo(var_platos) == false){
        setColor(RED);
        cout<<"- No se pudo guardar el plato en el archivo."<<endl;
        setColor(WHITE);
        return;
    }

    setColor(GREEN);
    cout<<"Plato cargado y guardado en el archivo correctamente."<<endl;
    setColor(WHITE);
}

bool cargar_plato(Platos *var_platos){
    cout<<"\t\t---Datos plato---"<<endl;
    cout<<"ID: ";
    cin>>var_platos -> ID_plato;
    if( var_platos->ID_plato < 1 ){ //debe ser un número entero positivo
        cout<<"*Error *"<<endl;
        cout<<"- Ingrese un ID positivo."<<endl;
        return false;
    }
    if( existe_plato(var_platos->ID_plato) ){
        cout<<"* Error *"<<endl;
        cout<<"- Ya existe un plato con el ID ingresado."<<endl;
        return false;
    }
    cin.ignore();
    cout<<"Nombre: ";
    cin.getline(var_platos->nombre_plato,50);
    if(!validar_cantidad_caracteres(var_platos->nombre_plato)){
        return false;
    }

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
        setColor(RED);
        cout<<"No se pudo abrir el archivo."<<endl;
        setColor(WHITE);
        return;
    }
    int cant = cantidad_platos();
    if(cant == 0){
        setColor(RED);
        cout<<"No hay platos para mostrar."<<endl;
        setColor(WHITE);
        return;
    }
    for(int i=0;i<cant;i++){
        fread(&var_platos,sizeof(Platos),1,p);
        mostrar_plato(var_platos,i);
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
    setColor(WHITE);
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
        setColor(RED);
        cout<<"* Error *"<<endl;
        cout<<"- No se pudo abrir el archivo."<<endl;
        setColor(WHITE);
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

int cantidad_platos(){
    int bytes,tam;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    fseek(p,0,SEEK_END); //posiciono el puntero al final del archivo;
    bytes = ftell(p); //cantidad de bytes hasta donde se encuentra el puntero actualmente;
    tam = bytes/sizeof(Platos); //divido el tamaño total del archivo en bystes por el tamaño de cada registro;
    fclose(p);
    return tam;
}

void listar_cantidad_platos(){
    int cant = cantidad_platos();
    if(cant == 0){
        setColor(RED);
        cout<<"No hay para platos."<<endl;
        setColor(WHITE);
        return;
    }
    setColor(GREEN);
    cout<<"Cantidad de platos en el archivo: "<<cant<<endl;
    setColor(WHITE);
}


////////////////////////////////////////////////funciones clientes/////////////////////////////////////////////////////////////////
void dibujar_submenu_clientes(int *opc){
    setColor(WHITE);
    cout<<"MENÚ CLIENTES"<<endl;
    cout<<"=================="<<endl;
    cout<<"[1] NUEVO CLIENTE"<<endl;
    cout<<"[2] MODIFICAR CLIENTE"<<endl;
    cout<<"[3] LISTAR CLIENTE POR ID"<<endl;
    cout<<"[4] LISTAR TODOS LOS CLIENTES"<<endl;
    cout<<"[5] ELIMINAR CLIENTE"<<endl;
    cout<<"[6] MOSTRAR CANTIDAD DE CLIENTES"<<endl;
    cout<<"================================"<<endl;
    cout<<"[0] VOLVER AL MENÚ PRINCIPAL"<<endl;
    cout<<"OPCIÓN: ";
    cin>>*opc;
    cls();
    crear_archivo_cliente();
}

void crear_archivo_cliente(){
    FILE *p = fopen(ARCHIVO_CLIENTE,"ab");
    if(p == NULL){
        cout<<"No se pudo abrir archivo para crearlo."<<endl;
        return;
    }
    fclose(p);
}

void nuevo_cliente(){
    Clientes var_cli;
    if(cargar_cliente(&var_cli) == false){
        setColor(RED);
        cout<<"No se pudo cargar el cliente."<<endl;
        setColor(WHITE);
        return;
    }
    else if(guardar_cliente_en_archivo(var_cli) == false){
        setColor(RED);
        cout<<"No se pudo guardar el cliente en archivo."<<endl;
        setColor(WHITE);
        return;
    }

    cls();
    setColor(GREEN);
    cout<<"Cliente cargado y guardado correctamente."<<endl;
    setColor(WHITE);
}

bool cargar_cliente(Clientes *var_cli){
    int ID;
    ID = cantidad_clientes();
    if( ID < 0){
        return false;
    }
    var_cli->ID_cliente = ID+1;
    cout<<"ID: #"<<var_cli->ID_cliente<<endl;

    cout<<"Apellidos: ";
    cin.getline(var_cli->apellidos_cliente,50);
    if(validar_cantidad_caracteres(var_cli->apellidos_cliente) == false){
        return false;
    }

    cout<<"Nombres: ";
    cin.getline(var_cli->nombres_cliente,50);
    if(validar_cantidad_caracteres(var_cli->nombres_cliente) == false){
        return false;
    }
    cout<<"Mail: ";
    cin.getline(var_cli->mail_cliente,50);
    if(validar_cantidad_caracteres(var_cli->mail_cliente) == false){
        return false;
    }
    if(validar_mail_cliente(var_cli->mail_cliente) == false){
        return false;
    }

    cout<<"Domicilio: ";
    cin.getline(var_cli->domicilio_cliente,100);
    if(validar_cantidad_caracteres(var_cli->domicilio_cliente) == false){
        return false;
    }

    cout<<"CP: ";
    cin>>var_cli->CP_cliente;
    if(var_cli->CP_cliente < 1000 ||
       var_cli->CP_cliente > 9999){
        setColor(RED);
        cout<<"* Error --- Debe ingresar un numero entre 1000 y 9999."<<endl;
        setColor(WHITE);
        return false;
    }

    cout<<"Fecha de nacimiento..."<<endl;
    cout<<"Día: ";
    cin>>var_cli->fec_nac.dia;
    cout<<"Mes: ";
    cin>>var_cli->fec_nac.mes;
    cout<<"Año: ";
    cin>>var_cli->fec_nac.anio;
    cin.ignore();
    if(validar_fecha(var_cli->fec_nac.dia,
                    var_cli->fec_nac.mes,
                    var_cli->fec_nac.anio) == false){
        setColor(RED);
        cout<<"* ERROR --- Ingrese una fecha válida.*"<<endl;
        setColor(WHITE);
        return false;
    }

    var_cli->estado=true;
    return true;
}

bool validar_fecha(int diaNac,int mesNac, int anioNac){
    int diaAct,mesAct,anioAct;
    int fechaNacimiento=0,fechaLimite=0,diferencia;
    time_t tiempo_ahora;
    time(&tiempo_ahora);
    struct tm*mi_tiempo = localtime(&tiempo_ahora);
    diaAct=mi_tiempo->tm_mday;
    mesAct = mi_tiempo->tm_mon+1;
    anioAct = mi_tiempo->tm_year+1900;

    fechaLimite = diaAct + mesAct*30 + anioAct*365 ;
    fechaNacimiento = diaNac + mesNac*30 + anioNac*365;
    diferencia = fechaLimite - fechaNacimiento;
    if(diferencia < 0 ){
        cout<<"Fecha ingresada mayor a la actual."<<endl;
        return false;
    }

    if((diaNac>0 && diaNac<31) && (mesNac>0 && mesNac<13) && (anioNac<=anioAct && anioNac>0)){
        if(mesNac!=2){
            return true;
        }

        else if(diaNac>28){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }

}

bool validar_cantidad_caracteres(char *cadena){
    int tam = strlen(cadena);
    if(tam > 0){
        return true;
    }
    else{
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- Este campo no puede ser vacío."<<endl;
        setColor(WHITE);
        return false;
    }
}

bool validar_mail_cliente(char *mail){
    const int tam = strlen(mail);
    int contArroba = 0,tamanioCadena;
    bool tieneArroba=false, tienPunto=false;

    tamanioCadena = strlen(mail); //averiguo el tamaño de la cadena para saber el ultimo caracter de esta;

    if(mail[tamanioCadena-1] == '.' || mail[tamanioCadena-1] == '@'){ //no puede terminar en punto;
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- El mail no puede terminar con un punto(.)."<<endl;
        setColor(WHITE);
        return false;
    }

    for(int i=0; i<tam; i++){
        if((mail[i] == '@' || mail[i] == '.') && i == 0){ //si el primer caracter de la cadena empieza con '@' o '.', no cargo el mail y devuelvo false;
            setColor(RED);
            cout<<"* ERROR *"<<endl;
            cout<<"- El mail no puede comenzar con arroba o punto."<<endl;
            setColor(WHITE);
            return false;
        }

        if(mail[i] == '@'){
            tieneArroba = true;
            contArroba++;
        }
        if(contArroba >= 2){
            setColor(RED);
            cout<<"* ERROR *"<<endl;
            cout<<"- El mail no puedo tener mas de 2(dos) arrobas(@)."<<endl;
            setColor(WHITE);
            return false;
        }

        if(mail[i] == '.'){
            tienPunto = true;
            if(mail[i+1] == '.'){ //no puede tener 2 puntos seguidos;
                setColor(RED);
                cout<<"* ERROR *"<<endl;
                cout<<"- El mail no puede tener dos puntos(.) seguidos."<<endl;
                setColor(WHITE);
                return false;
            }
        }
    }//llave for

    if(caracter_alfanumerico_antesYDespues_arroba(mail) == false){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- El mail debe tener un caracter alfanumerico ANTES y DESPUÉS del arroba(@)."<<endl;
        setColor(WHITE);
        return false;
    }

    if(tieneArroba == false || tienPunto == false){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- El mail debe tener al menos 1 arroba (@) y al menos 1 punto (.)."<<endl;
        setColor(WHITE);
        return false;
    }

    return true;

}

bool caracter_alfanumerico_antesYDespues_arroba(char *mail){
    char alfaNum[10] =      {'0','1','2','3','4','5','6','7','8','9'};
    char alfaABC[27] =      {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','u','v','w','x','y','z'};
    char alfaABCMayus[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','Ñ','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    bool priCaracter=false,segCaracter=false;
    int tam_mail;
    tam_mail = strlen(mail);

    for(int i=0; i<tam_mail; i++){ //recorro el mail
        if(mail[i] == '@'){ //cuando encuentro el '@', pregunto si hay un caracter alfanumerico antes y despues de este;
            //////////caracter alfanumerico ANTES del arroba
            for(int x=0;x<10;x++){
                if(mail[i-1] == alfaNum[x]){ //pregunto por los numero;
                    priCaracter=true;
                }
            }
            for(int y=0;y<27;y++){
                if(mail[i-1] == alfaABC[y]){ //preguntos por las letras minusculas;
                    priCaracter=true;
                }
            }
            for(int y=0;y<27;y++){
                if(mail[i-1] == alfaABCMayus[y]){ // pregunto por las letras mayusculas;
                    priCaracter=true;
                }
            }
        //////////caracter alfanumerico DESPUES del arroba
            for(int x=0;x<10;x++){
                if(mail[i+1]==alfaNum[x]){
                    segCaracter=true;
                }
            }
            for(int y=0;y<27;y++){
                if(mail[i+1]==alfaABC[y]){
                    segCaracter=true;
                }
            }
            for(int y=0;y<27;y++){
                if(mail[i+1]==alfaABCMayus[y]){
                    segCaracter=true;
                }
            }
        }
    }


    if(priCaracter && segCaracter){
        return true;
    }
    else{
        return false;
    }
}

int cantidad_clientes(){
    int bytes, cant_ID;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para saber su tamaño."<<endl;
        setColor(WHITE);
        return -1;
    }
    fseek(p,0,SEEK_END);
    bytes = ftell(p);
    cant_ID = bytes / sizeof(Clientes);
    return cant_ID;
}

bool guardar_cliente_en_archivo(Clientes var_cli){
    FILE *p = fopen(ARCHIVO_CLIENTE,"ab");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para guardar el cliente."<<endl;
        return false;
    }
    if(fwrite(&var_cli,sizeof(Clientes),1,p) == 0){
        cout<<"* ERROR --- No se pudo escribir en el archivo."<<endl;
        fclose(p);
        return false;
    }
    fclose(p);
    return true;
}

void listar_todos_los_clientes(){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para leerlo."<<endl;
        return;
    }
    while(fread(&var_cli,sizeof(Clientes),1,p) == 1){
        mostrar_cliente(var_cli);
    }
    fclose(p);
}

void mostrar_cliente(Clientes var_cli){
    if(var_cli.estado){
        setColor(GREEN);
    }
    else{
        setColor(RED);
    }
    cout<<"ID: #"<<var_cli.ID_cliente<<endl;
    cout<<"Apellidos: "<<var_cli.nombres_cliente<<endl;
    cout<<"Nombres: "<<var_cli.apellidos_cliente<<endl;
    cout<<"Mail: "<<var_cli.mail_cliente<<endl;
    cout<<"Domicilio: "<<var_cli.domicilio_cliente<<endl;
    cout<<"CP: "<<var_cli.CP_cliente<<endl;
    cout<<"Fecha de nacimiento: "<<var_cli.fec_nac.dia<<"/"<<var_cli.fec_nac.mes<<"/"<<var_cli.fec_nac.anio<<endl;
    cout<<"Estado: ";
    if(var_cli.estado){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    setColor(WHITE);
    cout<<"-----------------------------------"<<endl;
}

void mostrar_cantidad_clientes(){
    int cant;
    cant = cantidad_clientes();
    if(cant < 0){
        cout<<"No hay clientes para mostrar."<<endl;
    }
    else{
        cout<<"Cantidad de clientes en el archivo: "<<cant<<endl;
    }
}

void modificar_cliente(){
    int ID_cliente_a_buscar,pos;
    cout<<"Ingrese el id del cliente que desea modificar: ";
    cin>>ID_cliente_a_buscar;
    pos = buscar_posicion_cliente(ID_cliente_a_buscar);
    if(pos < 0){
        setColor(RED);
        cout<<"No se escontró el ID ingresado."<<endl;
        setColor(WHITE);
        return;
    }
    else if(sobreescribir_cliente(pos)){
        setColor(GREEN);
        cout<<"Cliente modificado correctamente."<<endl;
    }
    else{
        setColor(RED);
        cout<<"No se pudo modificar el cliente."<<endl;
    }
    setColor(WHITE);
}

bool sobreescribir_cliente(int pos){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb+");
    if(p == NULL){
        cout<<"No se pudo abrir el archivo para sobreescribir el cliente."<<endl;
        return false;
    }
    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    fread(&var_cli,sizeof(Clientes),1,p);
    mostrar_cliente(var_cli);

    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    cout<<"Ingrese el nuevo domicilio del cliente: ";
    cin.ignore();
    cin.getline(var_cli.domicilio_cliente,100);

    if(fwrite(&var_cli,sizeof(Clientes),1,p)){
        fclose(p);
        return true;
    }
    else{
        cout<<"No se pudo escribir en archivo para modificar el cliente."<<endl;
        fclose(p);
        return false;
    }
    fclose(p);
}

int buscar_posicion_cliente(int ID_cliente_a_buscar){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para saber la posición del cliente."<<endl;
        setColor(WHITE);
        return -2;
    }
    int pos = 0;
    while(fread(&var_cli,sizeof(Clientes),1,p)){
        if(ID_cliente_a_buscar == var_cli.ID_cliente){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    pos = -1;
    return pos;
}

void listar_cliente_x_ID(){
    int ID_a_buscar,pos;
    cout<<"Ingrese el ID a buscar: ";
    cin>>ID_a_buscar;
    pos = buscar_posicion_cliente(ID_a_buscar);
    if(pos < 0){
        setColor(RED);
        cout<<"No se encontró el ID ingreasdo."<<endl;
        setColor(WHITE);
        return;
    }
    mostrar_cliente_x_ID(pos);
}

void mostrar_cliente_x_ID(int pos){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abir el archivo para mostrar el cliente."<<endl;
        return;
    }
    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    fread(&var_cli,sizeof(Clientes),1,p);
    mostrar_cliente(var_cli);
    fclose(p);
}

void eliminar_cliente(){
    int ID_a_buscar,pos;
    cout<<"Ingrese el ID del cliente que desea eliminar: ";
    cin>>ID_a_buscar;
    pos = buscar_posicion_cliente(ID_a_buscar);
    if(pos < 0){
        cout<<"No se encontró el ID ingresado."<<endl;
        return;
    }
    if(baja_del_cliente_en_el_archivo(pos)){
        cout<<"Cliente dado de baja correctamente."<<endl;
    }
    else{
        cout<<"No se dio de baja el cliente."<<endl;
    }
}

bool baja_del_cliente_en_el_archivo(int pos){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb+");
    if(p == NULL){
        cout<<"* ERROR --- No se pudo abrir el archivo para dar la baja lógica."<<endl;
        return false;
    }
    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    fread(&var_cli,sizeof(Clientes),1,p);
    mostrar_cliente(var_cli);
    int opc;
    cout<<"Está seguro que desea eliminar el cliente?"<<endl;
    cout<<"[1] - Si."<<endl;
    cout<<"[ ] - Cualquier otro numero para NO."<<endl;
    cin>>opc;
    if(opc != 1){
        fclose(p);
        return false;
    }
    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    fread(&var_cli,sizeof(Clientes),1,p);
    var_cli.estado = false;
    fseek(p,pos*sizeof(Clientes),SEEK_SET);
    if(fwrite(&var_cli,sizeof(Clientes),1,p) == false){
        cout<<"* ERROR --- No se pudo escribir en el archivo para dar de baja el cliente."<<endl;
        fclose(p);
        return false;
    }
    else{
        fclose(p);
        return true;
    }
}



//////////////////////////////////////FUNCIONES PEDIDOS/////////////////////////////////////////
void dibujar_submenu_pedidos(int *opc_submenu_pedidos){
    cout<<"MENÚ PEDIDOS"<<endl;
    cout<<"------------------"<<endl;
    cout<<"[1] - NUEVO PEDIDO"<<endl;
    cout<<"[2] - MODIFICAR PEDIDO"<<endl;
    cout<<"[3] - LISTAR PEDIDO POR ID"<<endl;
    cout<<"[4] - LISTAR TODOS LOS PEDIDOS"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"[0] - VOLVER AL MENÚ PRINCIPAL"<<endl;
    cout<<"OPCIÓN: ";
    cin>>*opc_submenu_pedidos;
    cls();
    crear_archivo_pedido();
}

void crear_archivo_pedido(){
    FILE *p = fopen(ARCHIVO_PEDIDO,"ab");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"No se pudo crear el archivo."<<endl;
        setColor(WHITE);
        return;
    }
    fclose(p);
}

void nuevo_pedido(){
    Pedidos var_ped;
    if(cargar_pedido(&var_ped) == false){
        setColor(RED);
        cout<<"- No se cargó el pedido."<<endl;
        setColor(WHITE);
    }
    else if(guardar_pedido_en_arhivo(var_ped) == false){
        setColor(RED);
        cout<<"- No se guardó el pedido."<<endl;
        setColor(WHITE);
    }
    else{
        setColor(GREEN);
        cout<<"- Pedido cargado y guardado correctamente."<<endl;
        setColor(WHITE);
    }
}

bool guardar_pedido_en_arhivo(Pedidos var_ped){
    FILE *p = fopen(ARCHIVO_PEDIDO,"ab");
    if(p == NULL){
        setColor(RED);
        cout<<"No se pudo abir el archivo de pedidos para guardar el plato."<<endl;
        setColor(WHITE);
        return false;
    }
    if(fwrite(&var_ped,sizeof(Pedidos),1,p) == false){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo escribir en archivo."<<endl;
        setColor(WHITE);
        fclose(p);
        return false;
    }
    fclose(p);
    return true;
}

bool cargar_pedido(Pedidos *var_ped){
    cout<<"\tCarga pedidos."<<endl;
    int ID_autonumerico;
    ID_autonumerico = cantidad_pedidos();
    if(ID_autonumerico < 0){
        return false;
    }
    var_ped->ID_pedido = ID_autonumerico+1;
    cout<<"Pedido N°"<<var_ped->ID_pedido<<endl;

    cout<<"ID cliente: ";
    cin>>var_ped->ID_cliente_pedido;
    if(buscar_posicion_cliente(var_ped->ID_cliente_pedido) < 0){ //si el ID ingresado del cliente no existe en archivo de Cliente, no cargo el pedido;
        setColor(RED);
        cout<<"No se enctró el ID del cliente ingresado."<<endl;
        setColor(WHITE);
        return false;
    }
    if(buscar_estado_cliente_pedido(var_ped->ID_cliente_pedido) == false){ //si el cliente está dado de baja, no cargo el pedido;
        setColor(RED);
        cout<<"- El cliente se encuentra dado de baja, por lo tanto no se puede realizar el pedido."<<endl;
        setColor(WHITE);
        return false;
    }

    cout<<"ID plato: ";
    cin>>var_ped->ID_plato_pedido;
    if(buscar_posicion_plato(var_ped->ID_plato_pedido) < 0){ //si el ID ingresado de plato no existe el archivo de Plato, no cargo el pedido;
        setColor(RED);
        cout<<"No se encontró el ID del plato ingresado."<<endl;
        setColor(WHITE);
        return false;
    }
    if(buscar_estado_plato_pedido(var_ped->ID_plato_pedido) == false){
        setColor(RED);
        cout<<"- El plato se encuentra dado de baja, por lo tanto no se puede realizar el pedido."<<endl;
        setColor(WHITE);
        return false;
    }

    cout<<"Cantidad: ";
    cin>>var_ped->cantidad_pedido;
    if(var_ped->cantidad_pedido < 1){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- Ingrese un numero mayor a cero (0)."<<endl;
        setColor(WHITE);
        return false;
    }

    var_ped->precio_unitario_pedido = buscar_valor_plato(var_ped->ID_plato_pedido);
    if(var_ped->precio_unitario_pedido < 0){
        setColor(RED);
        cout<<"No se pudo encontrar el valor del plato en el archivo."<<endl;
        setColor(WHITE);
        return false;
    }
    cout<<"Precio unitario: $"<<var_ped->precio_unitario_pedido<<endl;

    cout<<"Fecha de pedido: "<<endl;
    cout<<"Día: "; cin>>var_ped->fec_ped.dia;
    cout<<"Mes: "; cin>>var_ped->fec_ped.mes;
    cout<<"Año: "; cin>>var_ped->fec_ped.anio;
    if(validar_fecha(var_ped->fec_ped.dia, var_ped->fec_ped.mes, var_ped->fec_ped.anio) == false){
        setColor(RED);
        cout<<"Fecha inválida."<<endl;
        setColor(WHITE);
        return false;
    }

    cout<<"Validación del 1 al 10: ";
    cin>>var_ped->valoracion_pedido;
    if(var_ped->valoracion_pedido < 1 || var_ped->valoracion_pedido > 10){
        setColor(RED);
        cout<<"Ingrese un valor entre 1 y 10."<<endl;
        setColor(WHITE);
        return false;
    }

    cout<<"Estado: Pedido en curso."<<endl;
    var_ped->estado_pedido = 1;

    return true;
}

bool buscar_estado_plato_pedido(int ID_plato_pedido){
//devuelve true si el estado del plato es true o false si el estado es false;
    Platos var_pla;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERRROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de Platos para comprobar su estado."<<endl;
        setColor(WHITE);
        return false;
    }
    int cant = cantidad_platos();
    if(cant < 0){
        setColor(RED);
        cout<<"No hay platos cargados en el archivo de platos para saber su cantidad y su estado."<<endl;
        setColor(WHITE);
        return false;
    }
    for(int i=0;i<cant;i++){
        fread(&var_pla,sizeof(Platos),1,p);
        if(ID_plato_pedido == var_pla.ID_plato && var_pla.estado_plato == true){
            fclose(p);
            return true;
        }
    }
    fclose(p);
    return false;
}

bool buscar_estado_cliente_pedido(int ID_cliente_pedido){
    Clientes var_cli;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para ver si el cliente está dado de baja."<<endl;
        setColor(WHITE);
        return false;
    }
    int cant = cantidad_clientes();
    if(cant < 0){
        setColor(RED);
        cout<<"No hay clientes en el archivo para buscar si está dado de baja."<<endl;
        fclose(p);
        return false;
    }
    for(int i=0;i<cant;i++){
        fread(&var_cli,sizeof(Clientes),1,p);
        if(ID_cliente_pedido == var_cli.ID_cliente && var_cli.estado == true){
            fclose(p);
            return true;
        }
    }
    fclose(p);
    return false;
}

int cantidad_pedidos(){
    FILE *p = fopen(ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para saber la cantidad de pedidos."<<endl;
        setColor(WHITE);
        return -1;
    }
    int bytesTotaltes,cant;
    fseek(p,0,SEEK_END); //coloco el puntero al final del archivo;
    bytesTotaltes = ftell(p); //ftell me dice el tamaño total en bytes del archivo;
    cant = bytesTotaltes / sizeof(Pedidos); //divido el total de bytes por el tamaño de cada registro. Ej: si el archivo pesa 6 bytes y si cada reg vale 2,tengo 3 reg;
    fclose(p);
    return cant;
}

float buscar_valor_plato(int ID_plato_pedido){
    Platos var_pla;
    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de platos para saber el valor del plato."<<endl;
        setColor(WHITE);
        return -2;
    }
    while(fread(&var_pla,sizeof(Platos),1,p)){
        if(var_pla.ID_plato == ID_plato_pedido){
            fclose(p);
            return var_pla.valor_venta_plato;
        }
    }
    fclose(p);
    return -1;
}

void listar_pedido_x_ID(){
    int ID_pedido_a_buscar, pos;
    cout<<"Ingrese el ID del pedido a mostrar: ";
    cin>>ID_pedido_a_buscar;

    pos = buscar_posicion_pedido(ID_pedido_a_buscar);
    if(pos < 0){
        setColor(RED);
        cout<<"No se encontró el ID del pedido ingresado."<<endl;
        setColor(WHITE);
        return;
    }
    mostrar_pedido_x_ID(pos);
}

void mostrar_pedido_x_ID(int pos){
    Pedidos var_ped;
    FILE *p = fopen(ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<" - No se pudo abir el archivo para mostrar el pedido."<<endl;
        setColor(WHITE);
        return;
    }
    fseek(p,pos*sizeof(Pedidos),SEEK_SET);
    fread(&var_ped,sizeof(Clientes),1,p);
    int i=0;
    mostrar_pedido(var_ped,i);
    fclose(p);
}

void listar_todos_los_pedidos(){
    Pedidos var_ped;
    int cant = cantidad_pedidos();
    if(cant == 0 ){
        setColor(RED);
        cout<<"No hay pedidos para mostrar."<<endl;
        setColor(WHITE);
        return;
    }

    FILE *p = fopen(ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para mostrar los pedidos."<<endl;
        setColor(WHITE);
        return;
    }
    for(int i=0;i<cant;i++){
        fread(&var_ped,sizeof(Pedidos),1,p);
        mostrar_pedido(var_ped,i);
    }
    fclose(p);
}

void mostrar_pedido(Pedidos var_ped, int i){
    visual_de_mostrar_pedido(i);
    //ID PEDIDO
    gotoxy(4,4+i*2); cout<<var_ped.ID_pedido;
    //ID CLIENTE
    gotoxy(14,4+i*2);cout<<var_ped.ID_cliente_pedido;
    //ID PLATO
    gotoxy(25,4+i*2);cout<<var_ped.ID_plato_pedido;
    //CANTIDAD
    gotoxy(39,4+i*2);cout<<var_ped.cantidad_pedido;
    //PRECIO
    gotoxy(50,4+i*2);cout<<"$"<<var_ped.precio_unitario_pedido;
    //FECHA
    gotoxy(59,4+i*2); cout<<var_ped.fec_ped.dia<<"/"<<var_ped.fec_ped.mes<<"/"<<var_ped.fec_ped.anio;

    //VALORACIÓN
    if(var_ped.valoracion_pedido <= 3){
        setColor(RED);
    }
    else if(var_ped.valoracion_pedido <= 7){
        setColor(BROWN);
    }
    else{
        setColor(GREEN);
    }
    gotoxy(76,4+i*2);cout<<var_ped.valoracion_pedido<<endl;
    setColor(WHITE);

    //ESTADO PEDIDO
    if(var_ped.estado_pedido == 1){
        setColor(BROWN); //en curso;
        gotoxy(87,4+i*2);cout<<"En curso"<<endl;
    }
    else if(var_ped.estado_pedido == 2){
        setColor(GREEN); //completado;
        gotoxy(87,4+i*2);cout<<"Completado"<<endl;
    }
    else{
        setColor(RED); //cancelado;
        gotoxy(87,4+i*2);cout<<"Cancelado"<<endl;
    }

    setColor(WHITE);
    cout<<"#-----------------------------------------------------------------------------------------------#"<<endl;
}

void visual_de_mostrar_pedido(int i){
    gotoxy(1,1);cout<<"#===============================================================================================#";
    gotoxy(1,2);cout<<"|  ID  |  IDCliente |  IDPlato  |  Cantidad  |  Precio  |   Fecha   |  Valoración  |   Estado   |";
    gotoxy(1,3);cout<<"#===============================================================================================#";

    //BARRITAS
    gotoxy(1,4+i*2); cout<<"|"; //izq ID
    gotoxy(8,4+i*2); cout<<"|"; //der ID
    gotoxy(21,4+i*2);cout<<"|"; //der IDCLIENTE
    gotoxy(33,4+i*2);cout<<"|"; //der IDPlato
    gotoxy(46,4+i*2);cout<<"|"; //der cantidad
    gotoxy(57,4+i*2);cout<<"|"; //der precio
    gotoxy(69,4+i*2);cout<<"|"; //der fecha
    gotoxy(84,4+i*2);cout<<"|"; //der Valoración
    gotoxy(97,4+i*2);cout<<"|"; //der Estado
}

int buscar_posicion_pedido(int ID_pedido_a_buscar){
    Pedidos var_ped;
    FILE *p = fopen(ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para buscar la posición."<<endl;
        setColor(WHITE);
        return -2;
    }

    int pos = 0;
    while(fread(&var_ped,sizeof(Pedidos),1,p)){
        if(ID_pedido_a_buscar == var_ped.ID_pedido){
            fclose(p);
            return pos;
        }
        pos++;
    }
    fclose(p);
    pos = -1;
    return pos;
}

void modificar_pedido(){
    int ID_pedido_a_modificar,pos;
    cout<<"Ingrese el ID del pedido a modificar: ";
    cin>>ID_pedido_a_modificar;
    pos = buscar_posicion_pedido(ID_pedido_a_modificar);
    if(pos < 0){
        setColor(RED);
        cout<<"- No existe el ID del pedido ingresado."<<endl;
        setColor(WHITE);
        return;
    }
    if(sobreescribir_pedido(pos) == false){
        setColor(RED);
        cout<<"- No se pudo modificar el pedido."<<endl;
        setColor(WHITE);
    }
    else{
        setColor(GREEN);
        cout<<"- Pedido modificado correctamente."<<endl;
        setColor(WHITE);
    }
}

bool sobreescribir_pedido(int pos){
    Pedidos var_ped;
    FILE *p = fopen(ARCHIVO_PEDIDO,"rb+");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo para modificarlo."<<endl;
        setColor(WHITE);
        return false;
    }
    int cant = cantidad_pedidos();
    if(cant == 0){
        setColor(RED);
        cout<<"- No hay pedidos. Por lo tanto no se puede editar un pedido."<<endl;
        setColor(WHITE);
        fclose(p);
        return false;
    }
    fseek(p,pos*sizeof(Pedidos),SEEK_SET);
    fread(&var_ped,sizeof(Clientes),1,p);
    int i=0;
    mostrar_pedido(var_ped,i);
    cout<<endl;
    int opc;
    while(true){
        cout<<"Ingrese una opción para modificar el estado del pedido."<<endl;
        cout<<"[1] - Cancelar modificación."<<endl;
        cout<<"[2] - Pedido completado."<<endl;
        cout<<"[3] - Pedido cancelado."<<endl;
        cout<<"Opción: ";
        cin>>opc;
        fseek(p,pos*sizeof(Pedidos),SEEK_SET);
        switch(opc){
            case 1:fclose(p);return false;

            case 2:{
                var_ped.estado_pedido = 2;
                if(fwrite(&var_ped,sizeof(Pedidos),1,p)){
                    fclose(p);
                    return true;
                }
                else{
                    setColor(RED);
                    cout<<"- No se pudo escribir en archivo para modificarlo."<<endl;
                    setColor(WHITE);
                    fclose(p);
                    return false;
                }
            }
            case 3:{
                var_ped.estado_pedido = 3;
                if(fwrite(&var_ped,sizeof(Pedidos),1,p)){
                    fclose(p);
                    return true;
                }
                else{
                    setColor(RED);
                    cout<<"- No se pudo escribir en archivo para modificarlo."<<endl;
                    setColor(WHITE);
                    fclose(p);
                    return false;
                }
            }
            default:
                setColor(RED);
                cout<<"- Opción incorrecta!!!"<<endl;
                setColor(WHITE);
                break;
        }
        anykey();
        cls();
    }
}


////////////////////////////////////FUNCIONES SUBMENU_CONFIGURACION////////////////////////////////////
void dibujar_submenu_configuracion(int *opc_submenu_configuracion){
    cout<<"MENÚ CONFIGURACIÓN"<<endl;
    cout<<"=================="<<endl;
    cout<<"[1] - REALIZAR COPIA DE SEGURIDAD"<<endl;
    cout<<"[2] - RESTAURAR COPIA DE SEGURIDAD"<<endl;
    cout<<"================================"<<endl;
    cout<<"[0] - VOLVER AL MENÚ PRINCIPAL"<<endl;
    cout<<"OPCIÓN: ";
    cin>>*opc_submenu_configuracion;
    cls();
}

void realizar_copia_seguridad(){
    if(!crear_copias_seguridad()){
        setColor(RED);
        cout<<"- Hubo un error al crear la copia de seguridad de alguno de los tres archivos."<<endl;
        setColor(WHITE);
        return;
    }
    if(!copiar_arhivos_originales_en_copia_seguridad()){
            return;
    }
    else{
        setColor(GREEN);
        cout<<"- Copias de seguridad realizadas correctamente."<<endl;
        setColor(WHITE);
    }
}

bool crear_copias_seguridad(){
    /*si no existe el archivo, lo creo*/
    //platos//
    FILE *p = fopen(COPIA_ARCHIVO_PLATO,"ab");
    if(p == NULL){
        cls();
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo crear el archivo de copia de seguridad del archivo 'platos'."<<endl;
        setColor(WHITE);
        return false;
    }
    fclose(p);
    //clientes//
    FILE *p1 = fopen(COPIA_ARCHIVO_CLIENTE,"ab");
    if(p1 == NULL){
        cls();
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo crear el archivo de copia de seguridad del archivo 'cliente'."<<endl;
        setColor(WHITE);
        return false;
    }
    fclose(p1);
    //pedidos//
    FILE *p2 = fopen(COPIA_ARCHIVO_PEDIDO,"ab");
    if(p2 == NULL){
        cls();
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo crear el archivo de copia de seguridad del archivo 'pedidos'."<<endl;
        setColor(WHITE);
        return false;
    }
    fclose(p2);
    return true;
}

bool copiar_arhivos_originales_en_copia_seguridad(){
    //en esta funcion, copia cada archivo original en la copia de seguridad//
    if(!copiar_platos_en_copia_seguridad()){
        setColor(RED);
        cout<<"- No se realizó la copia de seguridad del archivo 'platos'."<<endl;
        setColor(WHITE);
        return false;
    }
    if(!copiar_clientes_en_copia_seguridad()){
        setColor(RED);
        cout<<"- No se realizó la copia de seguridad del archivo 'clientes'."<<endl;
        setColor(WHITE);
        return false;
    }
    if(!copiar_pedidos_en_copia_seguridad()){
        setColor(RED);
        cout<<"- No se realizó la copia de seguridad del archivo 'pedidos'."<<endl;
        setColor(WHITE);
        return false;
    }
    return true;
}

bool copiar_pedidos_en_copia_seguridad(){
    Pedidos *vec;
    int cantidad = cantidad_pedidos();
    if(cantidad == 0){
        setColor(RED);
        cout<<"- No hay pedidos para realizar la copia de seguridad."<<endl;
        setColor(WHITE);
        return false;
    }
    vec = (Pedidos *) malloc(cantidad *sizeof(Pedidos));
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente memoria para crear el vector dinámico del archivo 'pedidos'."<<endl;
        setColor(WHITE);
        return false;
    }
    //copio los registros del archivo de platos al vector dinamico;
    FILE *p = fopen(ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de 'pedidos'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Pedidos),cantidad,p);
    fclose(p);
    //copio los registros del vector dinamico al archivo de copia de seguridad de pedidos;
    FILE *p2 = fopen(COPIA_ARCHIVO_PEDIDO,"wb+");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de copia de seguridad de pedidos."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Pedidos),cantidad,p2);
    fclose(p2);
    free(vec);
    return true;
}

bool copiar_clientes_en_copia_seguridad(){
    Clientes *vec;
    int cantidad = cantidad_clientes();
    if(cantidad == 0){
        setColor(RED);
        cout<<"- No hay clientes para realizar la copia de seguridad."<<endl;
        setColor(WHITE);
        return false;
    }
    //creo el vector dinamico de clientes;
    vec = (Clientes *) malloc(cantidad * sizeof(Clientes));
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente memoria para crear el vector dinámico del archivo 'clientes'."<<endl;
        setColor(WHITE);
        return false;
    }
    //abro el archivo en modo lectura para copiar los registros al vector;
    FILE *p = fopen(ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de clientes para copiar los registros al vector."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Clientes),cantidad,p);
    fclose(p);
    //copio los registros del vector al nuevo archivo;
    FILE *p2 = fopen(COPIA_ARCHIVO_CLIENTE,"wb+");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de copia de seguridad de clientes para copiarle los registros del vector."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Clientes),cantidad,p2);
    fclose(p2);
    free(vec);
    return true;
}

bool  copiar_platos_en_copia_seguridad(){
    int cantidad = cantidad_platos();
    if(cantidad == 0){
        setColor(RED);
        cout<<"- No hay platos para realizar la copia de seguridad."<<endl;
        setColor(WHITE);
        return false;
    }
    Platos *vec;
    vec = (Platos *) malloc(cantidad * sizeof(Platos)); //creo el vector dinamico. malloc me da la cantidad de memoria dinamica total en bytes de
                                                        // la cantidad de platos por lo que pesa cada registro en bytes. Eso lo crasteo al puntero a Plato;
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente memoria para crear el vector dinamico."<<endl;
        setColor(WHITE);
        return false;
    }

    FILE *p = fopen(ARCHIVO_PLATO,"rb");
    if(p == NULL){
        setColor(RED);
        cls();
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de platos para copiar sus datos en la copia de seguridad."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Platos),cantidad,p);
    fclose(p);
    //copiar los registros del vector a la copia de seguridad;
    FILE *p2 = fopen(COPIA_ARCHIVO_PLATO,"wb+"); // Crea un fichero (o trunca el existente) para escritura, permitiendo también lectura del mismo;
    if(p2 == NULL){
        setColor(RED);
        cls();
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo abrir el archivo de copia de seguridad de platos para copiar sus datos."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Platos),cantidad,p2);
    fclose(p2);
    free(vec);
    return true;
}

void listar_copias_seguridad(){
    cout<<"HAZ DESCUBIERTO UNA OPCIÓN OCULTA!!! :O"<<endl;
    cout<<"A continuación se muestra el contenido de las copias de seguridad."<<endl;
    anykey();
    Platos var_pla;
    int cantidad = cantidad_platos();
    FILE *p1 = fopen(COPIA_ARCHIVO_PLATO,"rb");
    if(p1 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe la copia de seguridad del archivo de platos."<<endl;
        setColor(WHITE);
        return;
    }
    for(int i=0;i<cantidad;i++){
        fread(&var_pla,sizeof(Platos),1,p1);
        mostrar_plato(var_pla,i);
    }
    fclose(p1);
    anykey();
    cls();

    Clientes var_cli;
    cantidad = cantidad_clientes();
    FILE *p2 = fopen(COPIA_ARCHIVO_CLIENTE,"rb");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe la copia de seguridad del archivo de clientes."<<endl;
        setColor(WHITE);
        return;
    }
    for(int i=0;i<cantidad;i++){
        fread(&var_cli,sizeof(Clientes),1,p2);
        mostrar_cliente(var_cli);
    }
    fclose(p2);
    anykey();
    cls();

    Pedidos var_ped;
    cantidad = cantidad_pedidos();
    FILE *p3 = fopen(COPIA_ARCHIVO_PEDIDO,"rb");
    if(p3 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe la copia de seguridad del archivo de pedidos."<<endl;
        setColor(WHITE);
        return;
    }
    for(int i=0;i<cantidad;i++){
        fread(&var_ped,sizeof(Pedidos),1,p3);
        mostrar_pedido(var_ped,i);
    }
    fclose(p3);

}

void restaurar_copia_seguridad(){
    if(restaurar_archivo_platos()){
        setColor(GREEN);
        cout<<"- Archivo de platos restaurado correctamente."<<endl;
        setColor(WHITE);
    }
    else{
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo restaurar el archivo de platos."<<endl;
        setColor(WHITE);
    }

    if(restaurar_archivo_clientes()){
        setColor(GREEN);
        cout<<"- Archivo de clientes restaurado correctamente."<<endl;
        setColor(WHITE);
    }
    else{
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo restaurar el archivo de clientes."<<endl;
        setColor(WHITE);
    }

    if(restaurar_archivo_pedidos()){
        setColor(GREEN);
        cout<<"- Archivo de pedidos restaurado correctamente."<<endl;
        setColor(WHITE);
    }
    else{
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No se pudo restaurar el archivo de pedidos."<<endl;
        setColor(WHITE);
    }
}

bool restaurar_archivo_pedidos(){
    int cant = cantidad_pedidos_copia();
    if(cant <= 0){
        setColor(RED);
        cout<<"- No hay registros en el archivo de copia de seguridad de 'pedidos'."<<endl;
        setColor(WHITE);
        return false;
    }
    Pedidos *vec;
    vec = (Pedidos *) malloc(cant * sizeof(Pedidos));
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente espacio para crear el vector dinamico de la copia de seguridad de 'pedidos'."<<endl;
        setColor(WHITE);
        return false;
    }
    //copio los registros de la copia de seguridad de pedidos en el vector;//
    FILE *p = fopen(COPIA_ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe la copia de seguridad del archivo 'pedidos'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Pedidos),cant,p);
    fclose(p);
    //copio los registros del vector en el archivo original;//
    FILE *p2 = fopen(ARCHIVO_PEDIDO,"wb+");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de 'pedidos'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Pedidos),cant,p2);
    fclose(p2);

    free(vec);
    return true;
}

bool restaurar_archivo_clientes(){
    int cant = cantidad_clientes_copia();
    if(cant <= 0){
        setColor(RED);
        cout<<"- No hay clientes guardados en la copia de seguridad."<<endl;
        setColor(WHITE);
        return false;
    }
    Clientes *vec;
    vec = (Clientes *) malloc(cant *sizeof(Clientes));
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente memoria para crear el vector dinámico de la copia de seguridad de clientes."<<endl;
        setColor(WHITE);
        return false;
    }
    //copio los registros de la copia de seguridad en el vector dinamico;//
    FILE *p = fopen(COPIA_ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de copia de seguridad de 'clientes'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Clientes),cant,p);
    fclose(p);
    //copio los registros del vector dinamico en el archivo original;//
    FILE *p2 = fopen(ARCHIVO_CLIENTE,"wb+");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de clientes."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Clientes),cant,p2);
    fclose(p2);

    free(vec);
    return true;
}

bool restaurar_archivo_platos(){
    int cant = cantidad_platos_copia();
    if(cant <= 0){
        setColor(RED);
        cout<<"No se puede realizar la copia de seguridad del archivo de 'platos' ya que no hay platos cargados."<<endl;
        setColor(WHITE);
        return false;
    }
    //creo vector dinamico
    Platos *vec;
    vec = (Platos *) malloc(cant *sizeof(Platos));
    if(vec == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No hay suficiente espacio para crear el vector dinámico de 'Platos'."<<endl;
        setColor(WHITE);
        return false;
    }
    //abro el archivo de copia de seguridad para copiar sus datos en el vector dinamico;//
    FILE *p = fopen(COPIA_ARCHIVO_PLATO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de copia de seguridad de 'platos'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fread(vec,sizeof(Platos),cant,p);
    fclose(p);

    //copio los datos del vector dinamico en el archivo original;//
    FILE *p2= fopen(ARCHIVO_PLATO,"wb+");
    if(p2 == NULL){
        setColor(RED);
        cout<<"* ERROR *"<<endl;
        cout<<"- No existe el archivo de 'platos'."<<endl;
        setColor(WHITE);
        free(vec);
        return false;
    }
    fwrite(vec,sizeof(Platos),cant,p2);
    fclose(p2);
    free(vec);
    return true;
}

int cantidad_platos_copia(){
    FILE *p = fopen(COPIA_ARCHIVO_PLATO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"No existe la copia de seguridad de 'platos' para saber la cantidad de registros."<<endl;
        setColor(WHITE);
        return -1;
    }
    int cant,bytes;
    fseek(p,0,SEEK_END);
    bytes = ftell(p);
    cant = bytes / sizeof(Platos);
    return cant;
}

int cantidad_clientes_copia(){
    FILE *p = fopen(COPIA_ARCHIVO_CLIENTE,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"No existe la copia de seguridad de 'clientes' para saber la cantidad de registros."<<endl;
        setColor(WHITE);
        return -1;
    }
    int cant,bytes;
    fseek(p,0,SEEK_END);
    bytes = ftell(p);
    cant = bytes / sizeof(Clientes);
    return cant;
}

int cantidad_pedidos_copia(){
    FILE *p = fopen(COPIA_ARCHIVO_PEDIDO,"rb");
    if(p == NULL){
        setColor(RED);
        cout<<"No existe la copia de seguridad de 'pedidos' para saber la cantidad de registros."<<endl;
        setColor(WHITE);
        return -1;
    }
    int cant,bytes;
    fseek(p,0,SEEK_END);
    bytes = ftell(p);
    cant = bytes / sizeof(Pedidos);
    return cant;
}


#endif // FUNCIONES_H_INCLUDED
