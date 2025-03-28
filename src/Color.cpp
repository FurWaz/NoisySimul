#include "Color.hpp"

Color::Color()
    : r(0.0f), g(0.0f), b(0.0f), a(1.0f)
{
}

Color::Color(float r, float g, float b)
    : r(r), g(g), b(b), a(1.0f)
{
}

Color::Color(float r, float g, float b, float a)
    : r(r), g(g), b(b), a(a)
{
}

Color::~Color()
{
}

Color Color::operator+(const Color& other) const
{
    return Color(r + other.r, g + other.g, b + other.b, a + other.a);
}

Color Color::operator-(const Color& other) const
{
    return Color(r - other.r, g - other.g, b - other.b, a - other.a);
}

Color Color::operator*(float scalar) const
{
    return Color(r * scalar, g * scalar, b * scalar, a * scalar);
}

Color Color::operator/(float scalar) const
{
    return Color(r / scalar, g / scalar, b / scalar, a / scalar);
}

bool Color::operator==(const Color& other) const
{
    return r == other.r && g == other.g && b == other.b && a == other.a;
}

bool Color::operator!=(const Color& other) const
{
    return !(*this == other);
}

Color Color::mix(const Color& other, float amount) const
{
    return Color(
        r + (other.r - r) * amount,
        g + (other.g - g) * amount,
        b + (other.b - b) * amount,
        a + (other.a - a) * amount
    );
}
