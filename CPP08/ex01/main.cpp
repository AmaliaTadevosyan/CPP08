#include "Span.hpp"

// int main()
// {
//     try
//     {
//         Span span(5);
//         for (int i = 0; i < 5; ++i)
//             span.addNumber(i * 2);

//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
//         std::cout << "Longest spna: " << span.longestSpan() << std::endl;

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     return (0);
// }

int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}