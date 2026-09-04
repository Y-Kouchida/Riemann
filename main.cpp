#include <iostream>
using namespace std;


double integral( double (*fct) (double), double a ,double b ){
	if(b<a)
	return -integral(fct,b,a);
	double N = 10000;
	double resultat = 0;
	for(int k = 1; k<=N; k++){
		double t = a + (k*(b-a))/N;
		resultat+=fct(t);
	}
	resultat*=(b-a)/N;
	return resultat;
}

double polynom(double x){
	return 2*x*x - 3*x;
}
int main(){	
	double area = integral(&polynom, 0,1);
	cout<<area<<endl;
	return 0;
}
