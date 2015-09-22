//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_DECORATOR_H
#define STRUCTUREDESIGNMODEL_DECORATOR_H

class Component {
public:
    virtual ~Component();

    virtual void Operation();

protected:
    Component();

private:
};

class ConcreteComponent : public Component {
public:
    ConcreteComponent();

    ~ConcreteComponent();

    void Operation();

protected:
private:
};

class Decorator : public Component {
public:
    Decorator(Component *com);

    virtual ~Decorator();

    void Operation();

protected:
    Component *_com;
private:
};

class ConcreteDecorator : public Decorator {
public:
    ConcreteDecorator(Component *com);

    ~ConcreteDecorator();

    void Operation();

    void AddedBehavior();

protected:
private:
};


#endif //STRUCTUREDESIGNMODEL_DECORATOR_H
