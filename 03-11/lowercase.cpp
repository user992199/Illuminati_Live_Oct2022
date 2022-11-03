#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<(int)'a'<<endl;
	cin>>ch;
	if(islower(ch)){
		cout<<"lowercase\n";
	}
	else if(isupper(ch)){
		cout<<"UPPERCASE\n";
	}
	return 0;
}