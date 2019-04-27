/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T23:15:08+08:00
 */



#include "test.h"
void list_type_output(data spendings[], int size,string filename)       //Output data to file sorted by type.
{
  filename=filename.substr(0, filename.length()-4)+"_report.txt";    //Get the name of output file.
  ofstream fout(filename.c_str());
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)     //Sort the data by date.
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  int type1, type2;
  for(int i=1; i<size; i++)       //Sort the data by type.
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].type=="Income")
      {
        type1=0;
      }
      if(spendings[j].type=="Expense")
      {
        type1=1;
      }
      if(spendings[j+1].type=="Income")
      {
        type2=0;
      }
      if(spendings[j+1].type=="Expense")
      {
        type2=1;
      }
      if(type1 > type2)
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  fout<<"Your data categorized by type is: "<<endl;
  for (int i=0;i<size;++i){
    fout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;    //Print the output to the output file.
  }
  fout.close();
}
