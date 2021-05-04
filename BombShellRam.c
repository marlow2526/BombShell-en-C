#include <stdio.h>
#include <stdlib.h>

typedef struct{
int dato;
struct Nodo*sgte;
}Nodo;

Nodo *primer=NULL;
Nodo *ultimo=NULL;


void agregar(Nodo *nodo){
	nodo -> sgte = NULL;
		if(primer == NULL){
		primer = nodo;
		ultimo = nodo;
	}
	else{
		ultimo -> sgte= nodo;
		ultimo = nodo;
	}
	
}
int main(){
	int c1,c2,c3;
	
	printf("Ingrese numeros hasta finalizar con -1: ");
	Nodo *primerNodo = malloc(sizeof(Nodo));
	scanf("%d",&c1);
	primerNodo -> dato = c1;

	
	while(c1!=-1){
		Nodo *DemasNodo = malloc(sizeof(Nodo));
		DemasNodo -> dato = c1;
		agregar(DemasNodo);
		
	}

	
	
	

	
	agregar(primerNodo);


	
	
	//Recorriendo Nodos
	Nodo *i = primerNodo;
	
	while(i != NULL){
		printf("%d\n",i->dato);
		i = i->sgte;
	}
	
	return 0;
}

