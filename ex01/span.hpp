#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>

class Span
{
	private:
		unsigned int N;
		unsigned int stored;
		std::vector<int> vect;

		Span();
	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span();

		Span &operator=(const Span &src);
	
		void addNumber(int n);
		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int shortestSpan() const;
		int longestSpan() const;
};

#endif
