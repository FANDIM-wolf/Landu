

#include <iostream>
#include <string>
#include <fstream>
#include "coin.cpp"

using namespace std;



//launch main functions 
int  main() {


//first launch functions


//variables for command line 
string command;
bool yes;



//start command landu
cout<<"\t\t\tLandu v0.0.1"<<endl;

//logo 
for(int logo_ci = 0; logo_ci<=15;logo_ci++){
	cout<<"***"<<endl;
}
cout<<"**************"<<endl;
cout<<"**************"<<endl;

//logo end 




cout<<"command_line_landu$:";
cin>>command;
if(command=="--version"){
	//open file and show version
    cout<<"version:0.0.1"<<endl;
}

coin star;
star.start();

	return 0;
}