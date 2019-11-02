#include <iostream>

#include <tuple>
#include <vector> 
#include <string>
#include <algorithm>




int main()

{ 
  std::tuple<std::string, int, double> Person1("test1", -1, 14.0), Person2("test2", 1, 15.0), Person3("test3", 4, 13.0), Person4("test4", -10, 13.0),temp;  
  
  std::vector< std::tuple<std::string, int, double>> djoss, subDjoss;
  djoss.push_back(Person1);
  djoss.push_back(Person2);
  djoss.push_back(Person3);
  djoss.push_back(Person4);
  
  //std::cout << "djoss : ";
  //std::cout << std::get<0>(Person1) << ' ';
  //std::cout << std::get<1>(Person1) << '\n';
  
 
   for (int i =0 ; i < djoss.size(); i++)
  {
    for (int j = 1; j < djoss.size(); j++)
    {
      if ( std::get<1>(djoss[j]) < std::get<1>(djoss[j-1]))
      {
        temp = djoss[j-1];
        djoss[j-1] = djoss[j];
        djoss[j] = temp;

        //std::cout << std::get<1>(djoss[i]);
      }
    }
  }
     
  for (auto x : djoss) 
        std::cout << std::get<0>(x) << " "; 
  
  
return 0;
}
