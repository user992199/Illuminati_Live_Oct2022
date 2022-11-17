#include<iostream>
using namespace std;
void update(int *ip){
	*ip -= 10;
}
int main(){
	int i = 10;
	update(&i);
	cout<<i<<endl;
	return 0;
}