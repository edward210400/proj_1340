/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:05:57+08:00
 */



#include "test.h"
void current_value(double money, double sum_income, double sum_expense)      //Get the current money/value of the user
{
  double current;
  current=money-sum_expense+sum_income;
  cout<<"Your remaining value is: HKD"<<current<<endl;      //Print the remaining value.
}
