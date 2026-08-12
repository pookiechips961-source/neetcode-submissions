auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string& s, string& t) {
        if(s.length()-t.length()) return false;

        vector<int> freq(26);

        for(char c: s)
        {
            freq[c - 'a']++;
        }
        for(char c: t)
        {
            if(!freq[c - 'a']) return false;
            freq[c - 'a']--;
        }

        return true;

    }
};
