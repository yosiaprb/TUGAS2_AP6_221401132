#include<iostream>
using namespace std;
int main(){
    int A = 20;
    int *Aptr = &A;
    cout<<"ini adalah nilai : "<<A<<endl;
    cout<<"ini adalah nilai : "<<*Aptr<<endl;
    cout<<"ini adalah alamat nilai :"<<&A<<endl;
    cout<<"ini adalah alamat nilai :"<<Aptr;
    *Aptr = 40;
    cout<<"ini adalah nilai : "<<A<<endl;
}