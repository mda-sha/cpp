#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <vector>
#include <iostream>
class Span{
    std::vector<int> vec;
    int len;
    Span();
public:
    Span(unsigned int n);
    ~Span();
    Span(Span const &other);
    Span& operator=(Span const &other);
    void addNumber(int nmb);
    void addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e);
    int shortestSpan();
    int longestSpan();
    int getLen() const;
};

#endif