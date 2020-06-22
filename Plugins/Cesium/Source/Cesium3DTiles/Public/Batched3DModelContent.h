#pragma once

#include <gsl/span>
#include "TileContent.h"
#include "tiny_gltf.h"

namespace Cesium3DTiles {

    class Batched3DModelContent : public TileContent {
    public:
        Batched3DModelContent(const Tile& tile, const gsl::span<const uint8_t>& data);

        const tinygltf::Model& gltf() const { return this->_gltf; }

    private:
        tinygltf::Model _gltf;
    };

}
