/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T22:46:29+08:00
 */



#include "test.h"
void add_spending(data spendings[], double &sum_income, double &sum_expense, int size)       //To add the data to the array.
{
  double value;
  string type;
  int date;
  string category;
  string method;
  cout<<"Insert date (dd): ";
  cin>>date;      //Get the date from user.
  cout<<"Insert type (Income or Expense): ";
  cin>>type;     //Get type of input from user.
  if(type=="Expense")
  {
    cout<<"Insert category ";
    cout<<"(Food, Transport, Shopping, Others): ";
    cin>>category;     //Get category of spending.
  }
  if(type=="Income")    //No category if value added is income.
  {
    category = "-";
  }
  cout<<"Insert method(Cash/DebitCard/CreditCard/Others): ";
  cin>>method;    //Get method of added value.
  cout<<"Insert value: ";
  cin>>value;     //Get the value.
  spendings[size-1].date=date;
  spendings[size-1].type=type;
  spendings[size-1].category=category;
  spendings[size-1].amount=value;
  spendings[size-1].method=method;
  if(type=="Income")
  {
    sum_income+=value;     //Update the total of income.
  }
  if(type=="Expense")
  {
    sum_expense+=value;    //Update the total of expense.
  }
}
