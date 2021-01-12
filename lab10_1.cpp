#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main(){
    int i;
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    srand(time(0));
    cin.get();
    i = rand()%9;
    cin.get();
    cout << "You will get " <<grade[i]<< " in this 261102.";

    return 0;
}