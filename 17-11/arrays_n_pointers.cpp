#include<iostream>
using namespace std;
void update(int *arr){
	int n = sizeof(arr)/sizeof(int);
	int i;
	for(i = 0; i < 4; i++){
		arr[i] += i;
	}
	arr = &i;
	cout<<"inside update: "<<arr[0]<<endl;
}
int main(){
	int arr[] = {-5, 16, 71, 810};
	// cout<<arr<<endl;
	// cout<<&arr[0]<<endl;
	// cout<<*arr<<endl;
	// cout<<*(arr+2)<<endl;
	int a = 10;
	// arr = &a;
	update(arr);
	for(int i = 0; i < 4; i++){
		cout<<arr[i]<<" "<<*(arr+i)<<endl;
		// cout<<&arr[i]<<" "<<arr+i<<endl;
	}
	return 0;
}