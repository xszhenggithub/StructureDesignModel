//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_ADAPTER_H
#define STRUCTUREDESIGNMODEL_ADAPTER_H


class Target {
public:
    Target();

    virtual ~Target();

    virtual void Request();

protected:
private:
};

class Adaptee {
public:
    Adaptee();

    ~Adaptee();

    void SpecificRequest();

protected:
private:
};

class Adapter : public Target, private Adaptee {
public:
    Adapter();

    ~Adapter();

    void Request();

protected:
private:
};


#endif //STRUCTUREDESIGNMODEL_ADAPTER_H
