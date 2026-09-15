class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int sum=(a&b) << 1;
            a=a^b;
            b=sum;;
        }
        return a;
    }
};
