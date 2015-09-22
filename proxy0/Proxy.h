//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_PROXY_H
#define STRUCTUREDESIGNMODEL_PROXY_H


class Subject {
public:
    virtual ~Subject();

    virtual void Request() = 0;

protected:
    Subject();

private:
};

class ConcreteSubject : public Subject {
public:
    ConcreteSubject();

    ~ConcreteSubject();

    void Request();

protected:
private:
};

class Proxy {
public:
    Proxy();

    Proxy(Subject *sub);

    ~Proxy();

    void Request();

protected:
private:
    Subject *_sub;
};


#endif //STRUCTUREDESIGNMODEL_PROXY_H
