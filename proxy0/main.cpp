//
// Created by XSZheng on 2015/9/22.
//

#include "Proxy.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Subject *sub = new ConcreteSubject();
    Proxy *p = new Proxy(sub);
    p->Request();
    return 0;
}