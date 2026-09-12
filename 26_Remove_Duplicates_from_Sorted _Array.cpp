class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start=0;
        int end=1;
        int count=0;
       int n=nums.size();
       while(end<n)
       {
          if( nums[end]!=nums[start])
          {
            start++;
           nums[start]=nums[end];
          }
              end++;
       } 
       return start+1;
    }
};
