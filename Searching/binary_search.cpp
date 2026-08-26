#include<iostream>
#include<vector>

using namespace std;

// int binarySearch(vector<int> arr, int target){
// 	int st= 0, end = arr.size() - 1;
// 	int mid = st + (end - st)/2;

// 	while (st <= end)
// 	{
// 		if(target < arr[mid]){//LEFT HALF
// 			 end = mid - 1;
// 		}else if (target > arr[mid]){//RIGHT HALF
// 			 st = mid + 1;
// 		} else{
// 			return mid;
// 		}
// 	}
	
// 	return -1;
// }
int binarySearch(vector<int> arr, int tar, int st, int end) {
	int mid = st + (end - st)/2;
	if(st <= end) {
		if(tar > arr[mid]){
			return binarySearch(arr,tar,mid+1, end);
		} else if(tar < arr[mid]){
			return binarySearch(arr, tar, st, mid-1);
		} else {
			return mid;
		}
	}

	return -1;
}
int main() {
vector<int> nums = {-1,0,1,3,4,6,7,9};

cout << binarySearch(nums, 67, 0, nums.size()-1);
	return 0;
}