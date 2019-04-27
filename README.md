# proj_1340
ENGG1340 group project
Group number: 69
Group members:
  Edward Suryajaya (3035552882)
  Mikael Ken Slamet (3035556838)
Topic: Accounting system
Link: https://github.com/edward210400/proj_1340

Problem statement: As first year students, most of us are living away from home and becoming more independent. One of the aspect that goes hand in hand with becoming more independent is managing our money. We realize that our friends and ourselves find it difficult to manage our expenses and often forget what we spent our money on. Hence, recognizing the problems with managing expenses that our friends and us face, we decided to make a program to help us manage our expenses. 

Problem setting:
We assume that the user of the program is a University student. By using this program, the user could track down their past spending. The program could also set the budget for monthly spendings. By implementing this, the user should be able to know what cause them to overspend. The user would be warned if their spending almost reach the monthly budget. The program would be useful to manage their fiancial status. An interesting feature that could separate this program from other programs is that their spending can be categorized based on where they spent their money and also get tips to save better based on their data. Lastly, the program will also provide them with monthly reports on where they spent their money.

Program features:
  1. Allows the user to see their past spending.
  2. Allows the user to set their monthly budget and give an warning when their spending almost reach the budget.
  3. Allows the user to input their amount of money and calculate how much they have left.
  4. Allows the user to see the date when they spend their money and on which category it was spent on.
  6. Allows the user to remove a specific spending.
  7. Allow user to categorize their spendings. For example: food, shopping, transportation etc. 
  8. Provide them with tips on how they can save more money. The program will provide details on how much money they can spend each day and provide a recommended amount of spending in each category.
  9. Provide users with a monthly report, an overview of of their spendings on that month. 
  10. Program can also check the current money they have and also provide user with a warning and their 3 biggest spendings once theyhave exceeded their monthly budget.
   
 Assumptions in the program/ Input/Output specifications:
 1. This program can only run for 1 month, once the program is terminated all data will be lost. Hence, the user can either input their 1 month spending in a form of a text file or input them manually.
 2. This program assumes that the user will input the data in the correct format. For example, when asked for how much money they have, we assume that the user will input 4000 instead of "four thousand". Also, when asked whether it is an income or expense, we assume the user will type in "Income" or "Expense". Similarly, we also assume that when asked their payment method, the user will input "Cash", "DebitCard", "CreditCard", or "Others", in that specific format only.
 3. When given a list of options, the program assumes that the user will input the number in which the option they want is listed in. For example, if one of the option says "1. Say hello world", the program assumes that the user will type in "1" and not "one".
 4. The program will only terminate once the user chooses to exit.
 
 Sample Input Files:
1.Once the program runs and user chooses input from file, we assume that the filename will be "sample.txt".
2. The file output will be in the directory named "sample_report.txt".

 Compilation and Execution instruction:
 1. Download the source files in github and export it to Linux.
 2. Once exported to Linux, simply type in "make program" and the program will be compiled.
 3. Type "./program" to execute the program.
 
