/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:22:42+08:00
 */



#include "test.h"
void monthly_report(data spendings[], int size, double sum_income, double sum_expense, string month,double money)       //Get the monthly report.
{
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  cout<<"Your report for the month of "<<month<<": "<<endl;
  for (int i=0;i<size;++i){
    cout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;     //Print the monthly report.
  }
  cout<<"Your remaining money for the month of "<<month<<": "<<money+sum_income-sum_expense<<endl;
}
