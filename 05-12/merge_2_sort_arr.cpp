#include<iostream>
using namespace std;
void print(int a[], int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void m2sa(int a1[], int m, int a2[], int n){
	int i = 0, j = 0, k = 0;
	int t[m+n];
	while(i < m and j < n){
		if(a1[i] < a2[j])
			t[k++] = a1[i++];
		else
			t[k++] = a2[j++];
	}
	while(i < m)
		t[k++] = a1[i++];
	while(j < n)
		t[k++] = a2[j++];
	for(k = 0; k < m+n; k++)
		a1[k] = t[k];
}
int main(){
	int m = 10, n = 6;
	int a1[m+n];
	for(int i = 0; i < m; i++){
		a1[i] = i*2;
	}
	int a2[n];
	for(int i = 0; i < n; i++){
		a2[i] = i*2+1;
	}
	print(a1, m+n);
	print(a2, n);
	m2sa(a1, m, a2, n);
	print(a1, m+n);
	return 0;
}