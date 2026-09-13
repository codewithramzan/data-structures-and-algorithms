#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
  for(int i=1; i<n; i++){
    int cur=arr[i];
    int prev = i-1;
    while (prev >= 0 && arr[prev] > cur)
    {
      arr[prev + 1] = arr[prev];
      prev--;
    }

    arr[prev + 1] = cur;
    
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
insertionSort(arr, n);
printArray(arr, n);

  return 0;
}