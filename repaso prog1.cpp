
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void Tonio(string pes);

int main() {
    string p;
    cout << "Ingrese sus palabras: " << endl;
    getline(cin, p);
    Tonio(p);
    return 0;
}

void Tonio(string pes) {
    int con = 0;
    string aux = "";
     string aux2 =" ";
    for (int i = 0; i < pes.size(); i++) {
        if (pes[i] == ' ') {
            aux= pes[i];
            aux2 += aux;
            con++;
           	cout<<"P"<<con<<": "<<aux<<endl;
         
        } 
      
	aux=" ";
	aux2=" ";
    }
   
}
