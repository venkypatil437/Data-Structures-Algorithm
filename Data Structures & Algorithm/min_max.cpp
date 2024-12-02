#include<iostream>
using namespace std;


int min_max(int arr[],int n){
	int max;
	int min;
	for(int i=0;i<n;i++){
		
		if(arr[i]<arr[i+1]){
			max = arr[i+1];
		}
		else{
			max = arr[i];
		}
		
		if(arr[i]<arr[i+1]){
			 min = arr[i];
		}
		else{
			min = arr[i+1];
		}
		
	}
	cout<<max;
	return min;
}


int main(){
	
	int result;
	int arr[10] = {20,87,98,33,55,26,87,57,45,54};
	
	result = min_max(arr,10);
	cout<<result;
}