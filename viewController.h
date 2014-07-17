#pragma once

#include "model.h"
#include "view.h"

class Model;
class Image;

class ViewController{
public:
    ViewController(void);
    virtual ~ViewController();
    void setModelValue(int arg);
    void receiveNotification(int value);
private:
    Image image;
};

