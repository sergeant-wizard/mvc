#pragma once
#include "viewController.h"

class ViewController;

class View{
};

class Image: public View{
public:
    void renderImage(int number){
    };
};

class Button: public View{
    public:
    void onButtonOnePress(void){
        //ViewControllers are created / destroyed upon user operations
        ViewController vc;
        vc.setModelValue(1);
    }
};

