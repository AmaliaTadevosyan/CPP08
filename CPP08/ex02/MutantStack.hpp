#pragma once

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std:stack<T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iter;

        MutantStack() {};
        MutantStack(const MutantStack& obj) : std::stack<T>(obj){};
        ~MutantStack() {};
        MutantStack& operator=(const MutantStack& obj)
        {
            std::stack<T>::operator=(obj);
        }

        iterator begin()
        {
            return (this->c.begin());
        }

        iterator end()
        {
            return (this->c.end());
        }
}