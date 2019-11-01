#include <iostream>

#include <tuple>
#include <vector> 
#include <string>




int main()

{ 
  std::tuple<std::string, int, double> Person1("test1", 3, 14.0), Person2("test2", 4, 15.0), Person3("test3", 2, 13.0);  
  
  std::vector< std::tuple<std::string, int, double>> djoss;
  djoss.push_back(Person1);
  djoss.push_back(Person2);
  djoss.push_back(Person3);
  
  std::cout << "djoss : ";
  std::cout << std::get<0>(Person1) << ' ';
  std::cout << std::get<1>(Person1) << '\n';
  

  std::vector<std::tuple<std::string, int, double>>::iterator ptr; // Create vector pointer for tuple members
  
  for (ptr = djoss.begin(); ptr < djoss.end(); ptr++) 
  {
     std::cout << std::get<0>(*ptr) << " "; //  output second element of each element of the vector
     
  }
return 0;
}
