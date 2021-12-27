#include<iostream>
#include<stdlib.h>
#include<windows.h>

using namespace std;

struct nodo{
	int dato;
	struct nodo * sig;	
};

int main(){
	nodo *primerNodo = NULL;
	nodo *ultimoNodo;
	nodo *aux;
	int opc;
	while(true){
		system("cls");
		cout<<"MENU PRINCIPAL"<<endl;
		cout<<"1 - Insertar"<<endl;
		cout<<"2 - Imprimir"<<endl;
		cout<<"OPCION: ";
		cin>>opc;
		system("cls");
		switch(opc){
			case 1: {
				cout<<"1 - Insertar"<<endl;
				if(primerNodo == NULL){
					primerNodo = new(nodo);
					cout<<"Ingrese el nuevo dato: ";
					cin>>primerNodo->dato;
					primerNodo->sig = NULL;
					ultimoNodo = primerNodo;
				}else{
					aux = new(nodo);
					cout<<"Ingrese el nuevo dato: ";
					cin>>aux->dato;
					aux->sig = NULL;
					ultimoNodo->sig = aux;
					ultimoNodo = aux;
				}
				break;
			}
			case 2: {
				cout<<"2 - Imprimir"<<endl;
				aux = primerNodo;
				if(aux == NULL){
					cout<<"La lista se encuentra vacia"<<endl;
				}else{
					while(aux != NULL){
						cout<<aux->dato<<" ";
						aux = aux->sig;
					}
				}
				cout<<endl;
				break;
			}
		}
		system("pause");
	}
	
	
	return 0;
}
