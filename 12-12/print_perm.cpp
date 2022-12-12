#include<iostream>
using namespace std;
void print_perm(char *s, int i){
	// base case
	if(s[i] == '\0'){
		cout<<s<<endl;
		return;
	}
	// recursive case
	for(int j = i; s[j] != '\0'; j++){
		if(s[i] == s[j] and i != j) continue;
		swap(s[i], s[j]); // to make a new permutation
		print_perm(s, i+1);
		swap(s[i], s[j]); // to backtrack
	}
}
int main(){
	char arr[] = "deed";
	print_perm(arr, 0);
	return 0;
}