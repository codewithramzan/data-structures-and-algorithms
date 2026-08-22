#include<iostream>
#include<vector>
using namespace std;

void reverseArray(int* start, int* end){
  while (start < end)
  {
    swap(*start, *end);
    start++;
    end--;
  }

}

int main() {
int arr[] = {10, 20, 30, 40, 50};
int* ptr = arr;
reverseArray(arr, arr+4);
  for(int i = 0; i<5; i++){
    cout<<*ptr<<endl;
    ptr++;
  }
  
  return 0;
}