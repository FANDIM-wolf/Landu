

#include <iostream>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Brown = 6,
    LightGray = 7,
    DarkGray = 8,
    LightBlue = 9,
    LightGreen = 10,
    LightCyan = 11,
    LightRed = 12,
    LightMagenta = 13,
    Yellow = 14,
    White = 15
};

string array_text[200] = {}; // array for code of coin
int array_text_for_id[200] = {};
string crypto_log_key[200] = {}; // crypto key for coin

void make_coin(string file_name) {

    
    string text_code;
    int text_id_coin;
    //fill array by text code
    for (int i = 0; i <= 50; i++) {
        text_code += char(rand() % 26 + 0x61);

        array_text[i] = text_code;
    }
     
    
    text_id_coin= rand() % 123 + 1299999;
    array_text_for_id[1] = text_id_coin;

    ofstream outfile(file_name);
    outfile << "@LANDU---" << array_text << array_text_for_id << "___";
    //get descriptor 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Yellow));
    cout << "coin has created"<<endl;
}

int Programm() {
    string command_in_bash;
    
    //get descriptor 
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    /*symbol color - Green. Цвет фона - желтый*/
    SetConsoleTextAttribute(hConsole, (WORD)((Black << 4) | Green));
    cout<<"Landu Bash 2021 @BlessedSoft"<<endl;
    cout << "(landu-bash):";
    cin >> command_in_bash;
    if (command_in_bash == "make") {
        make_coin("coin.txt");
    }
    return 0;
}

int main()
{
    Programm();
    return 0; 
}

