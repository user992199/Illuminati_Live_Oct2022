#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	int i = 0;
	while(ch != '$'){
		i++;
		// cin>>ch;
		cin.get(ch);
	}
	cout<<i<<endl;
	return 0;
}