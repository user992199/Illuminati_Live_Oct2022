#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype identifier[no of bucket];
	int arr[5];
	arr[2] = 10;
	arr[4] = -209;
	arr[1] = 18;


	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	for(int i = 0; i < 5; i++){
		if(i == 1 or i == 2 or i == 4){
			int temp;
			cin>>temp;
			continue;
		}
		cin>>arr[i];
	}

	for(int i = 0; i < 5; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}