#include <iostream>
#include "config.h"
#include "secret.h"
using namespace std;

int main()
{
    cout << "Application Started!" << endl;
    cout << "user name : " << DatabaseUsername << endl;
    cout <<"Pasword: "<< pasword << endl;
    cout <<"Name: "<< DatabaseName << endl;
    return 0;
}