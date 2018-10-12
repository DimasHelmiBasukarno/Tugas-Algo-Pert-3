#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{
	int suhu;
	cout<<"Masukkan suhu=";
	cin>>suhu;
	
	if (suhu > 30) {
	  cout<<"PANAS"<<endl; } else
	if (suhu >=20 && suhu <=30) {
	  cout<<"NORMAL"<<endl; } else
	if (suhu < 20) {
	  cout<<"DINGIN"<<endl; }
	  
	return 0;
		
}
