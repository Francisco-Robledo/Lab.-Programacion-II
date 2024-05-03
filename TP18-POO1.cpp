#include <iostream>
#include <algorithm>
using namespace std;


class CNumber {
	
	private:
		
		int Num1, Num2, Num3;
		
	public:
		
		CNumber (int N1, int N2, int N3);
		
		int SetNumero1(int N1);
		int SetNumero2(int N2);
		int SetNumero3(int N3);
		int CalcularMaximo (int N1, int N2, int N3);
		int CalcularMinimo (int N1, int N2, int N3);
		float CalcularPromedio (int N1, int N2, int N3);
		int CalcularPar(int N1, int N2, int N3);
		int CalcularImpar(int N1, int N2, int N3);
};

CNumber::CNumber(int N1, int N2, int N3) {
	Num1=SetNumero1(N1);
	Num2=SetNumero1(N2);
	Num3=SetNumero1(N3);
}

int CNumber::SetNumero1(int N1) {
	Num1=N1;
	return Num1;
}

int CNumber::SetNumero2(int N2) {
	Num2=N2;
	return Num2;
}

int CNumber::SetNumero3(int N3) {
	Num3=N3;
	return Num3;
}

int CNumber::CalcularMaximo (int N1, int N2, int N3) {
	return max(max(N1, N2), N3);
}

int CNumber::CalcularMinimo(int N1, int N2, int N3) {
	return min(min(N1, N2), N3);
}

float CNumber::CalcularPromedio (int N1, int N2, int N3) {
return (N1 + N2 + N3) / 3; 
}

int CNumber::CalcularPar(int N1, int N2, int N3) {
	
	int Par = 0;
	
	if(N1%2==0){
    	Par+=1;
    }
    if(N2%2==0){
        Par+=1;
    }
    if(N3%2==0){
        Par+=1;
    }
    
   return Par;
}

int CNumber::CalcularImpar(int N1, int N2, int N3) {
	
	int Impar = 0;
	
	if(N1%2!=0){
    	Impar+=1;
    }
    if(N2%2!=0){
        Impar+=1;
    }
    if(N3%2!=0){
        Impar+=1;
    }
    
   return Impar;
}

int main () {
	
	int Num1 = 9;
	int Num2 = 6;
	int Num3 = 3;
	
	CNumber Final(Num1, Num2, Num3);
	
	int Maximo = Final.CalcularMaximo(Num1, Num2, Num3);
	int Minimo = Final.CalcularMinimo(Num1, Num2, Num3);
	float Promedio = Final.CalcularPromedio(Num1, Num2, Num3);
	int Par = Final.CalcularPar(Num1, Num2, Num3);
	int Impar = Final.CalcularImpar(Num1, Num2, Num3); 
	cout <<" El Maximo es: " << Maximo << endl << " El Minimo es: " << Minimo << endl << " El promedio es: " << Promedio << endl;
	cout << " La cantidad de pares son:  " << Par << endl << " La cantidad de impares son: " << Impar << endl;
	
	return 0;
}
