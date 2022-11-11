#include<iostream>
using namespace std;
bool can_read_mid_pages(int arr[], int n, int m, int mid){
	int cp = 0, cs = 1;
	for(int i = 0; i < n; i++){
		cout<<"i: "<<i<<endl;
		cout<<"mid: "<<mid<<"\n"<<"cp+arr[i]: "<<cp+arr[i]<<endl;
		if(cp + arr[i] <= mid){
			cout<<"Inside If\n\n";
			cp += arr[i];
		}
		else{
			cout<<"Inside Else\n\n";
			cs++;
			cp = arr[i];
		}

		if(cs > m){
			cout<<"Ending: False\n\n************\n\n";
			return false;
		}
	}
	cout<<"Ending: True\n\n************\n\n";
	return true;
}
int book_alloc(int arr[], int n, int m){
	int s = arr[n-1], e = 0;
	for(int i = 0; i < n; i++){
		e += arr[i];
	}
	int ans = e;
	while(s <= e){ // s = 55 -> 61
		int mid = (s+e)/2;
		// cout<<s<<" "<<mid<<" "<<e<<endl;
		if(can_read_mid_pages(arr, n, m, mid)){
			ans = mid;
			e = mid - 1;
		}else{
			s = mid + 1;
		}
	}
	return ans;
}
int main(){
	int n = 10, m = 4;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout<<book_alloc(arr, n, m)<<endl;
	return 0;
}