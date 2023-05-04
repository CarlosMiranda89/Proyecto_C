#include <iostream>
using namespace std;

void graficos(int x){
	for (int i = 0; i < x; i++) {
        cout << "# ";
    }
    cout << endl;
	
}

int main(){
	int jugador = 1;
	int fila1=3,fila2=5,fila3=7,fila,piezas,piezas_q;
	int piezas_r=4;

	bool fin;
	
	while (piezas_r>1){
		graficos (fila1);
		graficos (fila2);
		graficos (fila3);
		cout<<"jugador "<<jugador<<",escoja la fila: (1-3) "<<endl;
		cin>>fila;
		switch (fila){
			case 1: fila1-=1;
			case 2: fila2-=2;
			case 3: fila3-=3;
			
			break;
			
			}
		cout<<"escoja un numero de piezas: "<<endl;
		cin>>piezas_q;
		piezas_r-=1;
	}
	
	
	 return 0;
}
