#pragma once
#include <vector>
#include "viewController.h"

class ViewController;

#define DECLARE_SINGLETON(S) \
public: \
    static S& getInstance(){\
        static S instance; \
        return instance; \
    } \
private: \
    S() {}; \
    S(S const&); \
    void operator=(S const&); \

class Model{
    //Models must always be a singleton
    DECLARE_SINGLETON(Model)
public:
    void updateEntity(int value);
    void addViewController(ViewController* viewController);
    void removeViewController(ViewController* viewController);
    int getValue(void)const;
private:
    void notifyChange(void);

    int entity;
    std::vector<ViewController*> viewControllerList;
};

