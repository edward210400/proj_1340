/**
 * @Date:   2019-04-27T18:40:17+08:00
 * @Last modified time: 2019-04-27T19:51:57+08:00
 */



#ifndef TEST
#define TEST
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<cstdlib>
#include<iomanip>
using namespace std;
struct data
{
  int date;
  string type;
  string category;
  string method;
  double amount;
};
void printopt(string opt1, string opt2, string opt3, string opt4, string opt5, string opt6, string opt7, string opt8, string opt9);
int getdays(string month);
void remove(data* &spendings, int size);
void swap(data &a, data &b);
void resize(data* &spendings, int size);
void inputfile(string filename, data* &spendings, string month, double &money, double &budget,int &size, double &sum_income, double &sum_expense);
void add_spending(data spendings[], double &sum_income, double &sum_expense, int size);
void current_value(double money, double sum_income, double sum_expense);
void current_report(data spendings[], int size, double sum_income, double sum_expense);
void current_report_date(data spendings[], int size, double sum_income, double sum_expense);
void category_report(data spendings[], int size, string search);
void monthly_report(data spendings[], int size, double sum_income, double sum_expense, string month,double money);
void list_type(data spendings[], int size);
void biggest_spending(data spendings[], int size);
void search_spending(data spendings[], int size);
void monthly_report_fout(data spendings[], int size, double sum_income, double sum_expense, string month,double money,string filename);
void current_report_output(data spendings[], int size, double sum_income, double sum_expense,string filename);
void list_type_output(data spendings[], int size,string filename);
void category_report_output(data spendings[], int size, string search,string filename);
void tips(data spendings[], double sum_income, double sum_expense, int total_days, double budget);
void outputfile(data spendings[],int size,double sum_income,double sum_expense,string month,double money, string filename);
#endif
