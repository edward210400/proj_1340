/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T22:42:16+08:00
 */



#include "test.h"

int size;

int main()
{
  int total_days=0;
  int n, i, j, user_opt, insert_amount, amount, value, category;
  double money=0, sum_income=0, sum_expense=0, budget=0;
  string input_1 = "1. Input from file";
  string input_2 = "2. Input manually";
  string opt1 = "1. Add spending";
  string opt2 = "2. Check current value";
  string opt3 = "3. Current report";
  string opt4 = "4. Monthly report";
  string opt5 = "5. List by category";
  string opt6 = "6. Remove value";
  string opt7 = "7. Search data";
  string opt8 = "8. Tips";
  string opt9 = "9. Exit";
  string month;
  int input_type;
  string filename;
  size=0;
  data *spendings = new data[size];        //Declare a dynamic array.
  while(true)
  {
    cout<<"Choose method of input: "<<endl;           //Ask the user how they want to input the data.
    cout<<input_1<<endl;
    cout<<input_2<<endl;
    cin>>input_type;
    if((input_type==1)||(input_type==2))
    {
      break;
    }
    else            //Ask the user to re-input if the input is invalid.
    {
      cout<<"Invaid input! Please type either 1 or 2!"<<endl;
    }
  }
  if(input_type==1)      //Get input from file.
  {
    cout<<"File name: ";
    cin>>filename;
    cout<<endl;
    inputfile(filename, spendings ,month ,money ,budget , size, sum_income, sum_expense);
    outputfile(spendings,size,sum_income,sum_expense,month,money,filename);
  }
  if(input_type==2){             //Get input manually.
    while(total_days==0)
    {
      cout<<"Insert month: ";
      cin>>month;
      total_days = getdays(month);               //Get the number of days in a month.
      if(total_days!=0)
      {
        break;
      }
      cout<<"Invalid input! PLease type in the full name of the month."<<endl;      //Ask the user to re-input if the input is invalid.
    }
    cout<<"Insert money (Input in digits): HKD";
    cin>>money;                                         //Get the money from the user input.
    cout<<"Insert budget (Input in digits): HKD";
    cin>>budget;                                        //Get the budget from user input.
    printopt(opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9);        //Print the options.
    cout<<"Which option do you want? ";
    cin>>user_opt;
    while(true)
    {
      if(user_opt==1)
      {
        size+=1;
        resize(spendings, size);    //Resize the array if the user add the data.
        add_spending(spendings, sum_income, sum_expense, size);      //Add the data to the array.
      }
      if(user_opt==2)
      {
        current_value(money, sum_income, sum_expense);         //Get the current value of the user.
      }
      if(user_opt==3)
      {
        current_report(spendings, size, sum_income, sum_expense);    //Get the current monthly report.
      }
      if(user_opt==4)
      {
        monthly_report(spendings,size,sum_income,sum_expense,month,money);     //Get the monthly report and exit the program.
        return 0;
      }
      if(user_opt==5)        //List the input by category.
      {
        int choice;
        string search;
        cout<<"Choose category: "<<endl;
        cout<<"1. Date"<<endl;
        cout<<"2. Type"<<endl;
        cout<<"3. Payment Method"<<endl;
        cout<<"4. Return to main menu"<<endl;
        cout<<"Your choice: ";
        cin>>category;
        if(category==1)
        {
          current_report_date(spendings, size, sum_income, sum_expense);    //List by date.
        }
        if(category==2)
        {
          list_type(spendings, size);      //List by type of spendings.
        }
        if (category==3){
          cout<<"Choose Payment Method: "<<endl;
          cout<<"1. Cash"<<endl;
          cout<<"2. Debit Card"<<endl;
          cout<<"3. Credit Card"<<endl;
          cout<<"4. Others"<<endl;
          cout<<"Your choice: ";
          cin>>choice;
          if(choice==1){
            search="Cash";
          }
          if(choice==2){
            search="DebitCard";
          }
          if(choice==3){
            search="CreditCard";
          }
          if(choice==4){
            search="Others";
          }
          category_report(spendings, size, search);      //List by payment method.
        }
        if(category==4)                    //Get back to the start of the loop
        {
          printopt(opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9);
          cout<<"Which option do you want? ";
          cin>>user_opt;
          continue;
        }
        if(category!=1&&category!=2&&category!=3&&category!=4)      //Ask the user to re-input if the input is invalid.
        {
          cout<<"Invalid input! Try again"<<endl;
          cout<<endl;
          continue;
        }
      }
      if(user_opt==6)
      {
        remove(spendings, size);      //Remove a data from the array.
        size-=1;
      }
      if(user_opt==7)
      {
        search_spending(spendings, size);     //Search for a specific spending.
      }
      if(user_opt==8)
      {
        tips(spendings, sum_income, sum_expense, total_days, budget);      //Get the tips for the user.
      }
      if(user_opt>9||user_opt<1)      //Ask the user to re-input if the input is invalid.
      {
        cout<<"Invalid input!"<<endl;
        cout<<endl;
        printopt(opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9);
        cout<<"Which option do you want? ";
        cin>>user_opt;
        continue;
      }
      if(sum_expense>budget*0.85)      //Give the user warning if the spending almost reach the budget.
      {
        if(sum_expense>budget)
        {
          cout<<"You have exceed your budget for this month. You have spent HKD"<<sum_expense<<endl;      //If already exceed the budget.
        }
        else
        {
          cout<<"You are almost at your limit this month. You have spent HKD"<<sum_expense<<endl;     //If haven't exceed the budget.
        }
        cout<<"Your biggest spendings: "<<endl;
        biggest_spending(spendings, size);       //Report the biggest spending to the user.
      }
      cout<<endl;
      printopt(opt1, opt2, opt3, opt4, opt5, opt6, opt7, opt8, opt9);
      cout<<"Which option do you want? ";
      cin>>user_opt;
      if(user_opt==9)     //Exit the program.
      {
        break;
      }
    }
  }

  delete [] spendings;     //Remove memory of the dynamic array.
  spendings = NULL;
}
