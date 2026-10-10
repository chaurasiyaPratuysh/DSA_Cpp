
class Solution {
private:
    bool isPalindrom(string s, int start, int end) {
        while(start < end) {
            if(s[start] == s[end]) {
                start++;
                end--;
            }
            else {
                return false;
            }
        }
        return true;
    }

public:
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end) {
            if(s[start] == s[end]) {
                start++;
                end--;
            }
            else {
                return isPalindrom(s, start+1, end)
                    || isPalindrom(s, start, end-1);
            }
        }
        return true;
    }
};
