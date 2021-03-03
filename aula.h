#include <iostream>
#include <string>

using namespace std;

class Aula{
	private:
	string a[50];
	int contaUtenti;
	public:
	bool aggiungiUtente (string id);
	bool liberaPostazione(int i);
	void stampaAula();
	void listaUtenti();
};