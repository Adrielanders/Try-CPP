#include<iostream>
using namespace std;
int main()
{
           int i,n;
           cout<<"masukkan angka anda = ";
           cin>>n;
           
           for(i=2;i<=n;i++)
                       if(n%i==0)
                       {
                                   n=n/i;
                                   cout<<i<<endl;
                       }
                       
           
           cout<<endl;
           return 0;
}

