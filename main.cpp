#include <iostream>
#include <cstdlib>
#include "tdalist.h"
#include "vsarraylist.h" 
#include "fsarraylist.h" 
#include "linkedlist.h"  
#include "dlcursorlist.h"
#include "integer.h"

using namespace std;
void MetodoFSArrayList(FSArrayList, int, int);
void MetodoLinkedList(LinkedList, int, int);
void MetodoDLCursorList(DLCursorList, int, int);

int main(int argc, char *argv[]){
	cout << "**********MENU**********" << endl << " 1. FSArrayList" << endl << " 2. LinkedList" << endl << " 3. DlCursorList";
	cout << endl << " 4. CursorList" << endl << " 5. VSArrayList"<< endl << " Ingrese su opcion: ";
	int opcion, number = rand()%100,position = 0+(rand()%(int)(list->size()-0+1));
	cin >> opcion;
	TDAList* list;
	Object* data = NULL;
	if (opcion == 1){
		list = new FSArrayList(5000);
	 	MetodoFSArrayList(list, number, position);
	 } else if (opcion == 2){
	 	list = new LinkedList(5000);
	 	MetodoLinkedList(list, number, position);
	 } else if (opcion == 3){
	 	list = new DLCursorList(5000);
	 	MetodoDLCursorList(list, number, position);
	 }
	delete list;
    return 0;
}
/***************************************************/
void MetodoFSArrayList(FSArrayList lista, int numero, int posicion){
	for (int i = 0; i < 5000; ++i){
		lista->insert(new Integer(numero),posicion);
	}
	clock_t start;
	clock_t end;
	srand(time(NULL));
	for (int i = 0; i < 5000; ++i){
		start = clock();
		lista->remove(0);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << " " << end;
	}
	cout << endl;
}
/***************************************************/
void MetodoLinkedList(LinkedList lista, int numero, int posicion){
	for (int i = 0; i < 5000; ++i){
		lista->insert(new Integer(numero),posicion);
	}
	clock_t start;
	clock_t end;
	srand(time(NULL));
	for (int i = 0; i < 5000; ++i){
		start = clock();
		lista->remove(0);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << " " << end;
	}
	cout << endl;
}
/***************************************************/
void MetodoDLCursorList(DLCursorList lista, int numero, int posicion){
	for (int i = 0; i < 5000; ++i){
		lista->insert(new Integer(numero),posicion);
	}
	clock_t start;
	clock_t end;
	srand(time(NULL));
	for (int i = 0; i < 5000; ++i){
		start = clock();
		lista->remove(0);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << " " << end;
	}
	cout << endl;
}	
/***************************************************/