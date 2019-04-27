/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:36:29+08:00
 */



#include "test.h"
void tips(data spendings[], double sum_income, double sum_expense, int total_days, double budget)       //Give tips to the user.
{
  if(sum_income<sum_expense)     //Tips if ecpense exceed income.
  {
    cout<<"Tip : You have spent HKD"<<sum_expense-sum_income<<" more than your income this month. Reduce expenses to achieve financial freedom!"<<endl;
  }
  if (sum_expense>budget){      //Tips if expense more than budget.
    cout<<"You have spent HKD"<<sum_expense-budget<<" more than your budget. Reduce spending to be on track with your savings!"<<endl;
  }
  cout<<"Your recommended daily spending is: HKD"<<budget/total_days<<endl;       //Recommendation for the user.
  cout<<"Your recommended spending on Food is: HKD"<<0.4*budget<<endl;
  cout<<"Your recommended spending on Shopping is: HKD"<<0.25*budget<<endl;
  cout<<"Your recommended spending on Transport is: HKD"<<0.15*budget<<endl;
  cout<<"Your recommended spending on Others is: HKD"<<0.2*budget<<endl;
  cout<<"Good luck! Save as much money as you can!"<<endl;
}
