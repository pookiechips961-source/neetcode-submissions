auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool isAnagram(string& s, string& t) {
        if(s.length()-t.length()) return false;

        unordered_map<char, int> freqmap;

        for(char c: s)
        {
            freqmap[c]++;
        }
        for(char c: t)
        {
            if(!freqmap[c]) return false;
            freqmap[c]--;
        }

        return true;



    }
};
