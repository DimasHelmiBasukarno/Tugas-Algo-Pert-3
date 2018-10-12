#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
	int angka;
	cout<<"Masukkan angka : ";
	cin>>angka;
	cout<<endl;
	string message;
	message = angka && angka%2 == 0 ? "Bilangan yang anda masukkan adalah bilangan genap " : "Bilangan yang anda masukkan adalah bilangan ganjil";	cout<<message;
    
    return 0;
}


	
 
