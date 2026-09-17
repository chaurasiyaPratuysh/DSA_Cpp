class Solution {
public:
    string replaceDigits(string s) {
        string temp="";
        for(int i=0; i<s.length(); i++)
        {
          if(s[i]>='0' && s[i]<='9' ){
            temp.push_back(s[i-1] + s[i]-'0');
          }
          else
          {
              temp.push_back(s[i]);
          }
        }
        return temp;
    }
};
