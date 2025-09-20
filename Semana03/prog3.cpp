#include <iostream>
using namespace std;
int main()
{
	int ejemplo[10]={0},n,p;
	ejemplo[0]=2;
	ejemplo[1]=3;
	ejemplo[2]=5;
	ejemplo[3]=4;
	ejemplo[4]=6;
	for(int i=0;i<10;i++)
	{
		cout<<"La posicion: "<<i+1<<" es:"<<'\t'<<ejemplo[i]<<endl;
	}
	cout<<"Ingrese la posisción a insertar y el valor a insertar: "<<endl;
	cin>>n>>p;
	for(int i=4;i>n-1;i--)
	{
		ejemplo[i+1]=ejemplo[i];
	}
	for(int i=0;i<10;i++)
	{
		cout<<"La posicion: "<<i+1<<" es:"<<'\t'<<ejemplo[i]<<endl;
	}
	ejemplo[2]=10;
	cout<<"El nuevo arreglo es:"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"La posicion: "<<i+1<<" es:"<<'\t'<<ejemplo[i]<<endl;
	}
	return 0;
}
