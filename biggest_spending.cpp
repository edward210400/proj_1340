/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T22:48:06+08:00
 */



#include "test.h"
void biggest_spending(data spendings[], int size)      //Get 3 of user's biggest spendings when a warning is given.
{
  int x;
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].amount < spendings[j+1].amount)      //Sort the spending using bubble sort.
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  for(int k=0; k<size; k++)      //Print the 3 biggest spendings.
  {
    if(x==3)
    {
      break;
    }
    if(spendings[k].type=="Expense")
    {
      cout<<setw(3)<<spendings[k].date<<setw(9)<<spendings[k].type<<setw(10)<<spendings[k].category<<setw(11)<<spendings[k].method<<setw(11)<<spendings[k].amount<<endl;
      x+=1;
    }
  }
}
