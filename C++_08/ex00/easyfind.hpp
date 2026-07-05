// #ifndef EASYFIND_HPP
// #define EASYFIND_HPP

// #include <iostream>

// template <typename T>
// int easyfind(T *num, int to_find)
// {
//     for(int i = 0; i < )
// }

// #endif


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end())
		throw "easyfind: value not found";
	return (it);
}

#endif