//
// Created by XSZheng on 2015/9/22.
//

#include <iostream>
#include "Composite.h"
#include "Component.h"

Composite::Composite() {
//vector<Component*>::iterator itend = comVec.begin();
}

Composite::~Composite() {
}

void Composite::Operation() {
    vector<Component *>::iterator comIter = comVec.begin();
    for (; comIter != comVec.end(); comIter++) {
        (*comIter)->Operation();
    }
}

void Composite::Add(Component *com) {
    comVec.push_back(com);
}

void Composite::Remove(Component *com) {
    for (auto itr = comVec.begin(); itr != comVec.end(); itr++){
        if (*itr == com){
            comVec.erase(itr);
            break;
        }
    }
}

Component *Composite::GetChild(int index) {
    return comVec[index];
}
