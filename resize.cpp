/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:30:47+08:00
 */



#include "test.h"
void resize(data* &spendings, int size)    //To resize the array.
{
  data *newsize;
  newsize = new data[size];
  for(int i = 0; i < size-1; i++)
  {
    newsize[i] = spendings[i];
  }
  delete[] spendings;     //Release memory of old array.
  spendings = newsize;
}
