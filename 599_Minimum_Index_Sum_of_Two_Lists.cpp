class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int i=0;
        int j=0;
        int min=INT_MAX;
        vector<string>ans;
        for(i=0; i<list1.size(); i++)
        {
            for(j=0; j<list2.size(); j++)
            {
                if(list1[i]==list2[j])
                {
                if(i+j<min)
                {
                    ans.clear();
                    ans.push_back(list1[i]);
                    min=i+j;
                }
                else if(i+j == min)
                {
                     ans.push_back(list1[i]);
                }
              }
            }
        }
        return ans;
    }
};
