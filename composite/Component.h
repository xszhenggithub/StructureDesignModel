//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_COMPONENT_H
#define STRUCTUREDESIGNMODEL_COMPONENT_H

class Component {
public:
    Component();

    virtual ~Component();

public:
    virtual void Operation() = 0;

    virtual void Add(const Component &);

    virtual void Remove(const Component &);

    virtual Component *GetChild(int);

protected:
private:
};


#endif //STRUCTUREDESIGNMODEL_COMPONENT_H
