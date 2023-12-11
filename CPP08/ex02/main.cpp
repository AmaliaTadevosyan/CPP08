#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mutant;

    for (int i = 0; i < 5; i++)
        mutant.push(i);

    for (MutantStack<int> it = mutant.begin(); it != mutant.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
    return (0);  
}

