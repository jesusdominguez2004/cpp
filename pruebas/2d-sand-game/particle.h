// 2D Sand Game: by "PolarsBear"
#include <string>
#include "color.h"

class Particle {
    public:
        Particle(int x, int y, Color3 color, std::string name, int id, int density);
        Particle();
        static Particle Air(int x, int y);
        static Particle Sand(int x, int y);
        static Particle Water(int x, int y);
        void update();
        void draw();
        bool fall();
        bool liquidSpread();
        bool floatUp();
        int x;
        int y;
        Color3 color;
        std::string name;
        int id;
        int density;
};
