#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main(){
	cout<<left<<"Celsius"<<'\t'<<"Fahrenheit"<< "|" << "Fahrenheit" <<" " << "Celsius" << endl;
	double cel1 = 40.0;
	double fah1 = celsius_to_fah(cel1);
	cout << left << setprecision(3)<<cel1 << '\t' << setprecision(4) << fah1 << '\t' << "|" << '\t' << "120.0" << '\t' <<setprecision(4)<< fahrenheit_to_cels(120.0) << endl;
	double cel2 =39.0;
	double fah2 = celsius_to_fah(cel2);
	cout << left << setprecision(3) << cel2 << '\t' << setprecision(4) << fah2 << '\t' << "|" << '\t' << "100.0" << '\t' << setprecision(4) << fahrenheit_to_cels(100.0) << endl;
	cout<<left<<"......" << '\t' <<"......" << '\t' <<"|" << '\t' <<"......" << '\t' <<"......"<<endl;
	double cel3 = 31.0;
	double fah3 = celsius_to_fah(cel3);
	cout << left << setprecision(3) << cel3 << '\t' << setprecision(3) << fah3 << '\t' << "|" << '\t' << "30.0" << '\t' << setprecision(3) << fahrenheit_to_cels(30.0) << endl;
}