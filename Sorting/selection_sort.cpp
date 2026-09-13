#include<iostream>
using namespace std;

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