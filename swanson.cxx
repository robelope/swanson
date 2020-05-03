#include <iostream>
using namespace std;

	int main(){
		char l;
		
		float n, hr, ar, pr, costo_hierro, madera, total;
		float totalt;
		const int metro_hierro = 85;
		const int metro_mad = 300;
		const int mat = 350;
		const float rt=1.14;
		cout << "a. Ratona" << endl << "b. Mesita Arrime" << endl << "c. Espejo" << endl << "s. Salir" << endl;
		cout << "Articulo:";
		cin >> l;
		while (l!='s'){
		switch (l){
			case 'a' :
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
			totalt= total*rt;
		    cout << "Precio efectivo: " << total << endl;
		    cout << "Tarjeta: " << totalt << endl;
		    break;
		    
		    case 'b' :
			cout << "Mesita de arrime" << endl << "______________" << endl;
			cout << "Alto: " << endl; 
			cin >> hr;
			cout <<"Ancho: " << endl;
			cin >> ar;
			cout <<"Prof: "<< endl;
			cin >> pr;
			costo_hierro=metro_hierro*(hr * 2)+(ar * 3)+(pr*4);
			madera=metro_mad*(ar*pr);
			total=3*(costo_hierro+madera+mat);
			totalt= total*rt;
		    cout << "Precio efectivo: " << total << endl;
		    cout << "Tarjeta: " << totalt << endl;
		    break;
		    
		    case 'c' :
			cout << "Espejo" << endl << "_________" << endl;
			cout << "Alto: " << endl; 
			cin >> hr;
			cout <<"Ancho: " << endl;
			cin >> ar;
			cout <<"Prof: "<< endl;
			cin >> pr;
			costo_hierro=metro_hierro*(hr * 4)+(ar * 4)+(pr*2);
			madera=metro_mad*(ar*pr);
			total=3*(costo_hierro+madera+mat);
			totalt= total*rt;
		    cout << "Precio efectivo: " << total << endl;
		    cout << "Tarjeta: " << totalt << endl;
		    break;
		    default :
		    cout << "ke";
		    case 's':
		    break;
		}
		cout << "____________"<< endl << "Nuevo articulo o 's' para salir: " << endl;
		cin >> l;
		}

	return 0;	
	}

