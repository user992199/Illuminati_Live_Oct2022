#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int min_cost(int * arr, int n){
	priority_queue<int, vector<int>, greater<int> > mh;
	for(int i = 0; i < n; i++)
		mh.push(arr[i]);
	int tc = 0;
	while(mh.size() > 1){
		int f = mh.top(); mh.pop();
		int s = mh.top(); mh.pop();
		int cc = f+s;
		tc += cc;
		mh.push(cc);
	}
	return tc;
}
int main(){
	int arr[] = {2, 1, 6, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<min_cost(arr, n)<<endl;
	return 0;
}