/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:34:19+08:00
 */



#include "test.h"
void search_spending(data spendings[], int size)
{
  int i;
  int date;
  int pos=0;
  string type;
  string category;
  double amount;
  string method;
  cout<<"Insert date (dd): ";
  cin>>date;     //Get the date.
  cout<<"Insert type (Income or Expense): ";
  cin>>type;    //Get the type of data.
  if(type=="Expense")
  {
    cout<<"Insert category ";
    cout<<"(Food, Transport, Shopping, Others): ";
    cin>>category;      //Get the category of data.
  }
  if(type=="Income")
  {
    category="-";
  }
  cout<<"Insert payment method(Cash/DebitCard/CreditCard/Others): ";
  cin>>method;     //Get the mothod.
  cout<<"Insert value: ";
  cin>>amount;    //Get the amount.
  for(i=0;i<size;i++)
  {
    if(spendings[i].date==date)
    {
      if(spendings[i].type==type)
      {
        if(spendings[i].category==category)
        {
          if(spendings[i].amount==amount)
          {
            if(spendings[i].method==method)
            {
              pos=i;
            }
          }
        }
      }
    }
  }
  if(pos==i)
  {
    cout<<"Found!"<<endl;      //Print if data found.
    cout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;    //Print the data found.
  }
  if(pos==0)    //Print if data not found.
  {
    cout<<"Not Found!"<<endl;
  }
}
