#include <iostream>
using namespace std;

	int main(){
		int n, hr, ar, pr, costo_hierro, madera, total;
		float totalt;
		const int metro_hierro = 85;
		const int metro_mad = 300;
		const int mat = 350;
		cout << "Articulo:";
		cin >> n;
		switch (n){
			case '1':
			cout << "Ratona" << endl << "_________" << endl;
			cout << "Alto: " << endl; 
			cin >> hr;
			cout <<"Ancho: " << endl;
			cin >> ar;
			cout <<"Prof: "<< endl;
			cin >> pr;
			costo_hierro=metro_hierro*(hr * 4)+(ar * 4)+(pr*2);
			madera=metro_mad*(ar*pr);
			total=3*(costo_hierro+madera+mat);
			totalt= total*1.14;
		    cout << "Precio efectivo: " << total << endl;
		    cout << "Tarjeta" << totalt << endl;
		    break;
		}


	return 0;	
	}

