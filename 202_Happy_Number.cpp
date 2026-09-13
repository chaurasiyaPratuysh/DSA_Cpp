class Solution {
public:
    int number(int n){
    int sum=0;
    while(n>0)
    {
        int digit=n%10;
        sum=sum+(digit*digit);
        n=n/10;
    }
    return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        do {
            slow = number(slow);
            fast = number(number(fast));
        } while (slow != fast);

        return slow == 1;
    }
   
};
