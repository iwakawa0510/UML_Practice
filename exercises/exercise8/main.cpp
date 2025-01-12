#include <ara/core/vector.h>
#include <ara/core/array.h>

struct Point3D {
    float x;
    float y;
    float z;
};

class ImageProcessor {
public:
    using PointCloud = ara::core::Array<Point3D, 1024>;
    using Image = ara::core::Array<ara::core::Array<uint8_t, 640>, 480>;

    static PointCloud convertImageToPointCloud(const Image& image) {
        PointCloud pointCloud;
        std::size_t pointIndex = 0;

        for (std::size_t y = 0; y < image.size(); ++y) {
            for (std::size_t x = 0; x < image[y].size(); ++x) {
                if (pointIndex < pointCloud.size()) {
                    float depth = static_cast<float>(image[y][x]) / 255.0f;
                    pointCloud[pointIndex] = {
                        static_cast<float>(x),
                        static_cast<float>(y),
                        depth * 10.0f  // 仮の深度スケール
                    };
                    ++pointIndex;
                }
            }
        }

        return pointCloud;
    }
};
