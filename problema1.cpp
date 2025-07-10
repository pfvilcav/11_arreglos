#include<iostream>
using namespace std;

int main() {
    int n, A[20], max, min;
    cout<<"Cantidad de elementos en el arreglo? "<<endl;
    cout<<"Rango de 1-20"<<endl;
    cin>>n;

    if(n<=0 || n>20){
    cout<<"Cantidad invalida"<<endl;
    return 1;
    }


    cout<<"======================================"<<endl;
    cout<<"Ingrese los numeros: "<<endl;
    for (int i=0; i<n; i++) {
        cout<<"Numero Nº"<<i+1<<": ";
        cin>>A[i];
    }
    max=A[0];
    min=A[0];
    for (int i=1; i<n; i++) {
        if (A[i]>max) {
            max=A[i];
        }
        if(A[i]<min){
            min=A[i];
        }
    }
    cout<<"==========================="<<endl;
    cout<<"El mayor numero es: ";
    cout<<max;
    cout<<"\nEl menor numero es: ";
    cout<<min;
    cout<<"\n==========================";
    return 0;
}
