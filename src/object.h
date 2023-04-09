#ifndef OBJECT_H
#define OBJECT_H

#include "component.h"

#include <memory>
#include <vector>

class Object
{
public:

    void AddComponent(std::shared_ptr<Component> component);

    template<typename ComponentType>
    std::shared_ptr<ComponentType> GetComponent();

    template<typename ComponentType>
    std::vector<std::shared_ptr<ComponentType>> GetComponents();

};

#endif