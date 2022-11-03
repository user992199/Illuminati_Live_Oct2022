#include<iostream>
using namespace std;

int main(){
	int i = 0; // initialization
	while(i < 10){ // condition check
		if(i == 5){
			i = i + 1;
			continue;
		}
		cout<<i<<" ";
		i = i+1; // updation
	}
	cout<<endl;
	return 0;
}

// 0 1 2 3 4
// 0 1 2 3 4 6 7 8 9