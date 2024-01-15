#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isprime(int n){
	int flag=0;
	
	for(int i=1; i<=n; i++){
	  if(n%i==0){
	  	flag++;
	  
	  }	
	}
	if(flag==2){
		return 1;
	}else{
		return 0;
	}
}








int main() {
int n;
cout<<"please enter a number :";
cin>>n;

int sum=0;
for(int i=0; i<n; i++){
	if(isprime(i)){
		sum+=i;
	}
}

cout<<"sum of prime numbers less than "<<n<<" is :"<<sum;

return 0;
}