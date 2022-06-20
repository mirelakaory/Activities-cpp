//Funcao que declara 3 vetores inteiros informados pelo usuario;
//Soma os valores dos vetores V1 e V2 atraves dos ponteiros;
#include <iostream> 
using namespace std;
//FUNCAO PARA SEPARAR
void separador(){
    cout<<"-------------------------------"<<endl;
    cout<<endl;
}
//FUNCAO PARA SOMAR OS VETORES
int somaVetor (int *pt1,int *pt2, int *pt3,int n){
    cout<<"A soma dos vetores é: ";
    for (int i=0; i<n; i++)
    {
    pt3[i]= pt1[i]+pt2[i];
    }
    return 0;
}

int main(){
    int n;
    cout<<"Entre com o tamanho do vetor: ";
    cin>>n;
    int * v1=new int[n];
    int * v2=new int[n];
    int * v3= new int[n];
    int *pt1,*pt2,*pt3;

    pt1=v1;
    pt2=v2;
    pt3=v3;
separador();
//leitura do vetor
    for (int i = 0; i<n;i++){
    cout<< "Entre com o "<<i+1<< "o valor: ";
    cin>>v1[i];
    }
        cout<<"Primeiro vetor: "<<endl;
        for (int i=0; i<n;i++){
        cout<<v1[i]<<", ";
        }
    cout<<endl;

separador();
//leitura do vetor 
    for (int i = 0; i<n;i++){
    cout<< "Entre com o "<<i+1<< "o valor: ";
    cin>> v2[i];
    }
        cout<<"Segundo vetor: "<<endl;
        for (int i=0; i<n;i++){
        cout<<v2[i]<<",";
        }
    cout<<endl;

separador(); 
//soma dos vetores
somaVetor(pt1,pt2,pt3,n);
    for (int i =0;i<n;i++){
    cout<<v3[i]<<", ";   
    }
//desalocando memoria
    delete [] v1;
    delete [] v2;
    delete [] v3;
}