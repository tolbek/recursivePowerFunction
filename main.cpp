#include <iostream>

int power (int m, int n)
{
  if(n == 0)
   {
    return 1;
   }
  return power(m, n-1)*m;
}

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

int main()
{
  int r = power1(9,5);
  std::cout << r << "\n";

  return 0;
}
