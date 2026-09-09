#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++) {
		bool isSwap = false;
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				isSwap = true;
			}
		}
		if(!isSwap){
			return;
		}
	}

}


void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++) {
		int smallestIdx = i;
		for(int j= i+1; j < n-1; j++){
			if(arr[j] < arr[smallestIdx]){
				smallestIdx =j;
			}
		}
		swap(arr[i], arr[smallestIdx]);
	}
}
void printArray(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main() {
int arr[] = {5,3,9,6,4,7,8,1};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr, n);
printArray(arr,n);
	return 0;
}