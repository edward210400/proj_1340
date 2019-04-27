/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:07:56+08:00
 */



#include "test.h"
void current_report_date(data spendings[], int size, double sum_income, double sum_expense)     //To get report data based on date.
{
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)     //Sort the data by date.
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  cout<<"Your current report categorized by date is: "<<endl;
  for (int i=0;i<size;++i){
    cout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;      //Print the data sorted by date.
  }
}
