

#include <iostream>
#include <string>
#include <fstream>
#include "coin.cpp"

using namespace std;

//create txt file for user data

void create_txt_file_user_data() {

string name_user_data , password_user_data , answer1;

//variables to save user data
string user_name , user_password;

cout<<"create file:";
cin>>answer1;
if(answer1 == "yes"){
  ofstream outfile("data.txt");
  cout<<"Enter your name:";
  cin>>name_user_data;
  cout<<"Enter your password:";
  cin>>password_user_data;
  outfile<<name_user_data;
  outfile<<password_user_data;
}
else {
	cout<<"GO"<<endl;
}

user_name = name_user_data;
user_password = password_user_data;

}


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
if(command=="--version_landu"){
	//open file and show version
    cout<<"version:0.0.1"<<endl;
    command_line_console();
}
if(command=="log_in"){
	create_txt_file_user_data(); // create user data;
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