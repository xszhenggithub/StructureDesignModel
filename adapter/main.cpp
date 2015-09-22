//
// Created by XSZheng on 2015/9/22.
//
#include "Adapter.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
//    Adapter* adt = new Adapter();
    Target *adt = new Adapter();
    adt->Request();
    return 0;
}
