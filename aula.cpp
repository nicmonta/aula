#include "aula.h"

/*Aula::Aula(){
	contaUtenti=0;
	for (int i =0; i<50; i++){
	a[i]="";
	}
}*/

bool Aula::aggiungiUtente (string id){
	if (id.length()>15 || contaUtenti==50)
		return false;
	for (int i=0; i<50; i++){
		if (id == a[i])
			return false;
	}
	for (int i=0; i<50; i++){
		if (a[i] == ""){
			a[i]= id;
			contaUtenti+=1;
			return true;
		}
	}
	return false;
}

bool Aula::liberaPostazione(int i){
	if (a[i-1] != ""){
		a[i-1]="";
		contaUtenti-=1;
		return true;
	}
	return false;
}

void Aula::stampaAula(){
	cout << "AULA:"<< endl;
	for (int i=0;i <50; i++){
		cout << "POSTAZIONE"<< i+1 << " : ";
		if (a[i]!="") cout << a[i]<< endl;
		else cout << "<libera>"<< endl;
	}
}
void Aula::listaUtenti(){
	for (int i=0;i <50;i++){
		if (a[i]!="")
		cout << a[i];
		if (a[i+1]!="" && i+1 !=50)
		cout << " -> ";
		
	}
	cout <<endl;
}