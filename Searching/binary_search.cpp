#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int> arr, int target){
	int st= 0, end = arr.size() - 1;
	int mid = st + (end - st)/2;

	while (st <= end)
	{
		if(target < arr[mid]){//LEFT HALF
			 end = mid - 1;
		}else if (target > arr[mid]){//RIGHT HALF
			 st = mid + 1;
		} else{
			return mid;
		}
	}
	
	return -1;
}
int main() {
vector<int> nums = {-1,0,1,3,4,6,7,9};

cout << binarySearch(nums, 9);
	return 0;
}