#include <iostream>
#include "AbstractionImp.h"
#include "Abstraction.h"

using namespace std;

//�̳��������
int main(int argc, char *argv[]) {
    AbstractionImp *imp = new ConcreteAbstractionImpB();
    Abstraction *abs = new RefinedAbstraction(imp);
    abs->Operation();
    return 0;
}