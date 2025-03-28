#pragma once
#include <glm/glm.hpp>
#include <glm/gtc/quaternion.hpp>

class Transform
{
public:
    Transform() {}
    virtual ~Transform() {}

    glm::vec3 getPosition() const { return m_position; }
    void setPosition(const glm::vec3& position) { m_position = position; updateMatrix(); }

    glm::quat getRotation() const { return m_rotation; }
    void setRotation(const glm::quat& rotation) { m_rotation = rotation; updateMatrix(); }

    glm::vec3 getScale() const { return m_scale; }
    void setScale(const glm::vec3& scale) { m_scale = scale; updateMatrix(); }

    glm::mat4 getModelMatrix() const { return m_modelMatrix; }

private:
    void updateMatrix() 
    {
        m_modelMatrix = glm::translate(glm::mat4(1.0f), m_position) * glm::mat4_cast(m_rotation) * glm::scale(glm::mat4(1.0f), m_scale);
    }

    glm::vec3 m_position;
    glm::quat m_rotation;
    glm::vec3 m_scale;

    glm::mat4 m_modelMatrix;
};
