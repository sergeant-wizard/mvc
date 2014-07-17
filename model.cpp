#include <iostream>

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
    DECLARE_SINGLETON(Model)
};

int main(void){
    Model *model=&Model::getInstance();
    return 0;
}

