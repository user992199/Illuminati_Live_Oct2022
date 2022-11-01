#include<iostream>
using namespace std;
int main(){
	// int a = 95;
	// // if is compulsory
	// if(a>90){
	// 	// a = a + 10;
	// 	cout<<"Grade A\n";
	// 	// cout<<"Very Good\n";
	// 	// cout<<"Keep it Up\n";
	// 	// cout<<"Updated Marks:"<<a<<endl;
	// }
	// // else if are not compulsory
	// else if(a>80){
	// 	cout<<"Grade B\n";
	// }
	// else if(a>70){
	// 	cout<<"Grade C\n";
	// }
	// else if(a>60){
	// 	cout<<"Grade D\n";
	// }
	// else if(a>50){
	// 	cout<<"Grade E\n";
	// }
	// // else is also not compulsory
	// else{
	// 	cout<<"Grade F\n";
	// }
	/* 
	if(condition 1){
		task 1
	}
	else if(condition 2){
		task 2
	}
	else if(condition 3){
		task 3
	}
	else{
		task 4
	}
	*/
	// int b = -5;
	// 	   zero -> false
	// non zero -> true
	// if(b > 0){
	// 	cout<<"will not go into this block\n";
	// }

	// int a = 10, b = 10, c = 1;
	// // and == &&
	// if( a > 50 && b > 50 && c > 50 ){
	// 	cout<<"Pass\n";
	// }
	// // or == ||
	// else if ( a > 50 || b > 50 or c > 50 ) {
	// 	cout<<"Try again\n";
	// }
	// else{
	// 	cout<<"Bye bye\n";
	// }

	// int d = -10;
	// if(  ! (d == 0) ){
	// 	cout<<"Hello\n";
	// }

	// nested if
	int a = 8;
	if(a > 0){
		if(a > 5){
			// if(a==10){
			// 	cout<<"ten\n";
			// }
			// else{
			// 	cout<<"greater than 5\n";
			// }
			cout<<"greater than 5\n";
		}
		else{
			cout<<"greater than 0\n";
		}
	}
	else{
		cout<<"less than 0\n";
	}

	return 0;
}