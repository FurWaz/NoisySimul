#pragma once

class Color
{
public:
    Color();
    Color(float r, float g, float b);
    Color(float r, float g, float b, float a);
    virtual ~Color();

    Color operator+(const Color& other) const;
    Color operator-(const Color& other) const;
    Color operator*(float scalar) const;
    Color operator/(float scalar) const;
    bool operator==(const Color& other) const;
    bool operator!=(const Color& other) const;

    Color mix(const Color& other, float amount) const;

    float r, g, b, a;
};
