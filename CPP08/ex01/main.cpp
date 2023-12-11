#include "Span.hpp"

int main()
{
    try
    {
        Span span(5);
        for (int i = 0; i < 5; ++i)
            span.addNumber(i * 2);

        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        std::cout << "Longest spna: " << span.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
