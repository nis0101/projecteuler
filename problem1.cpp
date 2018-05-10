/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

#include<iostream>
#include<cstdint>
using namespace std;

uint64_t find_sum(uint64_t num)
{
   uint64_t i =0;
  uint64_t sum  = 0;
  for( ; i < num ; i++)
  {
    if( !(i % 3) || !(i % 5))
    {
       sum += i;
       cout<< i << " ";
    }
  }
  cout << endl;
  return sum;
}
int main(void)
{
  cout <<"Sum of multiples of 3 and 5 below 1000 is :: " << find_sum(1000) << endl;
}

