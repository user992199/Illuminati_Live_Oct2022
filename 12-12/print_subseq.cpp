#include<iostream>
using namespace std;
void print_subseq(char *in, int i, char *out, int j){
	// base case
	if(in[i] == '\0'){
		out[j] = '\0';
		cout<<out<<endl;
		return;
	}
	// recursive case
	print_subseq(in, i+1, out, j);
	out[j] = in[i];
	print_subseq(in, i+1, out, j+1);
}
int main(){
	// char in[] = "abcde";
	char in[10000]; cin.getline(in, 1000);
	char out[10000] = "";
	int i = 0, j = 0;
	print_subseq(in, i, out, j);
	return 0;
}