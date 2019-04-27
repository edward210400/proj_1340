/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:16:51+08:00
 */



#include "test.h"
void list_type(data spendings[], int size)      //Sort the data by type.
{
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)      //Sort the data by date.
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  int type1, type2;
  for(int i=1; i<size; i++)     //Sort the data by type.
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].type=="Income")
      {
        type1=0;
      }
      if(spendings[j].type=="Expense")
      {
        type1=1;
      }
      if(spendings[j+1].type=="Income")
      {
        type2=0;
      }
      if(spendings[j+1].type=="Expense")
      {
        type2=1;
      }
      if(type1 > type2)
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  cout<<"Your current report categorized by Type is: "<<endl;
  for (int i=0;i<size;++i){
    cout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;    //Print the data sorted by type.
  }
}
