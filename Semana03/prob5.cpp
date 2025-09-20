#include <iostream>
using namespace std;
int main()
{
	int ejemplo[10]={0},n,p=0,pos[10]={0},j=0;
	ejemplo[0]=2;
	ejemplo[1]=3;
	ejemplo[2]=5;
	ejemplo[3]=4;
	ejemplo[4]=6;
	ejemplo[5]=2;
	ejemplo[6]=7;
	ejemplo[7]=2;
	ejemplo[8]=2;
	ejemplo[9]=3;
	cout<<"Ingrese el valor a buscar: "<<endl;
	cin>>n;
	for(int i=0;i<10;i++)
	{
		if(ejemplo[i]==n)
		{
			p++;
			pos[j]=i;
			j++;
		}
	}
	if(p>0)
	{
		cout<<"El valor: "<<n<<" se encuentra: "<<p<<" veces en el arreglo"<<endl;
		cout<<"Las posiciones donde se encuentra este valor son: "<<endl;
		for(int i=0;i<p;i++)
		{
			cout<<pos[i]+1<<'\t';
		}
	}
	else
	{
		cout<<"El nalor: "<<n<<" no se encuentra en el arreglo"<<endl;
	}
	return 0;
}
