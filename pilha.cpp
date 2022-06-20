//Programa que implementa uma Pilha por meio de um vetor, de tamanho n, alocado dinamicamente.
#include <iostream>  
using namespace std; 
 
void impVetor(int *pilha, int tam){ 
 
 for(int i = 0; i < tam; i++){ 
 cout << pilha[i] << ", "; 
 } 
 cout <<endl; 
} 
 
void empilhar(int *topo, int *pilha, int tam, int x){ 
 
 if(*topo == tam - 1){ 
 cout << "Overflow!"<<endl; 
 
 } else{ 
 *topo = *topo + 1; 
 pilha[*topo] = x; 
 } 
} 
 
void desempilhar(int *topo, int *pilha, int tam){ 
 
 if(*topo == -1){ 
 cout << "A pilha esta vazia!"<<endl; 
 
 } else{ 
 cout << "Valor removido: " << pilha[*topo] << "\n\n"; 
 pilha[*topo] = 0; 
 *topo = *topo - 1; 
 } 
} 

int main() { 
 int tam, x, opcao; 
 int topo = -1; 
 
 cout << "Informe o tamanho do vetor: "; 
 cin >> tam; 
 int *pilha = new int[tam]; 
 
 do{ 
 cout << "-----------------------------------------------" << endl; 
 cout << "                      MENU " << endl; 
 cout << "-----------------------------------------------" << endl; 
 cout << " 1. EMPILHAR     2. DESEMPILHAR      0. SAIR " << endl; 
 cout << "-----------------------------------------------" << endl; 
 cin >> opcao; 
 
 switch(opcao){ 
 
 case 0: 
 cout << "Programa encerrado.\n"; 
 break; 
 
 case 1: 
 
 cout << "Informe o valor a ser empilhado: "; 
 cin >> x; 
 empilhar(&topo, pilha, tam, x); 
 impVetor(pilha, tam); 
 break; 
 
 case 2: 
 
 desempilhar(&topo, pilha, tam); 
 impVetor(pilha, tam); 
 break; 
 
 default: 
 cout << "Opção invalida!" << endl; 
 } 
 } while(opcao != 0); 
 
 return 0; 
}