#include<iostream>
using namespace std;
// syntax for function definition 
// return_type identifier(parameters){
	// task
	// return return_type;
//}

void print_world(){
	cout<<"world\n";
}

void print_hello(){
	cout<<"hello ";
	print_world();
}

int add_2_numbers(int num1, int num2, int num3){
	cout<<num1<<" + "<<num2<<" + "<<num3<<" => ";
	return num1 + num2 + num3;
}

int main(){
	// syntax for invoking or calling a function
	// print_hello();
	int num1 = 10, num2 = 9, num3 = -7;
	cout<<add_2_numbers(num3 = 100, num1, num2)<<endl;
	cout<<num3<<endl;
	return 0;
}

