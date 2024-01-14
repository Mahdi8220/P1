#include <iostream>
using namespace std;
int main() {
int m , n , i , bmm;

cout<<"Enter two entegr numbers to find bmm : ";
cin>>n>>m;

for(i=2;i<=n && i<=m;i++){
	if(n%i==0 && m%i==0){
		bmm=i;
	}
 }
 cout<<"bmm betwin "<< n <<" and " <<m<<" is : "<<bmm;
}