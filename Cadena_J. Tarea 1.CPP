#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdlib>

float f1(int n);
float f2(int n);
float f3(int n);
float f4(int n);

int main(int argc, char **argv){
	std::cout<<"i"<<"                 "<<"F1+"<<"                      "<<"F1-"<<"                     "<<"F2+"<<"                    "<<"F2-"<<std::endl<<std::endl;
	for(int i=1;i<=10;i=i+1){
	std::cout.precision(15);
	std::cout.setf(std::ios::scientific);
	std::cout<<i<<"\t"<<std::setw(10)<<f1(i)<<"\t"<<std::setw(10)<<f2(i)<<"\t"<<std::setw(10)<<f3(i)<<"\t"<<std::setw(10)<<f4(i)<<std::endl;
 	}
system("PAUSE");
return 0;
}

float f1 (int n){
float c=pow(10.0,-n);
float a=(-1.0+sqrt(1.0-4.0*c))/2.0;
return a;
}

float f2 (int n){
float c=pow(10.0,-n);
float a=(-1.0-sqrt(1.0-4.0*c))/2.0;
return a;
}

float f3 (int n){
float c=pow(10.0,-n);
float a=(-2.0*c)/(1.0+sqrt(1.0-4.0*c));
return a;
}

float f4 (int n){
float c=pow(10.0,-n);
float a=(-2.0*c)/(1.0-sqrt(1.0-4.0*c));
return a;
}
