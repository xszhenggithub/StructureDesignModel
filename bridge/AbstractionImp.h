//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_ABSTRACTIONIMP_H
#define STRUCTUREDESIGNMODEL_ABSTRACTIONIMP_H


class AbstractionImp {
public:
    virtual ~AbstractionImp();

    virtual void Operation() = 0;

protected:
    AbstractionImp();

private:
};

class ConcreteAbstractionImpA : public AbstractionImp {
public:
    ConcreteAbstractionImpA();

    ~ConcreteAbstractionImpA();

    virtual void Operation();

protected:
private:
};

class ConcreteAbstractionImpB : public AbstractionImp {
public:
    ConcreteAbstractionImpB();

    ~ConcreteAbstractionImpB();

    virtual void Operation();

protected:
private:
};

#endif //STRUCTUREDESIGNMODEL_ABSTRACTIONIMP_H
