#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int MOD(int m, int n){
	while(m>=n){
		m=m-n;
	}
	return m;
}


int Quotient(int m, int n){
	int flag=0;
		while(m>=n){
		m=m-n;
		flag++;
	}
	
	return flag;
}



int main() {
	int m, n;
	
	cout<<"please enter first number :";
	cin>>m;
	
	cout<<"please enter second number :";
	cin>>n;
	
	
	cout<<"Quotient :"<<Quotient(m, n)<<"\n";
	
	cout<<"MOD :"<<MOD(m, n);
	
}