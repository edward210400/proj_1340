/**
 * @Date:   2019-04-27T22:14:45+08:00
 * @Last modified time: 2019-04-27T22:54:18+08:00
 */



#include "test.h"
void category_report_output(data spendings[], int size, string search,string filename){         //Print the output to file.
  filename=filename.substr(0, filename.length()-4)+"_report.txt";     //Get the filename of the output.
  ofstream fout(filename.c_str());
  for(int i=1; i<size; i++)
  {
    for(int j=0; j<(size-1);j++)
    {
      if(spendings[j].date > spendings[j+1].date)         //Sort by date.
      {
        swap(spendings[j], spendings[j+1]);
      }
    }
  }
  fout<<"Your data categorized by "<<search<<" is: "<<endl;
  for (int i=0;i<size;++i){
    if (spendings[i].method==search){
      fout<<setw(3)<<spendings[i].date<<setw(9)<<spendings[i].type<<setw(10)<<spendings[i].category<<setw(11)<<spendings[i].method<<setw(11)<<spendings[i].amount<<endl;   //Output the data based on desired method by the user to the file
    }
  }
  fout.close();
}
