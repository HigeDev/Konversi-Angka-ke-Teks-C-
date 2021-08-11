#include <iostream>
using namespace std;
void angka1(int m){
	string n[10]={"0","Se","Dua ","Tiga ","Empat ","Lima ","Enam ","Tujuh ","Delapan ","Sembilan "};
	for (int i=1; i<=9; i++){
		if (m==i)
		cout<<n[i];
	}
}
void angka2(int nilai){
	int n,m;
	n=nilai%1000/100;
	if (n>0){
	angka1(n);
	cout<<"ratus ";
	}
	n=nilai%100/10;
	m=nilai%10/1;     
	if (n==1){				
		if (m==0)
		cout<<"Sepuluh ";
		else {
		angka1(m);
		cout<<"belas ";
		}
	}
	else {
		angka1(n);
		if(n>=1)
		cout<<"puluh ";
		if (m>1)
		angka1(m);
		if (m==1)
		cout<<"Satu ";
	}
}
void angka3(int angka){
	int nilai,x;
	nilai=angka/1000000;
	angka2(nilai);
	x=angka%1000000000/1000000;
	if (x!=0)
	cout<<"Juta ";					
	nilai=angka/1000;	
	angka2(nilai);
	x=angka%1000000/1000;
	if (x!=0)
	cout<<"Ribu ";			
	nilai=angka;		
	angka2(nilai);
}

int main(){
	int bil;
	cout<<"- Program Konversi Bilangan Bulat Ke Teks Dalam Jutaan -\n\n";
	cout<<"Masukan Bilangan : ";
	cin>>bil;
	angka3(bil);
}
