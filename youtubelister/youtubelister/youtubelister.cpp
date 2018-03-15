// youtubelister.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
 string getcontent;
 ifstream openfile ("G://blackarknuggets.txt");
 ofstream writefile;
 if(openfile.is_open())
 {
	 while (! openfile.eof())
	 {
		 openfile >> getcontent;
	 }
 }
 openfile.close();
 writefile.open("G://blackarknuggetslist.txt");
 writefile << getcontent;
 writefile.close();

 system ("PAUSE");

	return 0;
}

