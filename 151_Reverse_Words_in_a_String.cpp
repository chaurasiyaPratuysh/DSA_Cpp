class Solution {
public:
    string reverseWords(string s) {
       reverse(s.begin(),s.end());
       int i=0;
       int start=0; 
       int end=0;
       int n=s.size();
       while(i<n)
       {
         while(i<n && s[i] !=' ')
         {
            s[end]=s[i];
            end++;
            i++;
         }
         if(start<end)
         {
            reverse(s.begin()+start, s.begin()+end);
            s[end]=' ';
            end++;
            start=end;
         }
         i++;
       }
       s=s.substr(0, end-1);
       return s;
     }
};
