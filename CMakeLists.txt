cmake_minimum_required(VERSION 3.3)
project(StructureDesignModel)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(BRIDGE_SOURCE_FILES bridge/main.cpp bridge/Abstraction.cpp bridge/Abstraction.h bridge/AbstractionImp.cpp bridge/AbstractionImp.h)
add_executable(Bridge ${BRIDGE_SOURCE_FILES})

set(ADAPTER_SOURCE_FILES adapter/main.cpp adapter/Adapter.cpp adapter/Adapter.h proxy0/main.cpp proxy0/Proxy.cpp proxy0/Proxy.h)
add_executable(Adapter ${ADAPTER_SOURCE_FILES})

set(ADAPTER1_SOURCE_FILES adapter1/main.cpp adapter1/Adapter.cpp adapter1/Adapter.h)
add_executable(Adapter1 ${ADAPTER1_SOURCE_FILES})

set(DECORATOR_SOURCE_FILES decorator1/main.cpp decorator1/Decorator.cpp decorator1/Decorator.h)
add_executable(decorator1 ${DECORATOR_SOURCE_FILES})

set(COMPOSITE_SOURCE_FILES composite/main.cpp composite/Component.cpp composite/Component.h composite/Composite.cpp composite/Composite.h composite/Leaf.cpp composite/Leaf.h)
add_executable(composite ${COMPOSITE_SOURCE_FILES})

set(FLYWEIGHT_SOURCE_FILES flyweight/main.cpp flyweight/Flyweight.cpp flyweight/Flyweight.h flyweight/FlyweightFactory.cpp flyweight/FlyweightFactory.h)
add_executable(flyweight ${FLYWEIGHT_SOURCE_FILES})

set(FACADE_SOURCE_FILES facade/main.cpp facade/Facade.cpp facade/Facade.h)
add_executable(facade ${FACADE_SOURCE_FILES})

set(PROXY_SOURCE_FILES proxy0/main.cpp proxy0/Proxy.cpp proxy0/Proxy.h)
add_executable(proxy0 ${PROXY_SOURCE_FILES})