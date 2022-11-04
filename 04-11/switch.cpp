#include<iostream>
using namespace std;
int main(){
	/* 
	syntax:
	switch(identifier){
	
	}
	*/
	char grade;
	cin>>grade;
	switch(grade){
		case 'a':
		case 'A':
			cout<<"0-20\n";
			break;
		case 'b':
		case 'B':
			cout<<"21-40\n";
			break;
		case 'c':
		case 'C':
			cout<<"41-60\n";
			break;
		case 'd':
		case 'D':
			cout<<"61-80\n";
			break;
		case 'e':
		case 'E':
			cout<<"81-100\n";
			break;
		default:
			cout<<"Invalid Grade\n";
			break;
	}
	return 0;
}