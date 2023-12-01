#include <iostream>

using namespace std;

main() {
float n;
cout<<"please enter the Wages  :  ";
cin>>n;
  if(n<6){ 
  	cout<<"the Wages is  :  "<<n;
  }
  else if(n>=6  &&  n<8){
  	 n=n-(0.05*n);
  	cout<<"the Wages is  :  "<<n;
  }
  else if(n>=8  &&  n<10){
  	 n=n-(0.10*n);
  	cout<<"the Wages is  :  "<<n;
  }
  else if(n>=10  &&  n<14){
  	 n=n-(0.15*n);
  	cout<<"the Wages is  :  "<<n;
  }
  else if(n>=14  &&  n<18){
  	 n=n-(0.20*n);
  	cout<<"the Wages is  :  "<<n;
  }
  else if(n>=18  &&  n<25){ 
     n=n-(0.25*n);
   	cout<<"the Wages is  :  "<<n;
  } 
  else{ 
     n=n-(0.35*n);
   	cout<<"the Wages is  :  "<<n;
  }
}

 
	
	
