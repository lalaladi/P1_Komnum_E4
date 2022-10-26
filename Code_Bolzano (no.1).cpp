#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
double f(double x);

double f(double x){
	double x1=x*x*x-(3*x)+1.0;
	return x1;
}

int main(){
	cout.precision(3);
	cout.setf(ios::fixed);
	double x1,x2,x3,fx1,fx2,fx3;
	x1:cout<<"Masukkan x:\nx1=";
	cin>>x1;
	cout<<"x2=";
	cin>>x2;
	
	int iterasi=0;
 	while (fx3!=0){
 		x3=(x1+x2)/2.0;
 		fx1=f(x1);
 		fx2=f(x2);
 		fx3=f(x3);
 		iterasi++;
 		cout<<iterasi<<setw(18)<<x1<<setw(18)<<x2<<setw(18)<<x3<<setw(18)<<fx1<<setw(18)<<fx2<<setw(18)<<fx3<<endl;
 		if(fx3==0){
 			cout<<"Akar dari persamaan diatas yaitu "<<x3<<endl;
 			return 0;
		 }
		 if(fx1*fx3>0){
		 	x1=x3;
		 }
		 else if(fx1*fx3<0){
		 	x2=x3;
		 }
	 }
 	
cout<<"Akar dari persamaan diatas yaitu "<<x3<<endl;
return 0;
}
