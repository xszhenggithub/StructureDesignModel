//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_FLYWEIGHTFACTORY_H
#define STRUCTUREDESIGNMODEL_FLYWEIGHTFACTORY_H


#include "Flyweight.h"
#include <string>
#include <vector>

using namespace std;

class FlyweightFactory {
public:
    FlyweightFactory();

    ~FlyweightFactory();

    Flyweight *GetFlyweight(const string &key);

protected:
private:
    vector<Flyweight *> _fly;
};

#endif //STRUCTUREDESIGNMODEL_FLYWEIGHTFACTORY_H
