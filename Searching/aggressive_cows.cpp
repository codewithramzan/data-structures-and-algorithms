#include<iostream>
#include<algorithm>

#include<vector>

using namespace std;
bool isPossible(vector<int>& arr, int N, int c, int minAllowedDist) {
    int cows = 1;
    int lastStallPos = arr[0];

    for(int i = 1; i < N; i++) {
        if(arr[i] - lastStallPos >= minAllowedDist) {
            cows++;
            lastStallPos = arr[i];
        }

        if(cows == c) {
            return true;
        }
    }

    return false;
}
int getsDistance(vector<int>& arr, int N, int c) {
	sort(arr.begin(), arr.end());
	int st = 1, end = arr[N-1] - arr[0],ans=-1;
	while(st <= end){
		int mid = st + (end - st)/2;
		if(isPossible(arr,N,c,mid)){
			ans = mid;
			st = mid+1;
		} else {
			end = mid-1;
		}
	}

		return ans;
}
int main() {
 vector<int> Stalls = {1,2, 8, 4,9};
 int c = 3;
 int N = Stalls.size();
cout<<getsDistance(Stalls,N,c);

	return 0;
}