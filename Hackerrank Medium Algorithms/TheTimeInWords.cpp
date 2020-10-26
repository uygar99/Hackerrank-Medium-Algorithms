#include <iostream>
using namespace std;

int main()
{
	int hour,minute;
	cin>>hour;
	cin>>minute;
	string arr[24]={
		"zero", 
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen",
        "twenty",
        "twenty one",
        "twenty two",
        "twenty three"};
    string arr2[30]=    {"one", "two", "three", "four", "five", "six", 
                        "seven", "eight", "nine", "ten", 
                        "eleven", "twelve", "thirteen", 
                        "fourteen","fifteen", "sixteen", 
                        "seventeen", "eighteen", "ninteen", 
                        "twenty", "twenty one", "twenty two", 
                        "twenty three", "twenty four", 
                        "twenty five", "twenty six", 
                        "twenty seven", "twenty eight", 
                        "twenty nine"};

    if(minute==00)
    {
    	cout<<arr[hour]<<" o' clock";
	}
	else if(minute>00 && minute<30 && minute!=15 && minute!=1)
	{
		cout<<arr2[minute-1]<<" minutes past "<<arr[hour];
	}
	else if(minute==1)
	{
		cout<<arr2[minute-1]<<" minute past "<<arr[hour];
	}
	else if(minute==15)
	{
		cout<<"quarter past "<<arr[hour];
	}
	else if(minute==30)
	{
		cout<<"half past "<<arr[hour];
	}
	else if(minute>30 && minute!=45 && minute!=59)
	{
		cout<<arr2[60-minute-1]<<" minutes to "<<arr[hour+1];
	}
	else if(minute==45)
	{
		cout<<"quarter to "<<arr[hour+1];
	}
	else if(minute==1)
	{
		cout<<arr2[60-minute-1]<<" minute to "<<arr[hour+1];
	}
	return 0;
}
