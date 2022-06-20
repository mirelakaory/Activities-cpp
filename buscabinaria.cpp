//programa que implementa o metodo de busca binaria 
#include <iostream>
using namespace std;

int buscaBinaria(int vet[], int x, int esq, int dire) {
  if (dire >= esq) {
    int meio = esq + (dire - esq) / 2;

    if (vet[meio] == x)
      return meio;

    if (vet[meio] > x)
      return buscaBinaria(vet, x, esq, meio- 1);

    return buscaBinaria(vet, x, meio + 1, dire);
  }

  return -1;
}

int main(void) {
    int n,x;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    
    int * vetor = new int [n];
     for (int i=0; i<n; i++){
     cout<<"Digite os valores do vetor em sequencia: ";
     cin>>vetor[i];
    }
    for (int i=0; i<n; i++){
     cout<<vetor[i]<<"  ";
    }
    cout<<endl;

    cout<<"Digite o numero a ser buscado: ";
    cin>>x;

  int result =  buscaBinaria(vetor, x, 0, n - 1);
  if (result == -1)
    cout<<"O elemento não foi encontrado";
  else
    cout<<"O elemento está no indice: "<< result;
    cout<<endl;
    delete [] vetor;
}