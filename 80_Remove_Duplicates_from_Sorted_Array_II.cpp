class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int start=0;
         int n=nums.size();
        for(int end=0; end<n; end++)
       {
          if( start<2 || nums[end]!=nums[start-2])
          {
         
           nums[start]=nums[end];
              start++;
          }
             
       } 
       return start;
    }
    
};
