#include<iostream>
#include<complex>
using namespace std;

int sum(int a, int b) //сложение целых чисел
{
  return a+b;
}

complex<double> sum(complex<double> a,complex<double> b) //сложение комплексных чисел 
{
  return a+b;
}

int main ()
{
  int c = 65, d = 44;
  complex<double> e (1.0, 2.0 );
  complex<double> f (3.0, 4.0 );
  cout << sum(c,d) << endl;
  cout << sum(e,f) << endl;
  
  return 0;
} 
