#include<iostream>
using namespace std;
int main(){
	int arr[] = {12, 43, 563, 234, 3564,2, 34, 45345, -56, 43, -345, 543};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 3, i;
	bool element_found = false;
	for(i = 0; i < n; i++){ // i = 12 ; i < n; 12 < 12
		if(arr[i] == key){ // arr[i] == key; 543 == 0
			cout<<i<<endl;
			element_found = true;
			break;
		}
	}
	if(element_found == false){
		cout<<-1<<endl;
	}
	return 0;
}