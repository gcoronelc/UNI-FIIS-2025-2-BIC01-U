#include <iostream>
using namespace std;
int main()
{
	int ejemplo[]={2,3,5,4,6};
	for(int i=0;i<5;i++)
	{
		cout<<"La posicion: "<<i+1<<" es:"<<'\t'<<ejemplo[i]<<endl;
	}
	for(int i=0;i<5;i++)
	{
		cout<<"ingrese el nuevo valor para la posisición: "<<i+1<<endl;
		cin>>ejemplo[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"La posicion: "<<i+1<<" es:"<<'\t'<<ejemplo[i]<<endl;
	}
	
	return 0;
}
