class Solution {
  public:
    char getMaxOccuringChar(string& s) {
         int arr[26] = {0};
       
        for(int i = 0; i < s.size(); i++)
               {
                   int count = s[i] - 'a';
                   arr[count]++;
               }
                 int max = -1; int ans = 0;
                 for(int i = 0; i < 26; i++)
                         {
                             if(max < arr[i])
                             {
                                 max = arr[i];
                                 ans = i;
                             }
                         }
                               return 'a'+ans;
        
                        }
                          };
