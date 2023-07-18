#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int subtract(int x, int y)
{
  return x - y;
}

int multiply(int x, int y)
{
  return x * y;
}

int divide(int x, int y)
{
  return x / y;
}

int main()
{
  std::cout << "Hello, world!" << std::endl;
  std::cout << "Name: Vismay Ravikumar, Classroom: " << 115 << std::endl;

  int x = 5;
  int y = 7;
  int z = add(x, y);
  int w = multiply(multiply(x, y), z);
  int v = divide(divide(x, y), v);

  std::cout << "The sum of " << x << " and " << y << " is " << add(x, y) << std::endl;

  return 0;
}