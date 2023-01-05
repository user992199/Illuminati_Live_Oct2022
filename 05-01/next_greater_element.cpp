#include<iostream>
#include<stack>
using namespace std;
void print(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"\t";
	}cout<<endl;
}
void find_next_greater_element(int arr[], int * ng, int n){
	stack<int> s;
	for(int i = 0; i < n; i++){
		// check kara ki numbers decreasing order mein hain ya nahi
		// agar decreasing order mein hai to push kardo
		if(s.empty() or arr[i] <= arr[s.top()]){
			s.push(i);
		}
		// agar current number, last number se bada hai to,
		// stack ke top par wo saare numbers,
		// jo current number se chote hain, unke next greater ko 
		// current number set kardo, aur fir uss number ko stack
		// se pop kardo.
		// last mein current number ko bhi stack mein push kardo
		else if(arr[i] > arr[s.top()]){
			int cn = arr[i];
			while(!s.empty() and cn > arr[s.top()]){
				ng[s.top()] = arr[i];
				s.pop();
			}
			s.push(i);
		}
	}
	// stack mein jitne bhi numbers bacche hain sabke 
	// next greater ko "-1" set karke, unhe pop kardo
	while(!s.empty()){
		ng[s.top()] = -1;
		s.pop();
	}
}
int main(){
	int arr[] = {7, 4, 2, 5, 9, 4, 3, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	int * ng = new int[n];
	find_next_greater_element(arr, ng, n);
	print(arr, n);
	print(ng, n);
	return 0;
}