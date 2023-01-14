#include <Arduino.h>
#include "<Vec3.h>"
class Color : public Vec3
{
public:
    Color(int r, int g, int b) : Vec3(r, g, b){};
    Color(int value) : Vec3(value){};
    Color() : Vec3(0, 0, 0){};
    Color(Vec3 v) : Vec3(v){};
    operator String();
    Color shade(int shade);

private:
    static int _shade(int shade);
};