/**
 * @file aetpc_types.h
 * @brief Public Architectural Types & Specifications for AETPC (CUDA/HPC)
 * @author Author / Architect
 * @note Core proprietary execution kernels are restricted under IP protection.
 */

#pragma once

#include <cstdint>

namespace AETPC {

    /**
     * @brief 128-Bit Bitmask Structure (Bitmask128)
     * Composed of dual uint64_t low and high words, enabling direct 
     * management of large-scale graphs up to 128 nodes while bypassing 
     * traditional GPU register limitations.
     */
    struct Bitmask128 {
        uint64_t low;   // Lower 64 bits
        uint64_t high;  // Upper 64 bits
    };

    /**
     * @brief Execution status codes for VRAM pipeline operations.
     */
    enum class EngineStatus : uint8_t {
        SUCCESS = 0,
        VRAM_ALLOCATION_ERROR = 1,
        CONVERGENCE_ACHIEVED = 2,
        STOCHASTIC_STABILITY_LOCKED = 3
    };

} // namespace AETPC
