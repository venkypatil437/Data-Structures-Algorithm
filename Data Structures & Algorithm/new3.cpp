#include<iostream>
using namespace std;

int main(){
	
	int arr[10]={1,454,34,54,323,43,343,34,55,333};
	
	for(int i=0;i<10;i++){
		
		
			for(int i=0;i<10;i++){
		
		int large;
		if(arr[i]>arr[i+1]){
			int temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			large = arr[i+1];
		}
	
	}
		
	
	
	}
	
	
	
	for(int j=0;j<10;j++){
		
		cout<<arr[j]<<endl;
	}
}