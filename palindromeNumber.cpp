#include <iostream>
#include <vector>

class Solution{
    public:
        bool isPalindrome(int x){
            
            int original = x;
            int reversed = 0;
            int lastDigit = 0;

            if(x < 0)
            return false;

            while(x > 0)
            {
                lastDigit = x % 10;
                reversed = (reversed * 10) + lastDigit;
                x = x / 10;
            }

            return original == reversed;
        }
};

int main()
{
    Solution solution1;
    int target = 121;

    if(solution1.isPalindrome(target))
    std::cout << "The number is palindrome";
    else
    std::cout << "The number is not palindrome";


    return 0;
}