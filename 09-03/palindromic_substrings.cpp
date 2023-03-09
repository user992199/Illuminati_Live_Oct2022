class Solution {
public:
    int countSubstrings(string str) {
        int n = str.size();
        if(n < 2) return n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int s = i, e = i;
            while(s >= 0 and e < n and str[s] == str[e]){
                s--; e++;
                ans++;
            }
            s = i, e = i+1;
            while(s >= 0 and e < n and str[s] == str[e]){
                s--; e++;
                ans++;
            }
        }
        return ans;
    }
};