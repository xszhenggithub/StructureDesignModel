//
// Created by XSZheng on 2015/9/22.
//

#include <iostream>
#include "Facade.h"

using namespace std;
int main(int argc,char* argv[])
{
    Facade* f = new Facade();
    f->OperationWrapper();
    return 0;
}