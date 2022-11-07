#include<iostream>
using namespace std;

// forward declaration
// syntax
// return_type identifier(parameter);

// declaration
void print_hello();
void print_world();
int add_2_numbers(int, int, int);

int main(){
	print_hello();
	cout<<add_2_numbers(10, 100, 1000)<<endl;
	return 0;
}

// definition
void print_hello(){
	cout<<"hello ";
	print_world();
}
void print_world(){
	cout<<"world\n";
}
int add_2_numbers(int num1, int num2, int num3){
	cout<<num1<<" + "<<num2<<" + "<<num3<<" => ";
	return num1 + num2 + num3;
}