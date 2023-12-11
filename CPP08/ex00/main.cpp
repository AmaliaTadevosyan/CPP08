#include "easyfind.hpp"

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> nums(arr, arr + sizeof(arr) / sizeof(arr[0]));
    try
    {
        std::vector<int>::iterator result = easyfind(nums, 3);
        std::cout << "Value found at position: " << std::distance(nums.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        std::vector<int>::iterator result = easyfind(nums, 10);
        std::cout << "Value found at position: " << std::distance(nums.begin(), result) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
} 