#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
int edit_distance(string s1, string s2, int m, int n){
	// base case
	if(m == 0) return n;
	if(n == 0) return m;
	// recursive case
	if(s1[m-1] != s2[n-1]){
		// explore all options
		// add
		int op1 = edit_distance(s1, s2, m, n-1);
		// delete
		int op2 = edit_distance(s1, s2, m-1, n);
		// update
		int op3 = edit_distance(s1, s2, m-1, n-1);
		return min(op1, min(op2, op3))+1;
	}else{
		return edit_distance(s1, s2, m-1, n-1);
	}
}
int ed_td(string s1, string s2, int m, int n, vector<vector<int> > &v){
	if(v[m][n] != -1) return v[m][n];
	// base case
	if(m == 0) return v[m][n] = n;
	if(n == 0) return v[m][n] = m;
	// recursive case
	if(s1[m-1] != s2[n-1]){
		return v[m][n] = min(ed_td(s1, s2, m, n-1, v),
						 min(ed_td(s1, s2, m-1, n, v),
						  ed_td(s1, s2, m-1, n-1, v)))+1;
	}else{
		return v[m][n] = ed_td(s1, s2, m-1, n-1, v);
	}
}
int ed_bu(string s1, string s2){
	int m = s1.size();
	int n = s2.size();
	vector< vector<int> > v(m+1, vector<int> (n+1, 0));

	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0)
				v[i][j] = j;
			else if(j == 0)
				v[i][j] = i;
			else{
				if(s1[i] == s2[j])
					v[i][j] = v[i-1][j-1];
				else{
					v[i][j] = min(
								v[i-1][j], min(
								v[i][j-1],
								v[i-1][j-1])
						) + 1;
				}
			}
		}
	}
	return v[m][n];
}
int main(){
	// string s1 = "Thursday", s2 = "Tuesday";
	// for(int i = 0; i < 1000; i++){
	// 	s1 += ('a' + (i%26));
	// 	s2 += ('a' + (100-i)%26);
	// }
	// cout<<s1<<endl;
	string s1 = "Sunday", s2 = "Saturday";
	vector<vector<int> > v(s1.size() + 1, vector<int> (s2.size()+1, -1));
	cout<<ed_td(s1, s2, s1.size(), s2.size(), v)<<endl;
	cout<<ed_bu(s1, s2)<<endl;
	return 0;
}