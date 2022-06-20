//Programa que implementa uma Lista por meio de vetor, de tamanho n, alocado dinamicamente
#include <iostream>
using namespace std;
int tam, *Lista;
int preenchidos = 0;
int buscar(int busca){
int i = 0;
 while( i < tam){
 if(Lista[i] == busca){
 return i;
 } 
 i++;
 }
 return -1;
}
void inserir(int x){
 if(preenchidos < tam){
 if(buscar(x) == -1){
 for(int i=0; i< tam; i++){
 if (buscar(x) == -1){
 Lista[preenchidos] = x;
 preenchidos = preenchidos + 1;
 }
 }
 }else{
 cout<< "Elemento já existe "<< endl;
 }
 }else{
 cout<< "Overflow" << endl;
 }
}
void remover(int x){
 int indice, valorRecuperado;
 if (preenchidos != 0){
 indice = buscar(x);
 if(indice != -1){
 valorRecuperado = Lista[indice];
 for(int i = indice; i< preenchidos; i++){
 Lista[i] = Lista[i+1];
 }
 preenchidos = preenchidos - 1;
 }else{
 cout << "Elemento não existe! "<<endl;
 }
 }else{
 cout << "Underflow" << endl;
 }
}
int main(){
 int opcao, busca, num, x;
 cout << "Informe o tamanho do vetor: "<< endl;
 cin >> tam;
 Lista = new int[tam];
 cout << "Informe os valores do vetor : ";
 for(int i = 0; i < tam; i++){
 cin >> Lista[i];
 preenchidos = preenchidos + 1;
 }
 cout<<endl;
 for(int i = 0; i < tam; i++){
 cout<< Lista[i]<<" ";
 }
 cout<<endl;
 do{
 cout << "---------------------------------------------------------------------" << endl;
 cout << "MENU DE OPCAO: " << endl;
 cout<< endl;
 cout << "BUSCAR ELEMENTO: 1     INSERIR ELEMENTO: 2     REMOVER ELEMENTO: 3"<<endl;
 cout << "SAIR: 0" << endl;
 cout << "---------------------------------------------------------------------" << endl<< endl;
 cin >> opcao;
 switch(opcao){
 case 1:
 cout << "Digite numero voce deseja buscar: "<< endl;
 cin >> busca;
 if(buscar(busca) == -1){
 cout << "Esse numero nao esta na lista: "<< endl;
 }else{
 cout << "Numero buscado esta no indice " <<buscar(busca) << endl;
 }
 break;
 case 2:
 cout << "Qual numero voce deseja inserir: "<< endl;
 cin >> num;
 inserir(num);
 break;
 case 3:
 cout << "Qual numero voce deseja remover: "<< endl;
 cin >> x;
 remover(x);
 break;
 }
 for(int i = 0; i < tam; i++){
 cout << Lista[i]<< " ";
 }
 cout<< endl<<endl;
 }while(opcao != 0);
 delete[] Lista;
 return 0;
}
