#include<iostream>
using namespace std;
int main(){
	int arr[5] = {0};
	int *p[5] = {&arr};
	cout<<p<<endl;
	cout<<p+1<<endl;
	return 0;
}