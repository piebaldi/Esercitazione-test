//main inserito da Baldi Pietro per poter effettuare il test per identificaree possibili bug sulla creazione
//e implemntazione della classe da notare che nel main implementato in precedenza non vengono chiamati i costruttori 


#include <iostream>
#include "polygon.h"
#include "RightTriangle.h"

using namespace std;

int main() {


	//TEST TRIANGOLO RETTANGOLO
	RightTriangle triang1;
	triang1.SetDim(6, 8);								
	triang1.Dump();
	RightTriangle triang2 = triang1;							
	triang2.Dump();
	if (triang2 == triang1) {								
		cout << "i triangoli sono uguali" << endl;
	}
	else {
		cout << "i triangoli sono diversi" << endl;
	}

	cout << "modifico dimensioni di triang1" << endl;

	triang1.SetDim(4.2, 6.2);
	triang1.Dump();
	triang1.Dump();

	if (triang2 == triang1) {
		cout << "i triangoli sono uguali" << endl;
	}
	else {
		cout << "i triangoli sono diversi" << endl;
	}


	cout << "modifico dimensioni di triang1" << endl;
	triang1.SetBase(4);
	triang1.SetAltitude(5);


	//test della stampa di tutte le variabili
	cout << "base " << triang1.GetBase() << endl;
	cout << "altezza " << triang1.GetAltitude() << endl;
	cout << "ipotenusa " << triang1.GetHypotenuse() << endl;
	cout << "area " << triang1.GetArea() << endl;
	cout << "perimetro " << triang1.GetPerimeter();
	cout << "controllare che tutte le variabili corrispondano a quelle della dump" << endl;
	triang1.Dump();
	cout << "controllare che tutte le variabili della draw corrispondano a quelle della sopra" << endl;
	triang1.Draw();									

	triang1.Reset();									
	cout << "triang1 è stato resettato" << endl;
	triang1.Dump();

	triang1.Init(triang2);									
	cout << "triang1 è stato inizializzato a triang2" << endl;
	triang1.Dump();

	triang1.~RightTriangle();
	triang2.~RightTriangle();

	cout << "i tre triangoli sono stati distrutti" << endl;

	cout << endl;
}



/// \file main.cpp
///@brief by creating the menu selection that allows to use the classes 
///@param LIMIT max number of the objects
///@param cnt counter of the acual created objects
///@param index used for selecting which polygon to draw
///@param flag used to avoid creating objects over the limit
///@param pgons array that contains pointers to the base objects (polygons)
///@param selection used to select what to do
/// 

/*
#include "polygon.h"
#include "RightTriangle.h"
#include "Rhombus.h"
#include "Rectangle.h"
#define LIMIT 100 



int main() {

	// menu interface

	cout << "Welcome to the menu selection of polygons" << endl;

	Polygon* pgons[LIMIT];
	// inizializing the array of pointers to zero
	for (int k = 0; k < LIMIT; k++) {
		pgons[k] = 0;
	}
	// initializing the object counter to 0
	int cnt = 0; 

	while (true) {


		cout << endl;
		cout << "Select 1 to create a Rectangle" << endl;
		cout << "Select 2 to create a Rhombus" << endl;
		cout << "Select 3 to create a RightTriangle" << endl;
		cout << "Select 4 to draw the object you have created" << endl;
		cout << "Select 5 to exit" << endl;

		int selection;
		scanf("%i", &selection);
		int flag = 0;	// used to avoid creating objects over the limit
		switch (selection) {
		
		case 1: //rectangle case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag= 1;
			}
			if (flag == 0) {
				cout << "Insert lenght " << endl;
				float l, w;
				scanf("%f", &l);
				cout << "Insert width" << endl;
				scanf("%f", &w);
				pgons[cnt] = new Rectangle(l,w);
				cnt++;
			}
			
			break;

		case 2:	//rhombus case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag= 1;
			}
			if (flag == 0) {
				cout << "Insert horizontal diagonal " << endl;
				float dH, dV;
				scanf("%f", &dH);
				cout << "Insert vertical diagonal" << endl;
				scanf("%f", &dV);
				pgons[cnt] = new Rhombus(dH, dV);
				cnt++;
			}
			
			break;
		case 3:	//right triangle case
			
			if (cnt > LIMIT-1) {	//limit control
				cout << "you reached the limit, you can't create more objects" << endl;
				flag = 1;
			}
			if (flag == 0) {
				cout << "Insert base " << endl;
				float b, a;
				scanf("%f", &b);
				cout << "Insert altitude" << endl;
				scanf("%f", &a);
				pgons[cnt] = new RightTriangle(b, a);
				cnt++;
			}
			
			break;

		case 4:	//draw case
			cout << "insert the index of the polygon you want to draw (from 1 to 100)" << endl;
			int index;
			scanf("%i", &index);
			if (index-1 < 0 || pgons[index-1] == NULL || index-1> LIMIT-1) {
				cout << "Not valid index" << endl;
				break;
			}
			pgons[index-1]->Draw();
			cout << "Area is " << pgons[index-1]->GetArea() << endl;
			cout << "Perimeter is " << pgons[index-1]->GetPerimeter() << endl;

			break;
		case 5: //exit case
			exit(0);
			break;

		default:
			cout << "Not valid selection,restart the program" << endl;
			exit(0);
		}
	}
	// deleting objects
	for (int k = 0; ; k < LIMIT; k++) {
		delete pgons[k];
	}

	return 0;
}*/


