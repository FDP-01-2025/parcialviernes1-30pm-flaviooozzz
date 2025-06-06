#include <iostream>
using namespace std;
int main(){
    int dia;
    cout<<"ingrese un numero del 1 al 7 porfavor"<<endl;
    cin>>dia;
    if(dia>=1 &&dia<=5){
        cout<<"su eleccion corresponde a un dia laboral"<<endl;
    }
    else if(dia==6||dia==7){
        cout<<"Su eleccion corresponde a un dia de fin de semana"<<endl;
    }
    else{
        cout<<"su eleccion esta fuera del rango establecido"<<endl;
    }
    return 0;
}