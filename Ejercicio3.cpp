#include "iostream"
using namespace std;

int main(void)
{
    int year = 0, comp1 = 0, comp2 = 0;
    /*Portada*/
    cout << "\nCOMPROBADOR DE ";
    printf("A%cO",165); // Para imprimir ñ
    cout << " BISIESTO\n\n";

    cout << "Introduzca el "; 
    printf("a%co",164); 
    cout << ": ";
    cin >> year;

    /*Primer proceso de descarte*/
    comp1 = year%400;
    if (comp1 == 0)
    {
        cout << "El ";
        printf("a%co",164);
        cout << " es bisiesto\n\n";
        return 0;
    }

    /*Segundo proceso de descarte*/
    comp1 = year%4; 
    comp2 = year%100;
    if (comp1 == 0 && comp2 != 0) 
    {
        cout << "El ";
        printf("a%co",164);
        cout << " es bisiesto\n\n";
        return 0;
    }

    /*Default*/
    cout << "El ";
    printf("a%co",164);
    cout << " no es bisiesto\n\n";
    return 0;
    
}