#include <iostream>
#include <cstdlib>
#include "tdalist.h"
#include "vsarraylist.h" 
#include "fsarraylist.h" 
#include "linkedlist.h"  
#include "dlcursorlist.h"
#include "integer.h"

using namespace std;
/*void MetodoFSArrayList(FSArrayList*, int, int);
void MetodoLinkedList(LinkedList*, int, int);
void MetodoDLCursorList(DLCursorList*, int, int);
*/
void listaTDA(TDAList*);

int main(int argc, char *argv[]){
	cout << "**********MENU**********" << endl << " 1. FSArrayList" << endl << " 2. LinkedList" << endl << " 3. DLCursorList" << endl << " Ingrese su opcion: ";
	int opcion;
	cin >> opcion;
	TDAList* list;
	Object* data = NULL;
	if (opcion == 1){
	 	list = new FArrayList(5000);
	 	listaTDA(list);
	 } else if (opcion == 2){
	 	list = new LinkedList();
	 	listaTDA(list);
	 	//MetodoLinkedList(list, number, position);
	 } else if (opcion == 3){
	 	list = new DLCursorList(5000);
	 	listaTDA(list);
	 	//MetodoDLCursorList(list, number, position);
	 }
	delete list;
    return 0;
}
/***************************************************/

void listaTDA(TDAList* list){
	clock_t start;
	clock_t end;
	//insertar los 5000 mil numeros
	cout << "AQUI SE IMPRIMI INSERT"<< endl;
	for (int i = 0; i < 5000; ++i)
	{
		start = clock();
		list->insert(new Integer(i*10),i);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << end << endl;
	}

	//first
	cout << "AQUI SE IMPRIMI FIRST"<< endl;
	for (int i = 0; i < 5000; ++i)
	{
		start = clock();
		list->first();
		end = clock()-start/CLOCKS_PER_SEC;
		cout << end << endl;
	}

	//Last
	cout << "AQUI SE IMPRIMI LAST"<< endl;
	for (int i = 0; i < 5000; ++i)
	{
		start = clock();
		list->last();
		end = clock()-start/CLOCKS_PER_SEC;
		cout << end << endl;
	}
	
	//get
	cout << "AQUI SE IMPRIMI GET"<< endl;
	for (int i = 0; i < list->size(); ++i)
	{
		start = clock();
		list->get(i);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << end << endl;
	}
	//remover
	cout << "AQUI SE IMPRIMI REMOVE"<< endl;
	Object* tmp = NULL;
	for (int i = 0; i < list->size(); ++i)
	{
		start = clock();
		tmp  = list->remove(0);
		end = clock()-start/CLOCKS_PER_SEC;
		cout << end << endl;
		delete tmp;
	}
}
/***************************************************/