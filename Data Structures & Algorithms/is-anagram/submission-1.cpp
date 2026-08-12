auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string& s, string& t) {
        if(s.length()-t.length()) return false;

        int counts[26] = {0};
        for(char c: s){
            counts[c - 'a']++;
        }
        for(char c: t){
            counts[c - 'a']--;
        }
        for(int c: counts){
            if(c) return false;
        }
        return true;
    }
};
