#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int BMM(int a, int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}



int main() {
	int a, b;
	cin>>a>>b;
	cout<<"bmm :"<<BMM(a, b);
}