#include "Jazz/Core/Layer.h"

#include <utility>

namespace Jazz {

    Layer::Layer(std::string debugName)
        : m_DebugName(std::move(debugName)) {
    }

}// namespace Jazz