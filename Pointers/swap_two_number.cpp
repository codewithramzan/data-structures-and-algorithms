#include<iostream>
#include<vector>
using namespace std;

void swapNumbers(int* a, int* b) {
  // int temp = *a;
  // *a = *b;
  // *b = temp;
  swap(*a, *b);
}

int main() {
int a = 10;
int b = 30;
swapNumbers(&a, &b);
cout<<a<<endl;
cout<<b;
  return 0;
}