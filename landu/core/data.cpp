
#include <iostream>
#include <string>
#include <fstream>
#include <thread>



using namespace std;

	void write_down_verison_of_landu_in_text_file(){

		char version_landu_for_text_file[100] = "version:0.0.1";
		ofstream outfile("data.txt");

		outfile << version_landu_for_text_file;
	}
	void get_it_from_file(){
		ifstream infile("data.txt");

        infile>>write_down_verison_of_landu_in_text_file;
        cout<<write_down_verison_of_landu_in_text_file;
	}