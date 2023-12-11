#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& conainer, int value)
{
    typename T::itrator it = std::find(conainer.begin(), conainer.end(), value);
    if (it != conainer.end())
    {
        return it;
    }
    else
    {
        std::cout << "Value not found" << std::endl; 
    }
}
