#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

bool isPermutation(std::vector<int> &nums)
{
    int n = nums.size();
    std::ranges::sort(nums);
    for(size_t i = 0; i < n; ++i)
    {
        if(nums[i] != i+1)
        {
            return false;
        }
    }
    return true;
}

auto main() -> int
{
    std::vector<int> vec{1, 4, 3, 2, 5};
    std::cout << std::boolalpha << isPermutation(vec);
}