/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:29:04+08:00
 */



#include "test.h"
void remove(data* &spendings, int size)
{
  data *temp = new data[size];
  int date;
  int pos=0;
  string type;
  string category;
  double amount;
  string method;
  cout<<"Insert date (dd): ";
  cin>>date;     //Insert the date of the data.
  cout<<"Insert type (Income or Expense): ";
  cin>>type;    //Insert type of data.
  if(type=="Expense")    //Insert category.
  {
    cout<<"Insert category ";
    cout<<"(Food, Transport, Shopping, Others): ";
    cin>>category;
  }
  if(type=="Income")
  {
    category="-";
  }
  cout<<"Insert payment method(Cash/DebitCard/CreditCard/Others): ";       //Get the method of data.
  cin>>method;
  cout<<"Insert value: ";     //Get the amount of value of the data.
  cin>>amount;
  for(int i=0;i<size;i++)
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
int j=0;
for (int a=0;a<size-1;++a){      //Remove data.
  if (a==pos){
    j+=1;
  }
  temp[a]=spendings[j];
  j+=1;
}
spendings= NULL;
spendings=temp;
}
