#include <iostream>
#include <unordered_map>

class Solution{
    public:
        int romanToInt(std::string s)
        {
            int result = 0;

            std::unordered_map<char, int> values = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };

            for (int i = 0; i < s.size(); i++)
            {   
                if(i == 0) result += values[s[i]];


                if (values[s[i + 1]] <= values[s[i]])
                {
                    result += values[s[i +1]];
                }
                else
                {
                    result -= values[s[i +1]];
                }
            }

            return result;
            
        }
};

int main ()
{
    Solution solution1;
    std::string target = "XI";

    std::cout << "el numero romano a int es: " << solution1.romanToInt(target);

    return 0;
}