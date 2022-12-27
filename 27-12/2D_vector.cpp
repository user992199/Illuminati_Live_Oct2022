#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector < vector <int> > v(5, vector<int>(3, 7));
	// cout<<v[0][0]<<endl;
	v[1].push_back(19);
	v[1].push_back(54);
	v[3].push_back(118);
	v[0].pop_back();
	vector <int> v2(6, -1);
	v.push_back(v2);
	v2[0] = 0;
	
	for(int i = 0; i < v.size(); i++){
		cout<<"row "<<i+1<<":- ";
		for(int j = 0; j < v[i].size(); j++){
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}cout<<endl;
	// cout<<v[0][0]<<endl;
	return 0;
}