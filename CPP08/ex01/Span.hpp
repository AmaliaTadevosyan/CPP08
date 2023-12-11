#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
    private:
        std::vector<int> _nums;
        unsigned int _maxSize;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span& obj);
        ~Span();
        Span& operator=(const Span& obj);
        void    addNumber(int num);
        int     shortestSpan();
        int     longestSpan();
};

