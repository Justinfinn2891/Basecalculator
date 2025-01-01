#include <iostream>
#include <math.h>
#include <string>
using namespace std;

// PROJECT TO DO LIST:
// ADD A BASE 16 FUNCTION FOR HEXIDECIMAL
// TURN IN A RESEARCH PAPER FOR BINARY CONVERSIONS FOR SIMPLE DISCRETE MATH PROJECT
// ADD GUI TO DISPLAY CONVERSIONS AND INPUTS / OUTPUTS
// SEPARATE PROJECT INTO MULTIPLE FILES TO TRANSFER FLOW 
void basetwoconvert();
void basetenconvert();

string baseconversion(int user);
int basetenconversion(string user);
int main()
{
    int base = 0;
    char player_enable = 'a'; 
    cout << "Welcome to the simple base conversion!" << endl;
    while(toupper(player_enable) != 'N'){ 
        cout << "What is the base you want to use?";
        cin >> base;
        if(base == 2)
            basetwoconvert();
        if(base == 10)
            basetenconvert();
        cout << endl << "Nice! Would you like to convert more? (Y/N)" << endl;
        cin >> player_enable;
    }

    return 0; 
}

void basetwoconvert()
{
    
    int user = 0; 
    cout << "What number (in base 10 decimal) would you want to convert?";
    cin >> user;
    cout << "That is " << baseconversion(user) << " in basetwo";
}

void basetenconvert()
{
    string user = "";
    cout << "What number (in base 2 decimal) would you want to convert?";
    cin >> user;
    cout << "That is " << basetenconversion(user) << " in baseten";
}



string baseconversion(int user){

    string binary = "";

    for(int i = 8; i >=0; i--)
    {  
        if((user - pow(2, i)) < 0)
            binary+= '0';
        else{
            binary += '1';
            user = user - pow(2, i);
        }
    }
    return binary;
}

int basetenconversion(string user){

    int decimal = 0;

    for(int i = user.length(); i >= 0; i--){
        if(user[i] == '0')
            continue;
        if(user[i] == '1')
            decimal += pow(2, i);
    }
    return decimal; 
}
