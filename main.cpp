#include <iostream>

// total of n+1 function calls

int power (int m, int n)
{
  if(n == 0)
   {
    return 1;
   }
  return power(m, n-1)*m;
}

// for odd numbers there is one multiplication
// for even numbers instead of multiplication value is returned

int power1 (int m, int n)
{
  if(n == 0)
   {
    return 1;
   }
  if(n % 2 == 0)
   {
    return power(m*m, n/2);
   }
  return m * power1(m*m, (n-1)/2);
}

// change parameters of power1 function for mathematical calculation of power

int main()
{
  int r = power1(9,5);
  std::cout << r << "\n";

  return 0;
}
