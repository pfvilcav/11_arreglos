#include<iostream>
using namespace std;

int main() {
    int n, A[20], max;
    cout<<"Cantidad de numeros?: "<<endl;
    cin>>n;
    cout<<"============================"<<endl;
    for (int i=0; i<n; i++) {
        cin>>A[i];
    }
    max=A[0];
    for (int i=1; i<n; i++) {
        if (A[i]>max) {
            max=A[i];
        }
    }
    cout<<"El mayor numero es: "<<endl;
    cout<<max;
    return 0;
}