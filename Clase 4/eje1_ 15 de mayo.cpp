#include<iostrean> 
using namespace std;

int main (){
int calculodeangulos; 
float angulo1 =0.00;
float angulo2; = 0.00; 
cout <<endl<<"--- Calculo del angulo faltante---" << endl << endl;
 cout << " Ingrese dos angulos:";
 cin >> calculodeangulos; 

if ((angulo1 < 0|| angulo2 < 0) || (angulo1>180 || angulo2>180 ))
 
 cin >> angulo1, angulo2; 
 calculodeangulos = ( 180 - angulo1 + angulo2 );
 cout << "El angulo faltante es:\n";
 cout << calculodeangulos << "\n"; 

 return 0;


}