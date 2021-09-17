#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
	//deklarasi awal
	int id;
	
	//deklarasi untuk nilai pelajaran mahasiswa
	int n,nilai1,nilai2,nilai3,nilai4,nilai5,nilai6,nilai7,tugas_akhir,total;
	
	//deklarasi kalkulator pertambahan,pengurangan,perkalian
	int k,t,p,kali,n1,n2,n3,n4,n5,hasil;
	
	//deklarasi kalkulator pertambahan,pengurangan,perkalian
	float d1,d2,hasil1;
	
	//break pada if
	int stop=0;
	
	//inputan ID
	cout<<"Masukkan ID : ";
    cin>>id;
    
    //program eksekusi ID jika benar
	if (id>=216000000 && id<=221999999 )
	{
		cout<<"===== NILAI PRAKTIKUM =====\n";
    	cout<<"Selamat datang, "<<id;
    	cout<<"\n===========================\n";
    	cout<<"Panjang input : ";
   		cin>>n;
   	 	cout<<"\n===========================\n";	
	}
	
	//inputan nilai dengan panjang 1
	 if(n==1)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        total =(nilai1)/1;
        cout <<"Nilai akhir :"<< total;
	}	
	
	//inputan nilai dengan panjang 2
	else if(n==2)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        total = (nilai1 + nilai2)/2;
        cout <<"Nilai akhir :"<< total;
	}
	
	//inputan nilai dengan panjang 3
	else if(n==3)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        total = (nilai1 + nilai2 + nilai3)/3;
        cout <<"Nilai akhir :"<< total;
	}
	
	//inputan nilai dengan panjang 4
	else if(n==4)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        total = (nilai1 + nilai2 + nilai3 + nilai4)/4;
        cout <<"Nilai akhir :"<< total;
	}
	
	//inputan nilai dengan panjang 5
	else if(n==5)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        cout<<"N5 : ";
        cin>>nilai5;
        total = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5)/5;
        cout <<"Nilai akhir :"<< total;
	}	
	
	//inputan nilai dengan panjang 6
	else if(n==5)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        cout<<"N5 : ";
        cin>>nilai5;
        cout<<"N6 : ";
        cin>>nilai6;
        total = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 )/6;
        cout <<"Nilai akhir :"<< total;
	}
	
	//inputan nilai dengan panjang 6
	else if(n==6)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        cout<<"N5 : ";
        cin>>nilai5;
        cout<<"N6 : ";
        cin>>nilai6;
        total = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 )/6;
        cout <<"Nilai akhir :"<< total;
	}	
	
	//inputan nilai dengan panjang 7 
	else if(n==7)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        cout<<"N5 : ";
        cin>>nilai5;
        cout<<"N6 : ";
        cin>>nilai6;
        cout<<"N7 : ";
        cin>>nilai7;
        total = (nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7)/7;
        cout <<"Nilai akhir :"<< total;
	}
	
	//inputan nilai dengan panjang 8
	else if(n==8)
    {
        cout<<"N1 : ";
        cin>>nilai1;
        cout<<"N2 : ";
        cin>>nilai2;
        cout<<"N3 : ";
        cin>>nilai3;
        cout<<"N4 : ";
        cin>>nilai4;
        cout<<"N5 : ";
        cin>>nilai5;
        cout<<"N6 : ";
        cin>>nilai6;
        cout<<"N7 : ";
        cin>>nilai7;
        cout<<"TA : ";
        cin>>tugas_akhir;
        total = ((nilai1 + nilai2 + nilai3 + nilai4 + nilai5 + nilai6 + nilai7)/7*70/100)+tugas_akhir*30/100;
        cout <<"Nilai akhir :"<< total;
        }
	
	//jika nilai dengan kondisi dibawah
	if (hasil>=80){
            cout <<"\nLulus dengan Grade A";
    }
	else if (hasil>=70 && hasil<=79)
    {
    cout << " Lulus dengan Grade B";
    }
	else if (hasil>=56 && hasil<=59)
    {
    cout << " Lulus dengan Grade C";
    }
    else if (hasil>=55.5)
    {
    cout << " Lulus Bersyarat";
    }
    else if (hasil>=45 && hasil<=55)
    {
    cout << " Grade D";
    }
    else if (hasil>=70 && hasil<=79)
    {
    cout << "Lulus dengan GradeB";
    }
	else if (hasil>=0 && hasil<=44)
    {
    cout << "Grade E";
    }
           
	//Program eksekusi ID jika id 215
	else if (id>221999999 || id<216000000 && id>=200000000 || id<=300000000  && stop==1)
	{
		cout<<"Maaf, program input nilai hanya tersedia untuk Angkatan 2016 – 2021.";
	}
	
	//program syarat 0
	else if (id>=101 && id<=100000)
    {
    
    	cout<<"Inputan salah";
	}
	
	//kalkulator
	else if (id == 0 ) 
	{
		cout<<"=== KALKULATOR SEDERHANA ===\n";
        cout<<"1. Penjumlahan\n";
        cout<<"2. Pengurangan\n";
        cout<<"3. Perkalian\n";
        cout<<"4. Div\n";
        cout<<"5. Mod\n";
        cout<<"0. Exit\n";
        cout<<">> ";
        cin>>k;
	}
	
	//Program Penjumlahan
	if (k==1 )
        {
        cout<<"====== PENJUMLAHAN ======\n";
        cout<<"Panjang Inputan : ";
        cin>>t;
		}
		
		//inputan penjumlahan dengan panjang 2
		else if(t==2 && stop==1)
        {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                hasil =n1 + n2;
                cout<<"=========================\n";
                cout<<n1 <<" + "<< n2 <<" = "<<hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
                stop==1;
        }
        
        //inputan penjumlahan dengan panjang 3
        else if(t==3)
        {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                hasil =n1 + n2 + n3;
                cout<<"=========================\n";
                cout<<n1 <<" + "<< n2 << " + " << n3 <<" = "<<hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
        }
        
        //Inputan penjumlahan dengan panjang 4
        else if(t==4)
        {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                hasil =n1 + n2 + n3 + n4;
                cout<<"=========================\n";
                cout<<n1 <<" + "<< n2 << " + " << n3 << " + " << n4 <<" = "<<hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
        }
        
        //inputan penjumlahan dengan panjang 5
        else if(t==5)
        {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                cout<<"N5 : ";
                cin>>n5;
                hasil =n1 + n2 + n3 + n4 + n5;
                cout<<"=========================\n";
                cout<<n1 <<" + "<< n2 << " + " << n3 << " + " << n4 << " + " << n5 <<" = "<<hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
        }
        
        //Program Pengurangan 
        if (k==2)
        {
        cout<<"====== PENGURANGAN ======\n";
        cout<<"Panjang Inputan : ";
        cin>>p;
    	}
    	
    	//inputan pengurangan dengan panjang 2
    	if(p==2)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                hasil= n1 - n2;
                cout<<"=========================\n";
                cout<<n1 <<" - "<< n2 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
             //inputan pengurangan dengan panjang 3
            else if(p==3)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                hasil=n1 - n2 - n3;
                cout<<"=========================\n";
                cout<< n1 <<" - "<< n2 <<" - "<< n3 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
            //inputan pengurangan dengan panjang 4
            else if(p==4)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                hasil=n1 - n2 - n3 - n4;
                cout<<"=========================\n";
                cout<< n1 <<" - "<< n2 <<" - "<< n3 << " - " << n4 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
        	//inputan pengurangan dengan panjang 5
            else if(p==5)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                hasil=n1 - n2 - n3 - n4 - n5;
                cout<<"=========================\n";
                cout<< n1 <<" - "<< n2 <<" - "<< n3 << " - " << n4 <<" - "<< n5 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
            //Program Perkalian 
        	if (k==3)
        	{
        		cout<<"====== PERKALIAN ======\n";
        		cout<<"Panjang Inputan : ";
        		cin>>kali;
        	}
        	
        	//inputan perkalian dengan panjang 2
        	if(kali==2)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                hasil = n1 * n2;
                cout<<"=========================\n";
                cout<<n1 <<" * "<< n2 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
            //inputan perkalian dengan panjang 3
        	if(kali==3)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                hasil = n1 * n2 * n3;
                cout<<"=========================\n";
                cout<<n1 <<" * "<< n2 << " * " << n3 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";

            }
            
            //inputan perkalian dengan panjang 4
        	if(kali==4)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                hasil = n1 * n2 * n3 * n4;
                cout<<"=========================\n";
                cout<<n1 <<" * "<< n2 << " * " << n3 << " * " << n4 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
            //inputan perkalian dengan panjang 5
        	if(kali==5)
            {
                cout<<"=========================\n";
                cout<<"N1 : ";
                cin>>n1;
                cout<<"N2 : ";
                cin>>n2;
                cout<<"N3 : ";
                cin>>n3;
                cout<<"N4 : ";
                cin>>n4;
                cout<<"N5 : ";
                cin>>n5;
                hasil = n1 * n2 * n3 * n4 * n5;
                cout<<"=========================\n";
                cout<<n1 <<" * "<< n2 << " * " << n3 << " * " << n4 << " * " << n5 <<" = "<< hasil;
                cout<<"\n=========================\n";
                cout<<"Terima Kasih!";
            }
            
            //Inputan jika kurang dari 2
            else if (k<2 && stop==1)
            {
                stop==1;
                cout<<"Inputan tidak valid";
            }
            
            //inputan jika lebih dari 8
            else if (k>8 && stop==1)
            {
                stop==1;
             	cout<<"Terlalu Panjang! Kasihan belum boleh Iteration ntar lelah :v";
      		}
      		
            //Program pembagian
            if (k==4)
        	{
        		cout<<"====== DIV ======\n";
        		cout<<"N1 :";
        		cin>>d1;
        		cout<<"N2 :";
        		cin>>d2;
    		}
    		
    		//inputan jika N1 lebih besar
    		 if (d1 >= d2 && stop==1)
            {
                hasil1 = d1 / d2;
                cout<<"=================\n";
                cout<<d1 << " DIV "<< d2 <<" = "<< hasil1;
            }
            //inputan jika N2 lebih besar
            else if (d1 < d2 && stop==1 )
            {
            	stop==1;
               	cout<< "N1 harus lebih besar dari N2";
            }
            
            //program Mod
            if (k==5)
        	{
       		 	cout<<"====== MOD ======\n";
        		cout<<"N1 :";
        		cin>>n1;
        		cout<<"N2 :";
        		cin>>n2;
   			}
   			
   			//inputan jika N1 lebih besar
           	if (n1 >= n2 && stop==1)
        	{
                hasil = n1 % n2;
                cout<<"=================\n";
                cout<<n1 << "  MOD "<<n2 <<" = "<< hasil;
            }
            
            //inputan jika N2 lebih besar
            else if (n1 < n2 && stop==1)
            {
               cout<< "N1 harus lebih besar dari N2";
            }
            
            //Program Exite
			if (k==0)
    		{
        		cout<<"BYE BYE :3";
          		exit(0);
    		}
	return 0; 
}

