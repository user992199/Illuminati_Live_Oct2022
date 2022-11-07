#include<iostream>
using namespace std;

void far_to_cel_table(int i, int f, int s){
	int cel;
	for(; ;i += s){
		if(i>f){
			return;
		}
		cel = (5/9.0)*(i-32);
		cout<<i<<" "<<cel<<endl;
	}

}

int main(){
	int init, fval, step;
	cin>>init>>fval>>step;
	far_to_cel_table(init, fval, step);
	// cin>>init>>fval>>step;
	// far_to_cel_table(init, fval, step);
	// cin>>init>>fval>>step;
	// far_to_cel_table(init, fval, step);
	return 0;
}