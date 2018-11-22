#include <stdio.h>
#include "../include/sub_c.h"

void c_func_1()
{
  printf("%s:%i\n", __FUNCTION__, __LINE__);
}

void c_func_2(int aValue)
{
  printf("%s:%i value = %i\n", __FUNCTION__, __LINE__, aValue);
}
