// even_lambda.cpp
// compile with: cl /EHsc /nologo /W4 /MTd
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // Create a vector object that contains 9 elements.
   vector<int> v;
   for (int i = 1; i <= 20; ++i) {
      v.push_back(i);
   }
   
   // Count the number of even numbers in the vector by
   // using the for_each function and a lambda.
   int evenCount = 0;
   for_each(v.begin(), v.end(), [&evenCount] (int n) 
   {
      cout << n;
      if (n % 2 == 0) {
         cout << " is even " << endl;
         ++evenCount;
      } else {
         cout << " is odd " << endl;
      }
   }
   );

   // Print the count of even numbers to the console.
   cout << "There are " << evenCount
        << " even numbers in the vector." << endl;
   int factor = 5;
   vector<int>::iterator ptr; 
   int Count = 0;
   int i = 0;
    for_each(v.begin(), v.end(), [&Count] (int n) 
   {
      cout << n;
      //cout << v[i++];
      if (n % 2 == 0) {
         cout << " is even " << endl;
         ++Count;
      } else {
         cout << " is odd " << endl;
      }
   }
   );
   
}
