#include <memory>

class Resource {
public:
    void use() { /* リソースの使用 */ }
};

void processResource() {
    std::unique_ptr<Resource> resource = std::make_unique<Resource>();
    resource->use();
    // リソースは自動的に解放される
}
