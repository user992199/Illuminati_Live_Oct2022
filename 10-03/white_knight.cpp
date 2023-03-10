#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
void find_knight(int &x, int &y, int &n, vector<string> &vec){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(vec[i][j] == 'K'){
				x = i;
				y = j;
				return;
			}
		}
	}
}
int capture_pawns(int x, int y, int &n, vector<string> &vec, vector<vector<int> > & dp){
	if(x < 0 or x >= n or y >= n) return 0;
	if(dp[x][y] != -1) return dp[x][y];
	int ans = 0;
	if(vec[x][y] == 'P') ans++;
	int c1 = capture_pawns(x-2, y+1, n, vec, dp);
	int c2 = capture_pawns(x-1, y+2, n, vec, dp);
	int c3 = capture_pawns(x+1, y+2, n, vec, dp);
	int c4 = capture_pawns(x+2, y+1, n, vec, dp);
	// ans += max({c1,c2, c3, c4});
	ans += max(c1, max(c2, max(c3, c4)));
	return dp[x][y] = ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> vec;
		for(int i = 0; i < n; i++){
			string temp;
			cin>>temp;
			vec.push_back(temp);
		}
		int x, y;
		find_knight(x, y, n, vec);
		vector<vector<int> > dp(n, vector<int> (n, -1));
		cout<<capture_pawns(x, y, n, vec, dp)<<endl;
	}
	return 0;
}
