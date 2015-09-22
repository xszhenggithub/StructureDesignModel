//
// Created by XSZheng on 2015/9/22.
//

#include "FlyweightFactory.h"
#include <iostream>
using namespace std;
using namespace std;
FlyweightFactory::FlyweightFactory()
{
}
FlyweightFactory::~FlyweightFactory()
{
}
Flyweight* FlyweightFactory::GetFlyweight(const string& key)
{
    vector<Flyweight*>::iterator it = _fly.begin();
    for (; it != _fly.end();it++)
    {
        //�ҵ��ˣ���һ���ã� ^_^
        if ((*it)->GetIntrinsicState() == key)
        {
            cout<<"already created by users...."<<endl;
            return *it;
        }
    }
    Flyweight* fn = new ConcreteFlyweight(key);
    _fly.push_back(fn);
    return fn;
}