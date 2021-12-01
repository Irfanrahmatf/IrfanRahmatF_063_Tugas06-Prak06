#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main (){
	int n, i, nilai, maks;
	int *P_maks;
	P_maks=&maks;
	
	cout <<" Banyak nilai yang ingin diinput : "; cin>>n;
	
	for (i=1; i<=n; i++){
		cout <<" Masukkan nilai ke-" << i <<" : "; cin>>nilai;
		if (nilai>maks){
			maks=nilai;
		}
	}
	
	cout <<endl;
	cout <<" Nilai Maksimum = " << maks <<" dengan alamat = " << &maks <<endl;
	
	getch();
}
