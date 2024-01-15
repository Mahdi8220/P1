#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int power(int N, int M){
	int flag=1;
	for(int i=0; i<M; i++){
		flag=flag*N;
		
	}
	return flag;
}


int main() {
	int M, N;
cout<<"enter first number :";
cin>>N;

cout<<"enter second number :";
cin>>M;

cout<<power(N, M);
}