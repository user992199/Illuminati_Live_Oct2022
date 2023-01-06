#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
// ----------- LEETCODE ----------- //
#include<stack>
class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        stack<int> s;
        vector<int> ps(n), ns(n);
        for(int i = 0; i < n; i++){
            while(!s.empty() and h[i] <= h[s.top()]){
                s.pop();
            }
            if(!s.empty() and h[i] > h[s.top()]){
                ps[i] = s.top();
            }else{
                ps[i] = -1;
            }
            s.push(i);
        }
        for(int i = 0; i < n; i++){
            cout<<ps[i]<<" ";
        }cout<<endl;
        while(!s.empty()) s.pop();
        for(int i = n-1; i >= 0; i--){
            while(!s.empty() and h[i] <= h[s.top()]){
                s.pop();
            }
            if(!s.empty() and h[i] > h[s.top()]){
                ns[i] = s.top();
            }else{
                ns[i] = n;
            }
            s.push(i);
        }
        for(int i = 0; i < n; i++){
            cout<<ns[i]<<" ";
        }cout<<endl;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long curr_area = (ns[i] - ps[i] - 1) * h[i];
            ans = max(ans, curr_area);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<s.largestRectangleArea(v)<<endl;
    return 0;
}
