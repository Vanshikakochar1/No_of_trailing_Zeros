class Solution {
public:
    int trailingZeroes(int n) {
         int result = 0; // we defined answer as 0
        while (n != 0) { // checking till n! becomes 0
            n = n / 5; // n is divided by 5 to check the number of 5 existing in the number
            result += n; // result = result +n; means repeating the n step coz' there exists 25 which is having 2 factors of 5
        }
        return result; // returning the result 
    
        
    }
};
