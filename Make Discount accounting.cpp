#include <iostream>
using namespace std;

int main()
{
	int jarak,cp,up,ongkir,t1,t2,t3;
	int km=3000,jasa=2000,DO=7000,DP1=30000,DP2=40000,DP3=60000;
	
	cout<<"Jarak : ";
	cin>>jarak;
	cout<<"Pembyaran (1 : Tunai,2 : Non Tunai) : ";
	cin>>cp;
	cout<<"pembeli : ";
	cin>>up;
	
	if (cp==2)
	{
		if (up ==30000)
		{
			ongkir=jarak*km;
			cout<<"Ongkir : "<< ongkir;
			cout<<"\njasa : "<< jasa;
			cout<<"\nPembeli : "<<up;
			cout<<"\nDiskon Ongkir : -"<<DO;
			cout<<"\nDiskon Pembeli : -"<<DP1;
			t1=ongkir-DO;
			t2=up-DP1;
			t3=t2+t1+jasa;
			cout<<"\nTotal yang harus dibayar adalah : "<<t3;
			
		}
		else if (up==40000)
		{
			ongkir=jarak*km;
			cout<<"Ongkir : "<< ongkir;
			cout<<"\njasa : "<< jasa;
			cout<<"\nPembeli : "<<up;
			cout<<"\nDiskon Ongkir : -"<<DO;
			cout<<"\nDiskon Pembeli : -"<<DP1;
			t1=ongkir-DO;
			t2=up-DP1;
			t3=t2+t1+jasa;
			cout<<"\nTotal yang harus dibayar adalah : "<<t3;
		}
		else if(up==60000)
		{
			ongkir=jarak*km;
			cout<<"Ongkir : "<< ongkir;
			cout<<"\njasa : "<< jasa;
			cout<<"\nPembeli : "<<up;
			cout<<"\nDiskon Ongkir : -"<<DO;
			cout<<"\nDiskon Pembeli : -"<<DP1;
			t1=ongkir-DO;
			t2=up-DP1;
			t3=t2+t1+jasa;
			cout<<"\nTotal yang harus dibayar adalah : "<<t3;
		}
		else 
		{
			ongkir=jarak*km;
			cout<<"Ongkir : "<< ongkir;
			cout<<"\njasa : "<< jasa;
			cout<<"\nPembeli : "<<up;
			t1=up+ongkir+ongkir+jasa;
			cout<<"\nTotal yang harus dibayar adalah : "<<t1;
		}


	}
	else if (cp==1)
{
		ongkir=jarak*km;
			cout<<"Ongkir : "<< ongkir;
			cout<<"\njasa : "<< jasa;
			cout<<"\nPembeli : "<<up;
			cout<<"\nDiskon Ongkir : -"<<DO;
			t1=ongkir-DO;
			t3=up+t1+jasa;
			cout<<"\nTotal yang harus dibayar adalah : "<<t3;
}
  return 0;
}
