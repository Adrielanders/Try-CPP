#include <iostream>

using namespace std;

int main ()
{
	char a [100];
	int b,pengurangan1,tambah1;
	cout << "====== Penghitungan usia Emas ======\n\n";
	cout<<"Nama anda : ";
	cin>>a;
	cout<<"Umur Anda sekarang : ";
	cin>>b;
	pengurangan1 = 50 - b;
	tambah1 = pengurangan1 + 2020;
	cout<<"Nama anda "<<a<<", anda berusia "<<b<<" tahun. Pada tahun "<<tambah1<<" anda akan berusia 50 tahun"<<endl;
	cin.get();
	return 0;
}
