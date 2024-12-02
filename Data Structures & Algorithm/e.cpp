#include<iostream>
using namespace std;

int main(){
	
	for(int i=0;i<10;i++){
		
		for(int j = 0;j<7;j++){
			
			if(i==0||i==1||i==4||i==5||i==8||i==9){
				cout<<"* ";
			}
			else{
				cout<<"* *";
				break;
			}
		}
		cout<<endl;
	}
}