#include <iostream>
using namespace std;

int main(){
	int jugador = 1;
	int piezas=2,fila,piezas_q;
	int piezas_r=3;
	bool fin;
	
	while (piezas_r>1){
		cout<<"jugador "<<jugador<<",escoja la fila: (1-3) "<<endl;
		cin>>fila;
		switch (fila){
			case 1: piezas=3;
			case 2: piezas=5;
			case 3: piezas=7;
			default: cout<<"numero invalido"<<endl;
			break;
			
			}
		cout<<"escoja un numero de piezas: "<<endl;
		cin>>piezas_q;
		piezas_r-=1;
	}
	 
	
	return 0;
}
