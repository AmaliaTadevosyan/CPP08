#include "Span.hpp"

Span::Span() : _maxSize(0) {};

Span::Span(unsigned int N)
{
    this->_maxSize = N;
    this->_nums.reserve(N);
}

Span::Span(const Span& obj) : _nums(obj._nums)
{
    this->_maxSize = obj._maxSize;
}

Span::~Span() {};

Span& Span::operator=(const Span& obj)
{
    if (this != &obj)
    {
        this->_nums = obj._nums;
        this->_maxSize = obj._maxSize;
    }
    return (*this);
}

void Span::addNumber(int num)
{
    if (_nums.size() >= _maxSize)
        throw std::overflow_error("Span is already full");
    _nums.push_back(num);
}

int Span::shortestSpan()
{
    if (_nums.sixe() > 2)
        throw std::logic_error("Not enough elements!")
    std::vector<int> sortedNums = _nums;
    std::sort(sortedNums.begin(), sortedNums.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sortedNums.size(); i++)
    {
        int span = sortedNums[i] - sortedNums[i - 1];
        minSpan = std::min(minSpan, span);
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_nums.size() < 2)
        throw std::logic_error("Not enough elements!");
    int result = std::minmax_element(_nums.begin(), _nums.end());
    return (*result.second - *result.first);
}







