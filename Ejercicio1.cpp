#include "iostream"
#include "iomanip" //Para tener un max de 2 decimales   
using namespace std;

int main(void)
{
    int hnor = 0, hext = 0;  
    float st = 0, sr = 0;

    cout << "\nCALCULADOR DE SALARIOS\n\n";
    
    /*Introduccion de datos*/
    cout << "Introduzca el numero de horas trabajadas: ";
    cin >> hnor;
    
    cout << "Introduzca el numero de horas extras: ";
    cin >> hext;

    /*Aplicacion de descuentos*/
    st = (hnor*1.75) + (hext*2.5);
    sr = st - (st * 0.04) - (st * 0.0625);
    if (st > 500) sr -= (st * 0.10);
    
    /*Mostrar salarios con no mas de 2 digitos*/
    cout << "\nEl salario total es de: $" << fixed << setprecision(2) << st << " dolares.";
    cout << "\nAplicando los descuentos, el salario corresponde a: $" <<fixed<< setprecision(2) << sr;
    cout << " dolares." << endl;


    cout << endl;
    return 0;
}