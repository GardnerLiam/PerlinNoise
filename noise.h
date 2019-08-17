#include <array>

class Noise {
public:
    double noise(double x, double y, double z);
    std::array<int, 512> p;
    //void modify(std::array<int,512> perm);
    void init();
private:
    double fade(double t);
    double lerp(double t, double a, double b);
    double grad(int hash, double x, double y, double z);
};
