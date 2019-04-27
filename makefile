# @Date:   2019-04-27T21:39:29+08:00
# @Last modified time: 2019-04-27T22:08:27+08:00



add_spending.o: add_spending.cpp test.h
	g++ -c add_spending.cpp

biggest_spending.o: biggest_spending.cpp test.h
	g++ -c biggest_spending.cpp

category_fout.o: category_fout.cpp test.h
	g++ -c category_fout.cpp

category_report.o: category_report.cpp test.h
	g++ -c category_report.cpp

current_fout.o: current_fout.cpp test.h
	g++ -c current_fout.cpp

current_report.o: current_report.cpp test.h
	g++ -c current_report.cpp

current_value.o: current_value.cpp test.h
	g++ -c current_value.cpp

date_report.o: date_report.cpp test.h
	g++ -c date_report.cpp

getdays.o: getdays.cpp test.h
	g++ -c getdays.cpp

inputfile.o: inputfile.cpp test.h
	g++ -c inputfile.cpp

list_fout.o: list_fout.cpp test.h
	g++ -c list_fout.cpp

list_type.o: list_type.cpp test.h
	g++ -c list_type.cpp

main3.o: main3.cpp test.h
	g++ -c main3.cpp

monthly_fout.o: monthly_fout.cpp test.h
	g++ -c monthly_fout.cpp

monthly_report.o: monthly_report.cpp test.h
	g++ -c monthly_report.cpp

outputfile.o: outputfile.cpp test.h
	g++ -c outputfile.cpp

printopt.o: printopt.cpp test.h
	g++ -c printopt.cpp

remove.o: remove.cpp test.h
	g++ -c remove.cpp

resize.o: resize.cpp test.h
	g++ -c resize.cpp

search_spending.o: search_spending.cpp test.h
	g++ -c search_spending.cpp

swap.o: swap.cpp test.h
	g++ -c swap.cpp

tips.o: tips.cpp test.h
	g++ -c tips.cpp

program:add_spending.o biggest_spending.o category_fout.o category_report.o current_fout.o current_report.o current_value.o date_report.o getdays.o inputfile.o list_fout.o list_type.o main3.o monthly_fout.o monthly_report.o outputfile.o printopt.o remove.o resize.o search_spending.o swap.o tips.o
	g++ add_spending.o biggest_spending.o category_fout.o category_report.o current_fout.o current_report.o current_value.o date_report.o getdays.o inputfile.o list_fout.o list_type.o main3.o monthly_fout.o monthly_report.o outputfile.o printopt.o remove.o resize.o search_spending.o swap.o tips.o -o program
