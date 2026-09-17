#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void reverseArray(vector<int> &arr){
  int st=0, end=arr.size()-1;
  while (st < end)
  {
    swap(arr[st], arr[end]);
    st++;
    end--;
  }
  
}

int main() {
    vector<int> arr = {10, 5, 8, 15, 20};
   reverseArray(arr);
   for(int i=0; i< arr.size(); i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}
