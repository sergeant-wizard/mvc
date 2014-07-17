#include "model.h"

void Model::updateEntity(int value){
    entity=value;
    notifyChange();
}

void Model::addViewController(ViewController* viewController){
    viewControllerList.push_back(viewController);
}

void Model::removeViewController(ViewController* viewController){
    std::vector<ViewController*>::iterator it=find(
        viewControllerList.begin(),
        viewControllerList.end(),
        viewController
    );
    if(it==viewControllerList.end())
        return;
    viewControllerList.erase(it);
}

int Model::getValue(void)const{
    return entity;
}

void Model::notifyChange(){
    for(unsigned i=0;i<viewControllerList.size();i++)
        viewControllerList[i]->receiveNotification(entity);
}

