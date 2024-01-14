#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int m,flag,i;
	cin>>m;
	flag=0;
	for(i=2; i<=sqrt(m);i++){
		if(m%i!=0){
		flag=1;
	}
	
	}
	if (flag){
	
	cout<<"the number is prime ";
		}
		else{
			cout<<"the number is not prime";
		}
	
 
}