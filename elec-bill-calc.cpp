#include <iostream>
#include <curses.h>
int main(){
    int unit;
    std::cout << "enter the unit of usage:";
    std::cin >> unit;
    if(unit <= 100){
        std::cout << "bill amount is: ";
        std::cout << unit*5;
    }
    else if(unit<=200){
        std::cout<<"bill amount is: ";
        std::cout<<(100*5)+(unit-100)*7;
    }
    else if(unit<=300){
        std::cout<<"bill amount is: ";
        std::cout<<(100*5)+(100*7)+(unit-200)*10;
    }
    else if(unit>300){
        std::cout<<"bill amount is: ";
        std::cout<<(100*5)+(100*7)+(100*10)+(unit-300)*15;
    }
    else{
        std::cout<<"bill amount is: ";
        std::cout<<"NULL";
    }
    return 0;
}
