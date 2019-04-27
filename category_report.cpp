/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T22:54:41+08:00
 */



#include "test.h"
void category_report(data spendings[], int size, string search){     //Print the report based on category
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)      //Sort the array based on date
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  cout<<"Your report categorized by "<<search<<" is: "<<endl;
  for (int i=0;i<size;++i){
    if (spendings[i].method==search){
      cout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;     //Print the data based on desired method by the user.
    }
  }
}
