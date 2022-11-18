#include<iostream>
using namespace std;
int length_of_string(char *arr){
	int i = 0;
	while(arr[i] != '\0'){
		i++;
	}
	return i;
}
void append(char *a, char * b){
	int an = length_of_string(a);
	int bn = length_of_string(b);
	for(int i = 0, j = an; i <= bn; i++, j++){
		a[j] = b[i];
	}
}
int main(){
	int n = 10000;
	char a[n];
	char b[n];
	cin.getline(a, n);
	cin.getline(b, n);
	append(a, b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}