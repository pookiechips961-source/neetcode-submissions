auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans = "";

        for(int i = 0; i < strs[0].length(); i++)
        {
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[0][i] != strs[j][i])
                {
                    return ans;
                }
            }
            ans += strs[0][i];
            cout<<ans<<"\n";
        }
        cout<<ans;
        return ans;
    }
};