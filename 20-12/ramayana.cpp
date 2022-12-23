#include<bits/stdc++.h> 
using namespace std; 
bool sol_valid(long long n, long long m, long long mid){
    // long long k2 = mid - m - 1;
    // if(mid == 14){
    //     cout<<n<<" "<<
    // }
    // if(k2 < 0) return n <= mid;
    long long int ram = n;
    long long int ravan = mid*(mid+1)/2;
    // cout<<ravan<<endl;
    return ram <= ravan + m;
}
long long int bin_sea(long long n, long long m){
    if (n <= m) return n;
    long long s = 0, e = INT_MAX, ans = -1;
    while(s<=e){
        long long mid = (s+e)/2;
        if(sol_valid(n, m, mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return ans + m;
}
int main(){ 
    long long int n, m;
    cin>>n>>m;
    cout<<bin_sea(n, m)<<endl;
    return 0;
}