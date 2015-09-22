//
// Created by XSZheng on 2015/9/22.
//

#ifndef STRUCTUREDESIGNMODEL_COMPOSITE_H
#define STRUCTUREDESIGNMODEL_COMPOSITE_H

#include "Component.h"
#include <vector>

using namespace std;

class Composite : public Component {
public:
    Composite();

    ~Composite();

public:
    void Operation();

    void Add(Component *com);

    void Remove(Component *com);

    Component *GetChild(int index);

protected:
private:
    vector<Component *> comVec;
};

#endif //STRUCTUREDESIGNMODEL_COMPOSITE_H
