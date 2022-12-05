#include<iostream>
using namespace std;
void print(int a[], int n){
	for(int i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
void m2sa(int a1[], int m, int n){
	int i = 0, j = m, k = 0;
	int t[m+n];
	while(i < m and j < m+n){
		if(a1[i] < a1[j])
			t[k++] = a1[i++];
		else
			t[k++] = a1[j++];
	}
	while(i < m)
		t[k++] = a1[i++];
	while(j < m+n)
		t[k++] = a1[j++];
	for(k = 0; k < m+n; k++)
		a1[k] = t[k];
}
int main(){
	int m = 10, n = 6;
	int a1[m+n];
	for(int i = 0; i < m; i++){
		a1[i] = i*2;
	}
	for(int i = m; i < m+n; i++){
		a1[i] = (i-m)*2+1;
	}
	print(a1, m+n);
	m2sa(a1, m, n);
	print(a1, m+n);
	return 0;
}