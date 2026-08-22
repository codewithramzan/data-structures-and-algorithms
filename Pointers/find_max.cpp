#include<iostream>
#include<vector>
using namespace std;

int findMax(int* ptr, int n) {
  int maxVal = *ptr;
  for(int i = 1; i < n; i++){
    ptr++;
    if(*ptr > maxVal) {
      maxVal = *ptr;
    }
  }

   return maxVal;
}

int main() {
int arr[] = {4, 7, 2, 9, 5};
int n =sizeof(arr)/sizeof(arr[0]);
int res = findMax(arr, n);
cout<< res;
  return 0;
}