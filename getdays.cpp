/**
 * @Date:   2019-04-27T22:14:44+08:00
 * @Last modified time: 2019-04-27T23:08:27+08:00
 */



#include "test.h"
int getdays(string month)      //Get the days in a month.
{
  int days;
  if ((month=="January")||(month=="March")||(month=="May")||(month=="July")||(month=="August")||(month=="October")||(month=="December")||(month=="january")||(month=="march")||(month=="may")||(month=="july")||(month=="august")||(month=="october")||(month=="december"))
  {
    days = 31;
  }
  else if ((month=="February")||(month=="february"))
  {
    days = 28;
  }
  else if ((month=="April")||(month=="april")||(month=="June")||(month=="june")||(month=="September")||(month=="september")||(month=="November")||(month=="november"))
  {
    days = 30;
  }
  else
  {
    days=0;
  }
  return days;    //Return the number of days.
}
