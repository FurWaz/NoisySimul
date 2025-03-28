#pragma once
#include <string>
#include "Transform.hpp"

class GameObject
{
public:
    GameObject();
    GameObject(const std::string& name);
    virtual ~GameObject();

    const std::string& GetName() const { return name; }
    void SetName(const std::string& name) { this->name = name; }
    
    Transform& GetTransform() { return m_transform; }

private:
    std::string name;
    Transform m_transform;
};
