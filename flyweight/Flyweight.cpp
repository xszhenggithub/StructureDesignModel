//
// Created by XSZheng on 2015/9/22.
//

#include "Flyweight.h"
#include <iostream>

using namespace std;

Flyweight::Flyweight(string intrinsicState) {
    this->_intrinsicState = intrinsicState;
}

Flyweight::~Flyweight() {
}

void Flyweight::Operation(const string &extrinsicState) {
}

string Flyweight::GetIntrinsicState() {
    return this->_intrinsicState;
}

ConcreteFlyweight::ConcreteFlyweight(string intrinsicState) : Flyweight(intrinsicState) {
    cout << "ConcreteFlyweight Build....." << intrinsicState << endl;
}

ConcreteFlyweight::~ConcreteFlyweight() {
}

void ConcreteFlyweight::Operation(const string &extrinsicState) {
    cout << "ConcreteFlyweight:[" << this->GetIntrinsicState() << "][" << extrinsicState << "]" << endl;
}