#include <iostream>
#include <functional>




using namespace std;


template <typename T>
using FunctionType = std::function<T (const T& t)>;


template <typename T>
void print(const FunctionType<T>& f, T t)
{
    std::cout << f(t) << '\n';
}

FunctionType<double> f;



int main()
{
  f = 5;
  
  print(f);

  return 0;
}
