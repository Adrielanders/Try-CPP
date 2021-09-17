#include <iostream>

using namespace std;

int main ()
{
	int a,b;
	cout<<"======== Menentukan Ganjil dan Genap =======\n\n";
	cout<<"masukan bilangan : ";
	cin>>a;
	
	if(a%2==0)
	{
	cout<<a<<" bilangan Genap"<<endl;
	}
	else if (a%2!=0)
	{
	cout<<a<<" bilangan Ganjil"<<endl;
	}

	cin.get ();
	return 0;
}
