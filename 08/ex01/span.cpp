#include "span.hpp"

Span::Span()
{}

Span::Span(unsigned int nm) : len(nm)
{}

Span::~Span()
{}

Span::Span(Span const &other)
{
    *this = other;
}

Span& Span::operator=(Span const &other)
{
    if (this == &other)
        return *this;
    this->vec = other.vec;
    this->len = other.getLen();
    return *this;
}

void Span::addNumber(int const nmb)
{
    if (static_cast<int>(vec.size()) >= len)
        throw std::logic_error("full vector");
    vec.push_back(nmb);
}

void Span::addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
    while (b != e)
    {
        if (static_cast<int>(vec.size()) >= len)
            throw std::logic_error("full vector");
        vec.push_back(*b);
        b++;
    }
}

int Span::shortestSpan()
{
    if (!vec.size() || vec.size() == 1)
        throw std::logic_error("not enough elements to define span");
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator iter = tmp.begin();
    int ret = *(iter + 1) - *iter;
    iter+=2;
    int dif = ret;
    while (iter != tmp.end())
    {
        dif = *iter - *(iter - 1);
        if (dif < ret)
            ret = dif;
        iter++;
    }
    return ret;
}

int Span::longestSpan()
{
    if (!vec.size() || vec.size() == 1)
        throw std::logic_error("not enough elements to define span");
    std::vector<int> tmp(vec);
    std::sort(tmp.begin(), tmp.end());
    return (*tmp.rbegin() - *tmp.begin());
}

int Span::getLen() const
{
    return len;
}


