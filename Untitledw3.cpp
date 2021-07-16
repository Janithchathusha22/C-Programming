#include <iostream>
using namespace std;
int main(){
	int price,discount;
	
	cout<<"Enter the total price";
	cin>>price;
	
	if(price>1000){
		discount=(price*25)/100;
		
	}
	
	else if(price>=5000){
		discount=(price*15)/100;
	}
	
	else if(price>=3000){
		discount=(price*10)/100;
	}
	else{
		discount=0;
	}
	
	cout<<"Final price="<<price-discount<<endl;
	  
	
}
    
