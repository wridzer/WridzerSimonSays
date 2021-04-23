//
// Created by wridz on 23/04/2021.
//

#include "ScreenClear.h"
#include <iostream>
#include <windows.h>

using namespace std;

ScreenClear::ScreenClear() {

}

ScreenClear::~ScreenClear() {

}

void ScreenClear::ClearScreen() {
    Sleep(3000);
    cout << string( 100, '\n' );
}