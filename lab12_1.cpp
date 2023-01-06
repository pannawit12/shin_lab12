#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main(){
    string b,grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    getline(cin,b);
    getline(cin,b);
    getline(cin,b);
    int n=rand()%9;
    if(n==0) grade="A";
    else if(n==1) grade="B+";
    else if(n==2) grade="B";
    else if(n==3) grade="C+";
    else if(n==4) grade="C";
    else if(n==5) grade="D+";
    else if(n==6) grade="D";
    else if(n==7) grade="F";
    else if(n==8) grade="W";
    cout << "You will get "<< grade <<" in this 261102.";
}