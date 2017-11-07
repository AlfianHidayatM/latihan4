#include<iostream>
using namespace std;

int main(){
	int bilangan;
	cout <<"Masukan Bilangan : ";
	cin >>bilangan;
	
	if (bilangan>0)
	cout << "Ini Adalah Bilangan Positif" ;
	
	else if (bilangan<0)
	cout << "Ini Adalah Bilangan Negatif" ;
	
	else
	cout << "Ini Adalah Bilangan Nol";
}
