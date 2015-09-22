//
// Created by XSZheng on 2015/9/22.
//

#include "Adapter.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Adaptee *ade = new Adaptee;
    Target *adt = new Adapter(ade);
    adt->Request();
    return 0;
}