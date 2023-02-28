class Solution {
public:
    string reorganizeString(string s) {
        vector<int> fv(26);
        for(int i = 0; i < s.size(); i++){
            fv[s[i]-'a']++;
        }
        priority_queue<pair<int, char> >fq;
        for(int i = 0; i < 26; i++){
            if(fv[i] > 0)
                fq.push(make_pair(fv[i], char(i+'a')));
        }
        s = "";
        while(fq.size() > 1){
            auto char_one = fq.top();
            fq.pop();
            auto char_two = fq.top();
            fq.pop();
            s += char_one.second;
            s += char_two.second;
            char_one.first--; 
            char_two.first--;
            if(char_one.first > 0){
                fq.push(char_one);
            }
            if(char_two.first > 0){
                fq.push(char_two);
            }
        }
        if(!fq.empty())
            return fq.top().first > 1 ? "" : s+fq.top().second;
        return s;
    }
};