#include <iostream>

using namespace std;

int main ()
{
	int a,b;
	cout<<"======= Swap hasil =======\n\n";
	cout<<"input angka 1 : ";
	cin >> a;
	cout<<"input angka 2 : ";
	cin>> b;
	
	if (a>b)
	{
	cout<<"Angaka 1 : "<<b<<endl;
	cout<<"Angaka 2 : "<<a<<endl;
	}
	else 
	{
	cout<<"Angaka 1 : "<<a<<endl;
	cout<<"Angaka 2 : "<<b<<endl;
	}
	cin.get();
	return 0;
}

