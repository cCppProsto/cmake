#include <iostream>

extern "C" 
{
  #include "../sub_project1/include/sub_c.h"
}

#include "../sub_project2/include/sub_cpp.hpp"

int main()
{
  std::cout << "Main !" << std::endl;
  
  c_func_1();
  c_func_2(100);
  
  subCpp sub;
  sub.say_hello();
  
  return 0;
}
