#include<iostream>
#include<vector>
using namespace std;
		int singleNonDuplicate(vector<int> &arr) {
			int n = arr.size();
			if(n == 0) return arr[0];
			int st = 0, end = n - 1;
      
			while(st <= end){
				int mid = st + (end - st)/2;

				if(mid == 0 && arr[0] != arr[1])
				return arr[mid];
				if(mid == n - 1 && arr[n-1] != arr[n -  2]) return arr[mid];

				if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1] ) return arr[mid];

				
            if(mid % 2 == 0){ //even
              if(arr[mid - 1] == arr[mid]){//left search
                end = mid - 1;
              } else{//Right
                st = mid + 1;
              }

            } else {//odd
                if(arr[mid - 1] == arr[mid]){ //Right
                  st = mid + 1;
                } else {//left
                    end = mid - 1;
                }
            }

			}
			return -1;
		}
int main() {
  vector<int> arr = {3,3,7,7,10,11,11};
	cout << singleNonDuplicate(arr);
	return 0;
}