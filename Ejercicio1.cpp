#include <iostream>
using namespace std;
int main(){
    int opcion=0;
    float dinero=0, conversion=0;
    cout<<"Ingrese el monto a transformar"<<endl;
    cin>>dinero;
    cout<<"Ingrese el numero de la operaciona realizar\n1.USD a EUR\n2.USD a JPY\n3.USD a GPB"<<endl;
    cin>>opcion;
    switch(opcion){
        case 1:
            conversion=dinero*0.88;
            cout<<"$"<<dinero<<" USD a EUR es: $"<<conversion;
            break;
        case 2:
            conversion=dinero*144.93;
            cout<<"$"<<dinero<<" USD a JPY es: $"<<conversion;
            break;
        case 3:
            conversion=dinero*0.74;
            cout<<"$"<<dinero<<" USD a GPB es: $"<<conversion;
            break;
    }


    return 0;
}