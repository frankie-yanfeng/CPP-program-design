#include <iostream>
#include <algorithm>

using namespace std;

template<class _T1, class _T2>
struct pair
{
	typedef _T1 first_type;
	typedef _T2 second_type;
	_T1 first;
	_T2 second;
	pair(): first(), second() { }
	pair(const _T1& __a, const _T2& __b)
			: first(__a), second(__b) { }
	template<class _U1, class _U2>
	pair(const pair<_U1, _U2>& __p)
			: first(__p.first), second(__p.second) { }
};

template<class T>
struct less : public binary_function<T, T, bool>
{
	bool operator()(const T& x, const T& y) const
	{
		return x < y ;
	}
};

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}