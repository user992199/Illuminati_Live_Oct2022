#include<iostream>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n ; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
void m2sa(int a1[], int s, int e){
	int m = (s+e)/2;
	int i = s, j = m+1, k = s;
	int t[1000000];
	while(i <= m and j <= e){
		if(a1[i] < a1[j])
			t[k++] = a1[i++];
		else
			t[k++] = a1[j++];
	}
	while(i <= m)
		t[k++] = a1[i++];
	while(j <= e)
		t[k++] = a1[j++];
	for(k = s; k <= e; k++)
		a1[k] = t[k];
}
void merge_sort(int arr[], int s, int e){
	// base case
	if(s>=e) return;
	// recursive case
	int m = (s+e)/2; // division step
	merge_sort(arr, s, m); // sorting steps
	merge_sort(arr, m+1, e); // sorting steps
	m2sa(arr, s, e);
}
int main(){
	// int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	// int n = sizeof(arr)/sizeof(arr[0]);
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin>>arr[i];
	print(arr, n);
	merge_sort(arr, 0, n-1);
	print(arr, n);
	return 0;
}