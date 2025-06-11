#include<iostream>
using namespace std;

int main() {
    int n, s=0, A[20];
    cout<<"Cuantos valores?: "<<endl;
    cin>>n;
    cout<<"Ingrese los numeros: "<<endl;
    for (int i=0; i<n; i++) {
        cin>>A[i];
        s=s+A[i];
    }
    int prom=s/n;
    for (int i=0; i<n; i++) {
        if (A[i]>prom) {
            cout<<"El valor mayor al promedio es: "<<endl<<A[i];
        }

    }
    return 0;
}