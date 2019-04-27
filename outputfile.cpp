/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:26:23+08:00
 */



#include "test.h"
void outputfile(data spendings[],int size,double sum_income,double sum_expense,string month,double money, string filename){     //Program for the output file.
  int option;
  int count=0;
  while (true){
    if (count!=0){       //Ask if the user wants to update the output.
      cout<<"Do you want to re-update your report? If yes, press 1 or 2. Else, press 3. "<<'\n'<<endl;
    }
    cout<<"What would you like to do with your data?"<<endl;
    cout<<"1. Monthly report"<<endl;
    cout<<"2. List by category"<<endl;
    cout<<"3. Exit"<<endl;
    cin>>option;
    if(option==1){
      monthly_report_fout(spendings, size, sum_income, sum_expense, month, money,filename);      //Get the monthly report.
      cout<<"Your monthly report has been recorded in "<<filename.substr(0, filename.length()-4)+"_report.txt"<<"!"<<endl;
    }
    if (option==2){
      int category;
      int choice;
      string search;
      cout<<"Choose category: "<<endl;
      cout<<"1. Date"<<endl;
      cout<<"2. Type"<<endl;
      cout<<"3. Payment Method"<<endl;
      cin>>category;
      if(category==1)
      {
        current_report_output(spendings, size, sum_income, sum_expense,filename);     //Get the current report.
        cout<<"Your data categorized by date has been recorded in "<<filename.substr(0, filename.length()-4)+"_report.txt"<<"!"<<endl;
      }
      if(category==2)
      {
        list_type_output(spendings, size,filename);     //List the data by type.
        cout<<"Your data categorized by type has been recorded in "<<filename.substr(0, filename.length()-4)+"_report.txt"<<"!"<<endl;
      }
      if (category==3){
        cout<<"Choose Payment Method: "<<endl;
        cout<<"1. Cash"<<endl;
        cout<<"2. Debit Card"<<endl;
        cout<<"3. Credit Card"<<endl;
        cout<<"4. Others"<<endl;
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
        category_report_output(spendings, size, search,filename);       //Print to file sorted by category.
        cout<<"Your data categorized by payment method has been recorded in "<<filename.substr(0, filename.length()-4)+"_report.txt"<<"!"<<endl;
      }
    }
    if (option==3){
      break;
    }
    count+=1;
  }
}
