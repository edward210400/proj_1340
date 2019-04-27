/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:12:30+08:00
 */



#include "test.h"
void inputfile(string filename, data* &spendings, string month, double &money, double &budget,int &size, double &sum_income, double &sum_expense)      //Get data from a file.
{
  int x=0;
  int a=0, b=0, c=0, d=0, e=0;
  string input;
  string type;
  ifstream fin(filename.c_str());
  if(fin.fail())     //If fail to open the file.
  {
    cout<<"Failed to open "<<filename<<endl;
    exit(1);
  }
  char z;

  fin>>month;    //Get month from file.
  month=month.substr(3,month.length()-3);
  fin>>money;    //Get input money from file.
  fin>>budget;   //Get input budget from file.
  while(fin>>input)     //Get the inpiut data.
  {
    if(x==0)    //Get the date.
    {
      size+=1;
      resize(spendings, size);
      int y = stoi(input);
      spendings[size-1].date=y;
    }
    if(x==1)    //Get the type of values addes.
    {
      type = input;
      spendings[size-1].type=input;
    }
    if(x==2)     //Get the category of values addes.
    {
      spendings[size-1].category=input;
    }
    if(x==3)     //Get the method of values addes.
    {
      spendings[size-1].method=input;
    }
    if(x==4)    //Get the amount of values added.
    {
      double z = stod(input);
      if(type=="Income")
      {
        sum_income+=z;
      }
      if(type=="Expense")
      {
        sum_expense+=z;
      }
      spendings[size-1].amount=z;
    }
    x+=1;
    if(x==5)
    {
      x=0;
    }
  }
  cout<<"Data Imported!"<<endl;    //Give notification if data import is successful.
}
