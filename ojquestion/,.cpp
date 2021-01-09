#include<iostream>
#include<iomanip>
#include<cmath> 
using namespace std;
 
int main(){
	float a,b;
	cin>>a>>b;
	cout << fixed << setprecision(1)<<sqrt(a*a+b*b)<<endl;
	cout << fixed << setprecision(1)<<a*b/2<<endl;
	return 0;
}
