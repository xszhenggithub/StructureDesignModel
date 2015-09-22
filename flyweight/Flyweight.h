//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_FLYWEIGHT_H
#define STRUCTUREDESIGNMODEL_FLYWEIGHT_H

#include <string>

using namespace std;

class Flyweight {
public:
    virtual ~Flyweight();

    virtual void Operation(const string &extrinsicState);

    string GetIntrinsicState();

protected:
    Flyweight(string intrinsicState);

private:
    string _intrinsicState;
};

class ConcreteFlyweight : public Flyweight {
public:
    ConcreteFlyweight(string intrinsicState);

    ~ConcreteFlyweight();

    void Operation(const string &extrinsicState);

protected:
private:
};

#endif //STRUCTUREDESIGNMODEL_FLYWEIGHT_H
