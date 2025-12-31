#include"mytemperature.h"
double celsius_to_fah(double cel){
	return (9.0/5.0)*cel + 32;
}
double fahrenheit_to_cels(double fah){
	return (5.0/9.0)*(fah - 32);
}