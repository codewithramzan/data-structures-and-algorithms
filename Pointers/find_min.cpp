#include<iostream>
#include<vector>
using namespace std;

int findMax(int* ptr, int n) {
  int minVal = *ptr;
  for(int i = 1; i < n; i++){
    ptr++;
    if(*ptr < minVal) {
      minVal = *ptr;
    }
  }

   return minVal;
}

int main() {
int arr[] = {8, 3, 10, 2, 7};
int n =sizeof(arr)/sizeof(arr[0]);
int res = findMax(arr, n);
cout<< res;
  return 0;
}