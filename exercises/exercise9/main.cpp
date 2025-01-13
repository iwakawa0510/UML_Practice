#include <array>
#include <cstddef>
#include <cmath>

class Point3D {
public:
    explicit Point3D(double x, double y, double z) : coordinates_{x, y, z} {}

    double getX() const { return coordinates_[0]; }
    double getY() const { return coordinates_[1]; }
    double getZ() const { return coordinates_[2]; }

    void translate(double dx, double dy, double dz) {
        coordinates_[0] += dx;
        coordinates_[1] += dy;
        coordinates_[2] += dz;
    }

private:
    std::array<double, 3> coordinates_;
};

class Vector3D {
public:
    explicit Vector3D(const Point3D& start, const Point3D& end)
        : dx_(end.getX() - start.getX()),
          dy_(end.getY() - start.getY()),
          dz_(end.getZ() - start.getZ()) {}

    double getMagnitude() const {
        return std::sqrt(dx_ * dx_ + dy_ * dy_ + dz_ * dz_);
    }

private:
    double dx_;
    double dy_;
    double dz_;
};

void processPoints(const Point3D& p1, const Point3D& p2) {
    Vector3D v(p1, p2);
    double magnitude = v.getMagnitude();
    // 処理を続行...
}
