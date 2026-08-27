#include<iostream>
#include<vector>
using namespace std;

bool searchRotateArray(vector<int> arr, int tar){
	int st=0, end= arr.size()-1;
	
	while (st <= end)
	{
		int mid = st + (end-st)/2;
		if(arr[mid] == tar) return true;
    
    if(arr[st] == arr[mid] && arr[mid] == arr[end]){
      st++;
      end--;
    }
		else if(arr[st] <= arr[mid]) {//left sorted
			if(arr[st] <= tar && tar <= arr[mid]){ 
				//search left
				end = mid -1;
			} else {
				//search Right
				st = mid+1;
			}

		} else{ //Right sorted
			if(arr[mid] <= tar && tar <= arr[end]) {
				//search Right
				st =  mid+1;
			}else{
				//search left
				end = mid - 1;
			}

		}

	}
	
return false;
}

int main() {
 vector<int> arr = {1,0,1,1,1};
 cout << searchRotateArray(arr, 0);
	return 0;
}