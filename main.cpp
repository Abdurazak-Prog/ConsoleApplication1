#include <iostream>
#include "config.h"
#include "secret.h"
using namespace std;

void test()
{
    cout << "cherry-pick concept" << endl;
}

int main()
{
    cout << "Application Started!" << endl;
    cout << "user name : " << DatabaseUsername << endl;
    cout <<"Password: "<< password << endl;
    cout <<"Name: "<< DatabaseName << endl;
    return 0;
}