#include "aula.h"

int main() {
Aula A;
A.aggiungiUtente("Bianchi");
A.aggiungiUtente("Rossi");
A.aggiungiUtente("Rossi");
A.stampaAula();
A.aggiungiUtente("Verdi");
A.stampaAula();
A.liberaPostazione(2);
A.stampaAula();
A.listaUtenti();
return 0;
}