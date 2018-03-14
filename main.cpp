/* 
 * File:   main.cpp
 * Author: shivam
 *
 * Created on 13 March, 2018, 11:56 PM
 */

#include <iostream>
#include "../Question/element in order.h"
#include "../Question/segregate 0 and 1.h"

using namespace std;

/*
 * 
 */
int main() {
    Element_in_order e;
    Segregate_0_and_1 s;
    cout<<"this is for seperating the positive and negative number-"<<endl;
    e.accept();
    e.display();
    e.seperate();
    cout<<"this is for seperating the 0 and 1 -"<<endl;
    s.acceptdata();
    s.displaydata();
    s.segregate();
    return 0;
}

