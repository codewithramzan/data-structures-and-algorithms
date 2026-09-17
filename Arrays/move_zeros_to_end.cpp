#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void moveZeros(vector<int>& arr) {
	int st = 0, end = arr.size() -1;
	while (st <= end)
	{
	 
		if(arr[st] == 0 && arr[end] != 0){
			swap(arr[st], arr[end]);
			st++;
			end--;
		}else if(arr[end] == 0) {
			end--;
		} else{
			st++;
		}
	}
}

int main() {
		vector<int> arr = {0,1,0,3,13};
		 moveZeros(arr);
    for (int i = 0; i < arr.size(); i++)
		{
			cout<<arr[i]<< " ";
		}
		
		return 0;
}
