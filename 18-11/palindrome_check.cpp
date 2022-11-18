#include<iostream>
using namespace std;
int length_of_string(char *arr){
	int i = 0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}
bool palindrome_check(char *arr){
	int n = length_of_string(arr);
	int i = 0, j = n-1;
	while(i<j){
		if(arr[i++] != arr[j--]){
			return false;
		}
	}
	return true;
}
int main(){
	char arr[10000];
	int n;
	cin>>n;
	cin.get();
	cin.getline(arr, n+1);
	cout<<arr<<endl;
	if(palindrome_check(arr)){
		cout<<"Yes, "<<arr<<" is a palindrome.\n";
	}else{
		cout<<"No, "<<arr<<" is not a palindrome.\n";
	}
	return 0;
}