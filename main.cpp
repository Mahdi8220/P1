#include <iostream>

using namespace std;

main() {
		
float num1,num2,result;
char op;
cout<<"enter your numbers :  ";
cin>> num1 >> op >> num2;
switch (op){
	case  '-':
		result=num1-num2;
		break;
	case  '+':
		result=num1+num2;
		break;
	case  '*':
		result=num1*num2;
		break;
	case  '/':
		result=num1/num2;
		break;
}
    cout<<"the value is  :  "<<result;
	
		}
