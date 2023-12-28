#include <iostream>
using namespace std;
int power(int x , int y){
	if(y>1){
		
		return (x*power(x,y-1));
	}
	else{
		return x;
	}
} 

int fact(int x){
	if(x==0){
		return 1;
	}
	else{
		return x*fact(x-1);
	}
}
int main() {

float sinx ,cosx,x,tanx;

cout<<"please Enter anumber for X to find tanX : ";
cin>>x;	
sinx=x-(power(x,3))/(fact(3))+(power(x,5))/(fact(5))-(power(x,7))/(fact(7));
cosx=1-(power(x,2))/(fact(2))+(power(x,4))/(fact(4))-(power(x,6))/(fact(6));
tanx=sinx/cosx;
  
cout<<"sinx : "<<sinx<<"\ncosx : "<<cosx<<"\ntanX = "<<tanx;
}