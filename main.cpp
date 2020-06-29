class Solution {
public:
    int subtractProductAndSum(int n) {
        int res = 0;
        
        int product = 1;
        int sum = 0;
        
        while (n != 0) {
            int num = n % 10;
            
            n /= 10;
            
            product *= num;
            sum += num;
        }
        
        res = product - sum;
        
        return res;
    }
};
