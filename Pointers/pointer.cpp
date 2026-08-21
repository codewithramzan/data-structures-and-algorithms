#include<iostream>

using namespace std;

void changeX(int* a){
	*a = 39;
}

int main() {
	// int a = 10;
	// int* ptr = &a;
	// int** parPtr = &ptr;
	// cout<<&a << endl;
	// cout<< ptr <<endl;
	// cout<< parPtr <<endl;
	// cout<< *parPtr <<endl;
	// cout<< *ptr <<endl;
	// cout<< **parPtr <<endl;
	int x = 10 ;
	int* ptr = &x;
	cout<<x<<endl;

	changeX(ptr);
	cout<<x;
	int arr[] = {34,45,56,67};
	cout<< arr <<endl;
	cout<<*(arr+3);
}