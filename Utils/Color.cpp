#include <Arduino.h>
#include <Color.h>
#include <Vec3.h>

Color Color::shade(int shade)
{
    int s = _shade(shade);
    float multi = s / 1000.0 + 0.5;
    this->mul(multi);
    return this->Clamp(0, 255);
}

int Color::_shade(int shade)
{
    if (shade < 100)
        return 50;
    return round(shade * 10) / 10;
}
Color::operator String()
{
    {
        Vec3 clampVec = Vec3(this->r, this->g, this->b);
        clampVec.Clamp(0, 255);
        String s = "rgb(";
        s += (int)clampVec.r;
        s += ',';
        s += (int)clampVec.g;
        s += ',';
        s += (int)clampVec.b;
        s += ')';
        return s;
    }
}