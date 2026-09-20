class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s.size()!=goal.size()){
            return false;
        }
        for(int i=0; i<n; i++)
        {
            if(s==goal){
                return true;
            }
            char first =s[0];
            s.erase(0, 1);
            s.push_back(first);
            
        }
        return false;
    }
};
