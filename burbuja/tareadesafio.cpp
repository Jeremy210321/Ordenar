#include <iostream>
using namespace std;

void ingresar (int a[],int n);
void imprimir (int a[],int n );
void burbuja (int a[], int n);
int i,j,aux;



void ingresar (int a[],int n)
{
  for(i=0;i<n;i++){
  cout<<"Ingrese el elemento al arreglo: ";
  cin >> a[i];
  }
}
void imprimir (int a[],int n )
{
  for(i=0;i<n;i++){
    cout<<a[i];

  }


}
void burbuja (int a[], int n)
{
  for(i=0;i<n;i++){
   for (j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
      {
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;


      }


    }
  }

  cout<<endl;
}
int main()
{
  int arreglo[100];
  int n;
  cout<<"Ingrese el Tamaño: ";
  cin >>n;
  ingresar(arreglo,n);
  imprimir (arreglo,n);
  burbuja(arreglo,n);
  imprimir (arreglo,n);
  return 0;
}
