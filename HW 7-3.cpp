#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int DevisorSum(int n){
		int flag=0;
		
	for(int i=1; i<=n; i++){
		if(n%i==0){
			flag=flag+i;
		}
		
	}
	return flag;
}



int main() {
	int n;
	cout<<"please enter a number :";
	cin>>n;
	
	cout<<"sum of Devisors :"<<DevisorSum(n);
}