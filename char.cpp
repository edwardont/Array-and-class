#include <iostream>
#include <cstring>
using namespace std;

main()
{
  cout << "Array size ";
  int size;
  cin >> size; 
  
  char *array = new char[size];
  char *array2 = new char[size];

  array[0] = 'a';
  array[5] = '\0';

  strcpy(array, "John");
  strcpy(array2, "Alan");
  
  
  cout << "Your text is : " << array << endl;
  cout << "Your text is : " << array2 << endl;


  return 0;
}
