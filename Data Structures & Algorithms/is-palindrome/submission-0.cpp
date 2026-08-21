class Solution {
public:
    bool isPalindrome(string& s) 
    {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {return !isalnum(c);}),s.end());

        for (char& c : s) 
        {
            c = tolower(c);
        }
        string y = s;
        reverse(s.begin(), s.end());
        return s == y;
    }
};
