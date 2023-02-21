#include<iostream>
#include<vector>
using namespace std;
// leetcode part
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] > 0 and nums[i] < n){
                swap(nums[i], nums[nums[i]]);
                if(nums[i] == nums[nums[i]]) i++;
            }else{
                i++;
            }
        }
        for(int i = 1; i < n; i++){
            if(i != nums[i]) return i;
        }
        return nums[0] == n ? n+1 : n;
    }
};
// leetcode part
int main(){
    vector<int> v;
    v.push_back(7);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    Solution s;
    cout<<s.firstMissingPositive(v)<<endl;
    return 0;
}