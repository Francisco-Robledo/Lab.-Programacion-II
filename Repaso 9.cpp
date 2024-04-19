#include<bits/stdc++.h>
using namespace std;
string InvertirPalabra(int I, int F, string frase);

int main(){
    int I, F;
    string frase;
    
    cout << "Ingrese una frase" << endl;
    getline(cin, frase);
    cout << "Ingrese un inicio y un final: " << endl;
    cin >> I >> F;

    cout << InvertirPalabra(I, F, frase) << endl;

    return 0;
}

string InvertirPalabra(int I, int F, string frase){

        reverse(frase.begin() + I, frase.begin() + F + 1);

    return frase;
}
