#include <iostream>
using namespace std;
int y1(int x){         
	int a=x/100*1;       // %1 KDV FONKSÝYONU...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiyat ="<<x-a;
	return a;
	
}
int y8(int x){
	int a=x/100*8;     //%8 KDV FONKSÝYONU ...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiytý ="<<x-a;
	return a;
	
}
int y18(int x){
	int a=(x/100)*18;    //%8 KDV FONKSÝYONU...
	cout<<"KDV si ="<<a<<endl;
	cout<<"KDV siz Fiyatý = "<<x-a;
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
	bas("                         KDV HESAPLAMA SÝSTEMÝNE HOÞGELDÝNÝZ...");
	alt("");
	bas("Ýlerlemek için Enterleyiniz..");
	getchar();
	alt("");
	bas("                        % Kaçlýk Kdv Hesaplanacak ?");
	alt("");
	cout<<"           %1 Ýse 'a'      %8 Ýse  'b'       %18 ise   'c'  " <<endl<<"  (Hangi Ürünün Hangi Kdv Dilimine Girdiðini Öðrenmek için 'info')"<<endl;

	
	cin>>karar;
	if(karar=="a"){
		bas("%1 Kdv Dilimini Seçtiniz...  Fiyat Giriniz..");
		cin>>f1;
		y1(f1);
	}
	else if(karar=="b"){
		bas("%8 Kdv Dilimini Seçtiniz... Fiyat Giriniz..");
		cin>>f2;
		y8(f2);
	}
	else if(karar=="c"){
		bas("%18 Kdv Dilimini Seçtiniz...Fiyat Giriniz...");
		cin>>f3;
		y18(f3);
	}
	else if(karar=="info"){
	    bas("   %1 KDV ÜRÜNLER = Kuruyemiþ                Paketli ürünler        Unlu Mamüller");
		alt("");
		bas("   %8 KDV ÜRÜNLER = Süt ve Süt ürünleri      Tekstil                Hastane");
		alt("");
		bas("   %18 KDV ÜRÜNLER = Elektirik               Su                     Telekomünikasyon");
		cout<<endl;
		cout<<endl;
		cout<<"Vergi Dilimi Seçme Menüsüne Dönmek için 'geri'"<<endl;
		cin>>k2;
		if(k2=="geri"){
				alt("");
	bas("                        % Kaçlýk Kdv Hesaplanacak ?");
	alt("");
	cout<<"           %1 Ýse 'a'      %8 Ýse  'b'       %18 ise   'c'  " <<endl;

	
	cin>>karar;
	if(karar=="a"){
		bas("%1 Kdv Dilimini Seçtiniz...  Fiyat Giriniz..");
		cin>>f1;
		y1(f1);
	}
	else if(karar=="b"){
		bas("%8 Kdv Dilimini Seçtiniz... Fiyat Giriniz..");
		cin>>f2;
		y8(f2);
	}
	else if(karar=="c"){
		bas("%18 Kdv Dilimini Seçtiniz...Fiyat Giriniz...");
		cin>>f3;
		y18(f3);
	}
			
		}
		
		
		
	}

	
	
	

	return 0;
}
