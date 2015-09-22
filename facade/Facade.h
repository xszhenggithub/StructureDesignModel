//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_FACADE_H
#define STRUCTUREDESIGNMODEL_FACADE_H


class Subsystem1 {
public:
    Subsystem1();

    ~Subsystem1();

    void Operation();

protected:
private:
};

class Subsystem2 {
public:
    Subsystem2();

    ~Subsystem2();

    void Operation();

protected:
private:
};

class Facade {
public:
    Facade();

    ~Facade();

    void OperationWrapper();

protected:
private:
    Subsystem1 *_subs1;
    Subsystem2 *_subs2;
};


#endif //STRUCTUREDESIGNMODEL_FACADE_H
