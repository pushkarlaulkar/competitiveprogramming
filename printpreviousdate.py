#This program prints one date minus of the date provided to the user.
#Give input as
#1	no of testcases
#24 April 1994	test cases
import datetime
from datetime import date, timedelta
n = input();
while n > 0:
	date = raw_input(); day, month, year = date.split();
	assert(int(day) > 0 & int(day) < 31)
	#print(day+" "+month+" "+year)
	map = {'January':1, 'February':2, 'March':3, 'April':4, 'May':5, 'June':6, 'July':7, 'August':8, 'September':9, 		'October':10, 'November':11, 'December':12}
	mlist = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 			'December']
	mydate = (datetime.date(int(year), map[month], int(day)))  #year, month, day
	#mydate =mydate+datetime.timedelta(years=40)
	mydate = mydate - datetime.timedelta(days = 1)
	mydate = mydate.isoformat();
	#print(mydate)
	year, month, day = mydate.split('-')
	#print(year+" "+month+" "+day)
	#print(mydate.strftime("%Y-%m-%d"))
	#year = mydate.strftime("%Y");
	if(int(month) < 10):	month = month.strip("0");
	#day = mydate.strftime("%d");
	if(int(day) < 10):	day = day.strip("0")
	#print(month);
	print(day + " " + mlist[int(month) - 1] + " " + year);
	n -= 1;
