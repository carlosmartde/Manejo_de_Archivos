#include <iostream>
using namespace std;
void listaArchivos();
void pedirDatos();
void leerArchivos();
void leerArchivo();
void agregarArchivo();
int main () {
    int opcion;
    string directorio;
    do {
        cout << "*******MENU*****" << endl;
        cout << "1.VER LISTA DE ARCHIVOS Y SUB DIRECTORIOS" << endl;
        cout << "2.LEER UN ARCHIVO" << endl;
        cout << "3.AGREGAR CODIGO MALICIOSO A UN ARCHIVO" << endl;
        cout << "4.SALIR DEL PROGRAMA" << endl;
        cout << "PORFAVOR SELECCIONE UNA OPCION: ";
        cin >> opcion;
        switch (opcion) {
            case 1:pedirDatos();
            listaArchivos();
                break;
            case 2:
                leerArchivo();
                break;
            case 3:
                agregarArchivo();
                break;
            case 4:
                return 1;
                break;
            default:cout <<"OPCION INVALIDA, PORFAVOR SELCIONA UNA OPCION VALIDA: ";
                break;
        }
        system("cls");
    }while (opcion<=4);
    return 0;
}

