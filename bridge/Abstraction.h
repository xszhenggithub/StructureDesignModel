//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_ABSTRACTION_H
#define STRUCTUREDESIGNMODEL_ABSTRACTION_H


class AbstractionImp;

class Abstraction {
public:
    virtual ~Abstraction();

    virtual void Operation() = 0;

protected:
    Abstraction();

private:
};

class RefinedAbstraction : public Abstraction {
public:
    RefinedAbstraction(AbstractionImp *imp);

    ~RefinedAbstraction();

    void Operation();

protected:
private:
    AbstractionImp *_imp;
};


#endif //STRUCTUREDESIGNMODEL_ABSTRACTION_H
