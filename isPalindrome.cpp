class Solution {
public:
    int isPalindrome(int x) {
        int init = x;
        int rev = 0;
        
        if ( x < 0 ) {
            return false;
        }
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            rev = rev * 10 + pop;
        }
        if (rev == init) { 
            return true;
        } else { 
            return false; 
        }
        
    }
};
