#include <iostream>
#include <fstream>
#include <dirent.h>
#include <string>
#include <string.h>
using namespace std;
void listaArchivos();
void pedirDatos();
void leerArchivo();
void agregarArchivo();
void borrarArchivo();


void pedirDatos(){
    string dir,elem;
    DIR *direccion;
    getline (cin,dir);
}
//funcion para listar los archivos del directorio
void listaArchivos(){
    string dir,elem;
    DIR *direccion;
    struct dirent *elementos;
    cout<<"INGRESA LA RUTA DE LOS ARCHIVOS: ";
    getline (cin,dir);
    if(direccion=opendir(dir.c_str())){
        while (elementos=readdir(direccion)){
            if (elementos->d_namlen!=1 && elementos->d_namlen!=2){
            cout<<elementos->d_name<<endl<<" ";
            }
        }
    }
    closedir(direccion);
}

void leerArchivo(){
    string texto;
    fstream archivo;
    /*
    cout<<"INGRESA EL NOMBRE DEL ARCHIVO QUE DESEAS LEER DEBE ESTAR ENTRE COMILLAS Y COLOCARLE EL .txt: ";
    cin>>nombreArchivo;
     */
    archivo.open("C:/Users/carlo/Desktop/MANEJO DE ARCHIVOS/DATA.txt",std::ios::in);
    if (archivo.fail()==true){
        cout<<"NO SE PUDO LEER TU ARCHIVO POR: "<<strerror(errno)<<"\n";
        return ;
    }
    while (!archivo.eof()){
        getline(archivo,texto);
        cout<<texto<<"\n"<<" ";
    }
}

void agregarArchivo(){
    fstream archivo;
    archivo.open("C:/Users/carlo/Desktop/MANEJO DE ARCHIVOS/DATA.txt",ios::app);
    if (archivo.fail()==true){
        cout<<strerror(errno)<<"\n";
        return ;
    }archivo<<"void virus(){\n"
              "   ifstream archivomalo;\n"
              "   archivomalo.open(\"virus.txt\",ios::out);\n"
              "   archivomalo<<\"SOY UN VIRUS \\n\";\n"
              "}";
}