#include <iostream>
using namespace std;
int y1(int x){         
	int a=x/100*1;       // %1 KDV FONKS�YONU...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiyat ="<<x-a;
	return a;
	
}
int y8(int x){
	int a=x/100*8;     //%8 KDV FONKS�YONU ...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiyt� ="<<x-a;
	return a;
	
}
int y18(int x){
	int a=(x/100)*18;    //%8 KDV FONKS�YONU...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiyat� = "<<x-a;
	return a;
}
string bas(string x){
	cout<<x<<endl;
	return x;
}
string alt(string x){
	cout<<" "<<endl;
	return x;
}
int main() {
	double sayi,sayi1,s,f1,f2,f3;
	string karar,k2;
	
	setlocale(LC_ALL,"Turkish");
	bas("                         KDV HESAPLAMA S�STEM�NE HO�GELD�N�Z...");
	alt("");
	bas("�lerlemek i�in Enterleyiniz..");
	getchar();
	alt("");
	bas("                        % Ka�l�k Kdv Hesaplanacak ?");
	alt("");
	cout<<"           %1 �se 'a'      %8 �se  'b'       %18 ise   'c'  " <<endl<<"  (Hangi �r�n�n Hangi Kdv Dilimine Girdi�ini ��renmek i�in 'info')"<<endl;

	
	cin>>karar;
	if(karar=="a"){
		bas("%1 Kdv Dilimini Se�tiniz...  Fiyat Giriniz..");
		cin>>f1;
		y1(f1);
	}
	else if(karar=="b"){
		bas("%8 Kdv Dilimini Se�tiniz... Fiyat Giriniz..");
		cin>>f2;
		y8(f2);
	}
	else if(karar=="c"){
		bas("%18 Kdv Dilimini Se�tiniz...Fiyat Giriniz...");
		cin>>f3;
		y18(f3);
	}
	else if(karar=="info"){
	    bas("   %1 KDV �R�NLER = Kuruyemi�                Paketli �r�nler        Unlu Mam�ller");
		alt("");
		bas("   %8 KDV �R�NLER = S�t ve S�t �r�nleri      Tekstil                Hastane");
		alt("");
		bas("   %18 KDV �R�NLER = Elektirik               Su                     Telekom�nikasyon");
		cout<<endl;
		cout<<endl;
		cout<<"Vergi Dilimi Se�me Men�s�ne D�nmek i�in 'geri'"<<endl;
		cin>>k2;
		if(k2=="geri"){
				alt("");
	bas("                        % Ka�l�k Kdv Hesaplanacak ?");
	alt("");
	cout<<"           %1 �se 'a'      %8 �se  'b'       %18 ise   'c'  " <<endl;

	
	cin>>karar;
	if(karar=="a"){
		bas("%1 Kdv Dilimini Se�tiniz...  Fiyat Giriniz..");
		cin>>f1;
		y1(f1);
	}
	else if(karar=="b"){
		bas("%8 Kdv Dilimini Se�tiniz... Fiyat Giriniz..");
		cin>>f2;
		y8(f2);
	}
	else if(karar=="c"){
		bas("%18 Kdv Dilimini Se�tiniz...Fiyat Giriniz...");
		cin>>f3;
		y18(f3);
	}
			
		}
		
		
		
	}

	
	
	

	return 0;
}
