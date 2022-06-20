//Algoritmo de ordenação Insertion-Sort 
#include<iostream>  
using namespace std;

int main ()  {    
    int n,x;
    cout<<"Digite o tamanho do vetor: ";
    cin>>n;
    int vetor[n];
     for (int i=0; i<n; i++){
     cout<<"Digite os valores do vetor: ";
     cin>>vetor[i];
    }
    cout<<"\nLista dos valores inseridos: \n";
    for (int i=0; i<n; i++){
     cout<<vetor[i]<<" ";
    }
    cout<<endl;

    for(int k=1; k<n; k++)   
    {  
        int chave = vetor[k];  
        int j= k-1;  
        while(j>=0 && chave <= vetor[j])  
        {  
            vetor[j+1] = vetor[j];   
            j = j-1;  
        }  
        vetor[j+1] = chave;  
    }  
    cout<<"\nLista dos valores ordenados: \n";
    for(int i=0;i<n;i++)  
    {  
        cout <<vetor[i]<<" ";  
    }  
}
