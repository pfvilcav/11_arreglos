#include<iostream>
using namespace std;

int main() {
    int n, A[8], max;
    cout<<"Cuantos numeros ingresara?(max 8): "<<endl;
    cin>>n;
    cout<<"Ingrese los numeros: "<<endl;
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }
    for (int i=0; i<n/2; i++) {
        max=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=max;
    }
    cout<<endl;
    cout<<"Se cambio el orden de los elementos: "<<endl;
    for (int i=0; i<n; i++) {
        cout<<A[i]<<" ";
    }
    return 0;
}