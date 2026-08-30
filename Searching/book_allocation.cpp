#include<iostream>
#include<vector>
using namespace std;


bool isValid(vector<int>& books, int m, int n, int maxAllowedPages){
	int student = 1, pages = 0;
	for(int i = 0; i<n; i++){
			if(books[i] > maxAllowedPages){
				return false;
			}

			if(books[i] + pages <= maxAllowedPages){
				pages += books[i];
			} else{
				student++;
				pages = books[i];
			}
	}

	return m == student ? true : false;
}
int allocatBooks(vector<int>& books, int m) {
	int n = books.size();
	if(m > n) {
		return -1;
	}
	 int sum = 0 ;
	for(int i = 0; i<n; i++){
		sum += books[i];
	}
	int ans = -1;
	int st = 0, end = sum;
	while (st <= end) 
	{
		int mid = st + (end - st)/2;
		if(isValid(books,m,n,mid)){//valid
			 ans = mid;
			end = mid - 1;
		} else {
			st = mid+1;
		}
	}
	
	return ans;
}


int main() {
	vector<int> books = {20,25,30,34};
	int m = 5;
  cout << allocatBooks(books, m);
	return 0;
}