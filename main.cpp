#include <iostream>
#include <string>
#include <cmath>
#include "parseur.hpp"

using namespace std;

int main(int argc, char** argv){
    clear();
    int choice = 1;
    string input;
    size_t pos = 0;

    cout << "\n\033[33m~~~~~~~~~~~~~\033[0m \033[33mBIENVENUE\tDANS\t >>>>>|\033[0m  STRING-OPERATION V-02     \033[33m|<<<<< ~~~~~~~~~~~~~~~~~~~~\033[0m\n";
    cout<<""<<endl;
    cout<<"entrer votre expression mathematique: \033[33m";
    getline(cin,input);
    cout<<"\033[0m"<<endl;
    double output = parseExpression(input, pos);
    cout << "\033[32mResultat\033[0m \t: \033[31m" << output <<"\033[0m"<< endl;
    cout<<""<<endl;
    

    return 0;
}

