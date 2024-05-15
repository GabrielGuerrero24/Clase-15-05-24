#include <iostream>
using namespace std;
int main()
{
    float angulo = 0.00;
    cout << "---Tipos de angulos---\n";
    cout << "Ingrese un angulo\n";
    cin >> angulo;

    if (angulo >= 0 && angulo < 90)
    {
        cout << " Es un angulo agudo\n";
    }
    else if (angulo > 90)
    {
        cout << " Es un angulo obtuso\n";
    }
    else if (angulo = 90)
    {
        cout << "Es un agulo recto\n";
    }
    return 0;
}
