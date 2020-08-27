

#include <iostream>
#include <string>
#include <fstream>
#include "coin.cpp"

using namespace std;

//commandline console to mine currency
void command_line_console(){
//variables for command line 

bool yes;
bool status_for_user;	
string command;

cout<<"command_line_landu$:";
cin>>command;
if(command=="--version"){
	//open file and show version
    cout<<"version:0.0.1"<<endl;
    command_line_console();

}
if(command==""){
	//open file and show version
    cout<<"version:0.0.1"<<endl;
    command_line_console();
}


}


//launch main functions 
int  main() {


//first launch functions


//start command landu
cout<<"\t\t\tLandu v0.0.1"<<endl;

//logo 
for(int logo_ci = 0; logo_ci<=15;logo_ci++){
	cout<<"***"<<endl;
}
cout<<"**************"<<endl;
cout<<"**************"<<endl;

//logo end 


command_line_console();



coin star;
star.start();

	return 0;
}