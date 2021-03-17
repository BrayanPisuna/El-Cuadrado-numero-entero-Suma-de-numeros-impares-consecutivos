#include <iostream>
using namespace std;
int Cuadrado(int n);


int main() {
 
	int numero;
    cout << " Bienvendido" << endl;
    cout<<endl;
    cout << " Escriba su numero: " ;
 	cin >> numero;
 	
 	if(numero <=10 ){
 		
 		printf("Su cuadrado es :  %i \n", Cuadrado(numero));
	 }else{
	 	
		printf(" numero erroneo");
	 }
 
}

int Cuadrado(int n){
	
	if (n != 1){
		return (2*n -1 )+ Cuadrado(n - 1);
	}else{
		
		return 1;
	}
}
