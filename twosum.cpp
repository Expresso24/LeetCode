#include <iostream>
#include <vector>

class Solution{
    public:
    std::vector<int> twoSum(const std::vector<int>& nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if( (nums[i] + nums[j]) == target)
                {
                    return{i, j};
                }
            }
        }
        return {};
    }
};



int main()
{   
    Solution solution1;
    std::vector<int> vector1 = {2,7,11,15};
    int x = 9;

    std::vector<int> vector2 = solution1.twoSum(vector1, x);

    for(auto x : vector2)
    {
        std::cout << x << std::endl;
    }

    return 0;
}