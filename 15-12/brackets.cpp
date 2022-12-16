#include<iostream>
using namespace std;
void generate_brackets(int n, int o, int c, char out[], int i, int &sn){
	// base case
	if(i == n*2){ // o == n and c == n
		sn++;
		out[i] = '\0';
		// cout<<"#"<<++sn<<" -> "<<out<<endl;
		return;
	}
	// recursive case
	if(o < n){
		out[i] = '(';
		generate_brackets(n, o+1, c, out, i+1, sn);
	}
	if(c < o){
		out[i] = ')';
		generate_brackets(n, o, c+1, out, i+1, sn);
	}
}
int main(){
	int n = 20, sn = 0;
	char out[1000] = "";
	generate_brackets(n, 0, 0, out, 0, sn);
	for(int i = 0; i < n; i++){
		sn = 0;
		generate_brackets(i, 0, 0, out, 0, sn);
		cout<<sn<<" ";
	}
	cout<<endl;
	// cout<<sn<<endl;
	return 0;
}