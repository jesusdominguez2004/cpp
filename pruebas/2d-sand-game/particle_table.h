// 2D Sand Game: by "PolarsBear"
#include <tuple>
#include <map>
#include "particle.h"

class ParticleTable {
    public:
        ParticleTable();
        ParticleTable(int size);

        Particle get(int x, int y);
        void set(int x, int y, Particle value);

        void update();
        void draw();

    private:
        std::map <std::pair<int, int>, Particle> table;
};
