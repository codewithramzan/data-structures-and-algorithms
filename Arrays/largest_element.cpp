#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findLargest(vector<int> arr) {
  int largest = INT_MIN;
  int n=arr.size();
  for(int i=0; i<n; i++){
    largest = max(largest, arr[i]);
  }


  return largest;
}

int main(){
 vector<int> arr = {10,5,8,15,20};
 cout<<findLargest(arr);

  return 0;
}