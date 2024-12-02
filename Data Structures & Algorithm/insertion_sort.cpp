#include<iostream>
using namespace std;
int insertion(int arr[]){
	
	for(int i=0;i<8;i++){
		
		if(arr[i]>arr[i+1]){
			
			int temp;
			temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
			
		}
      for(int j=i;j>=0;j--){
      	
      	if(arr[j]<arr[j-1]){
			
			int temp;
			temp = arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			
		}
		
	  }
		
		
	}
	
	for(int j=0;j<8;j++){
		
		cout<<arr[j]<<endl;
	}
	
	
}
int main(){
	
	int arr[8]={20,40,50,10,30,70,80,100};
	
	insertion(arr);
	
}