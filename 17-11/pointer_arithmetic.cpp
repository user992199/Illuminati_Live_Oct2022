#include<iostream>
using namespace std;
int main(){
	int i1[] = {1, 2, 3, 4};
	int *ip1 = &i1[0], *ip2 = &i1[3];
	cout<<ip2-ip1<<endl;
	return 0;
}