// #include <iostream>

// template <typename T>

// T my_max(T a, T b)
// {
//     return (a > b) ? a : b;
// }

// // int main()
// // {
// //     std::cout << my_max(45, 20) << std::endl;
// // }

// //template is a blueprint not a code, template <typename T> make
// //my_max a generic function that works with any data type
// //the memory representation of the parameter is untouched a converted 
// //copy is created to be used 

// int main()
// {
//     // int x = 5;
//     // double y = 10.5;

//     std::cout << my_max<double>(4, 5.8) << std::endl;
// }

// #include <iostream>
// using namespace std;

// template <typename R, typename T, typename U>
// R add(T a, U b) 
// {
//     return a + b;
// }

// int main()
// {
//     cout << add(10, 5.5) << endl;

//     return 0;
// }