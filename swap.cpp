/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:34:45+08:00
 */



#include "test.h"
void swap(data &a, data &b)     //Function for bubble sort.
{
  data temp;
  temp = a;
  a = b;
  b = temp;
}
