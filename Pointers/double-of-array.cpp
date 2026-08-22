#include<iostream>
using namespace std;

int modifyArray(int* ptr, int n) {
	 for(int i = 0; i<n; i++) {
		*ptr *= 2;
		 cout<<*ptr<<" ";
		 ptr++;
	 }
}

int main() {
int arr[] = {1, 2, 3, 4, 5};
int n = sizeof(arr)/ sizeof(arr[0]);
modifyArray(arr, n);
	return 0;
}