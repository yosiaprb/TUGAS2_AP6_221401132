#include <iostream> 
#include <conio.h> 
using namespace std; 
int main(){
int vina=23, *wini, **vera;
cout<<"Nilai Vina = "<<vina<<endl; 
wini = &vina;
vera = &wini;
cout<<"Nilai Wini hasil mengakses Vina = "<<*wini<<endl;
cout<<"Nilai Vera hasil mengakses Wini = "<<**vera<<endl;
getch();
}
