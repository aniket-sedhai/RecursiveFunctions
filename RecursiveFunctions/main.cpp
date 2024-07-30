//
//  main.cpp
//  RecursiveFunctions
//
//  Created by Aniket Sedhai on 7/21/24.
//

#include <iostream>

int Appearances(int value, int search);
std::string IntegerToBase6(int value);

int main(void)
{
    int count = Appearances(322556711, 5);
    std::cout << count << std::endl;
    std::cout << IntegerToBase6(5324422) << std::endl;
}

int Appearances(int value, int search)
{
    if (value < 10)
        return value == search;
    return Appearances(value / 10, search) + (value % 10 == search);
}

std::string IntegerToBase6(int value)
{
    if (value < 6)
        return std::to_string(value % 6);
    return (IntegerToBase6(value/6) + std::to_string(value % 6));
}

//int Appearances(int value, int search)
//{
//    int my_count = 0;
//    int digit_count = int(log10(value) + 1);
//    int divider = pow(10, digit_count - 1);
//    int new_value = value % divider;
//
//    if ((divider == 1) && (value == search))
//        return 1;
//    else if (divider == 1)
//        return 0;
//
//    if (value / divider == search)
//        ++my_count;
//    my_count += Appearances(new_value, search);
//
//    return my_count;
//}
