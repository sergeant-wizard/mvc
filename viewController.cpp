#include "viewController.h"

ViewController::ViewController(){
    Model::getInstance().addViewController(this);
}

ViewController::~ViewController(){
    Model::getInstance().removeViewController(this);
}

void ViewController::setModelValue(int arg){
    Model::getInstance().updateEntity(arg);
}

void ViewController::receiveNotification(int value){
    image.renderImage(value);
}

