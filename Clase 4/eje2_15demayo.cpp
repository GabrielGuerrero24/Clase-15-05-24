#include <iostream>
using namespace std;
int main()
{
    int edaddelusuario = 0;

    cout << " ---Mayor o menor de edad ;) ---\n";
    cout << "ingrese su edad\n";
    cin >> edaddelusuario;

    if (edaddelusuario >= 0 && edaddelusuario <= 17)
        
    {
        cout << "Es menor de edad\n";
    }else if (edaddelusuario >= 18)
        {
            cout << " Es mayor de edad\n";

        } else {
            cout << "edad no valida\n";
        }
        
    
    return 0;
}