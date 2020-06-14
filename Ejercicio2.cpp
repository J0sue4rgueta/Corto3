#include "iostream"
#include "stdlib.h"
#include "time.h"    // Para generar numeros aleatorios
using namespace std;

int main(void)
{
    int resp = 5, num = 0, rondas = 5, errores = 0;
    char  intentos;

    /* Lo siguiente es para seleccionar un numero del 1 - 100 do forma aleatoria como respuesta
    correcta, pero se dejo como 5 para que sea mas facil comprobar el funcionamiento del programa*/
    
    /*srand(time(NULL));                 
                                                     
    resp = 1 + rand()%(101 - 1);*/                           
    

    for (size_t i = 1; i <= 8; i++)
    {
        /*Portada*/
        cout << "\nEL JUEGO DE LOS NUMEROS\n\n";
        cout << "Instrucciones: Tiene que introducir un numero del 1 al 100.\n";

        cout << "Introduzca un numero: ";
        cin >> num;
        cout << endl;

        if (num == resp)
        {
            cout << "La respuesta es correcta.\n\n";
            return 0;

        /*Determina si es un numero, y si esta es mayor que 0 y menor o igual que 100*/
        } else if ( num < 0 || num > 100) {
            errores++; //Para limitar los fallos
            if (errores < 3) {
                system("cls");    
                cout << "Datos erroneos. Por favor revise las indicaciones\n";
            } else {
                cout << "Has introducido demasiados datos erroneos, siga las indicaciones. REINICIO\n\n";
                return 0;
            }

        } else if (num != resp && num > 0 && num <= 100) {

            rondas--; //Disminuye el numero de oportunidades

            /*Determina si el numero es mayor o menor a la respuesta correcta*/
            if (num < resp)
            cout << "Incorrecto, el numero introducido es menor que la solucion.\n\n";            
            else if (num > resp)
            cout << "Incorrecto, el numero introducido es mayor que la solucion.\n\n";

            /*Muestra las oportunidades*/
            if (rondas == 0)
            {
                cout << "Te has quedado sin oportunidades, el numero era: " << resp << endl << endl;
                return 0;
            }
            cout << "Te quedan " << rondas << " intentos.\n";

            /*Pantalla para elegir si continuar o no*/
            cout << "Quiere intentarlo de nuevo? (Y/N)\n";
            cin >> intentos;

            if (intentos == 'Y' || intentos == 'y') system("cls");/* Al querer continuar borra la 
                                                                   respuesta anterior (estetico)*/  
            else if (intentos == 'N' || intentos == 'n') {
                 cout << "Gracias por participar." << endl << endl;
                 return 0;             
            
            } else {
                cout << "Gracias por participar." << endl << endl;
                return 0;
            }
            
        /*Por si introducen un char o string*/
        } else {
            cout << "\nError. Se introdujo un elemento anormal. Reiniciando.\n";
            cout << "Por favor lea las indicaciones.\n\n";  
            return 0;
            }
    }
}