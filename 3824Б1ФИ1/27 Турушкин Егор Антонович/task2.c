// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <limits.h>

unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
  if (b>(UINT_MAX/a))
    return UINT_MAX;
  else
    return a*b;
}
