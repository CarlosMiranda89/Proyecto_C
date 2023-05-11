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
	int fila1=3,fila2=5,fila3=7,fila=0
	,piezas_q;
	int i=4;

	bool fin;
	
	while (i>=1){
		graficos (fila1);
		graficos (fila2);
		graficos (fila3);
		if (i==1){
			break;
		}
		cout<<"jugador "<<jugador<<",escoja la fila: (1-3) "<<endl;
		cin>>fila;
		piezas_q=0;
		cout<<"escoja un numero de piezas: "<<endl;
		cin>>piezas_q;
		switch (fila){
			case 1: fila1-=piezas_q;
			case 2: fila2-=piezas_q;
			case 3: fila3-=piezas_q;
			
			break;
			
			}
		i-=1;
	}
	
	
	return 0;
}
