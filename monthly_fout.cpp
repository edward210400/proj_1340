/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:19:08+08:00
 */



#include "test.h"
void monthly_report_fout(data spendings[], int size, double sum_income, double sum_expense, string month,double money,string filename){      //Get the monthly report of the data.
  filename=filename.substr(0, filename.length()-4)+"_report.txt";
  ofstream fout(filename.c_str());
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
  fout<<"Your report for the month of "<<month<<": "<<endl;
  for (int i=0;i<size;++i){
    fout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;     //Print the monthly report to the output file.
  }
  fout<<"Your remaining money for the month of "<<month<<": "<<money+sum_income-sum_expense<<endl;
  fout.close();
}
