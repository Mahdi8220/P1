#include <iostream>
using namespace std;
int GCD(int x , int y){
	if(y==0){
	return x;	
}
else{
	return GCD(y,x%y);
}
}
int main() {
int x , y;
cout<<"Enter two numbers to find gcd betwin them : ";
cin>>x>>y;
cout<<"gcd "<<x<<" and "<<y<<" is : "<<GCD(x,y);	

}