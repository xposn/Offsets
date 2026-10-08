#pragma once

#include <cstdint>
namespace Offsets {

    namespace WorldRoot {
         inline constexpr uintptr_t RaycastBoundDesc = 0x8364bb0;
         inline constexpr uintptr_t RaycastBoundFn = 0x90;
    }

    namespace Instance {
         inline constexpr uintptr_t AttributeContainer = 0x38;
         inline constexpr uintptr_t AttributeList = 0x10;
    }

    namespace Attribute {
         inline constexpr uintptr_t Key = 0x0;
         inline constexpr uintptr_t Name = 0x8;
         inline constexpr uintptr_t Value = 0x8;
         inline constexpr uintptr_t Stride = 0x58;
    }

    namespace BasePart {
         inline constexpr uintptr_t InitialSize = 0x218;
    }

    namespace FileMeshData {
         inline constexpr uintptr_t LodPtr = 0x1e8;
         inline constexpr uintptr_t LodCount = 0x1f0;
    }

    namespace Primitive {
         inline constexpr uintptr_t EdgeList = 0x50;
    }

    namespace FastCluster {
         inline constexpr uintptr_t Entities = 0x48;
         inline constexpr uintptr_t Humanoid = 0xF8;
    }

    namespace FastClusterEntity {
         inline constexpr uintptr_t ContextPtr = 0x8;
         inline constexpr uintptr_t RenderQueueId = 0x10;
         inline constexpr uintptr_t AlphaByte = 0x14;
         inline constexpr uintptr_t MaterialPtr = 0x20;
         inline constexpr uintptr_t DecalMaterialPtr = 0x48;
         inline constexpr uintptr_t TechniqueArrayPtr = 0x70;
         inline constexpr uintptr_t MaterialCtlPtr = 0x78;
         inline constexpr uintptr_t PrimitiveIndexArrayPtr = 0x80;
         inline constexpr uintptr_t BBoxMinX = 0x98;
         inline constexpr uintptr_t BBoxMinY = 0x9c;
         inline constexpr uintptr_t BBoxMinZ = 0xa0;
         inline constexpr uintptr_t BBoxMaxX = 0xa4;
         inline constexpr uintptr_t BBoxMaxY = 0xa8;
         inline constexpr uintptr_t BBoxMaxZ = 0xac;
    }

    namespace MaterialLayer {
         inline constexpr uintptr_t FillModeByte = 0x11;
         inline constexpr uintptr_t MatFlags = 0x18;
         inline constexpr uintptr_t Param = 0x1c;
         inline constexpr uintptr_t Flags2 = 0x20;
         inline constexpr uintptr_t ColorData = 0x24;
         inline constexpr uintptr_t Shader = 0x28;
         inline constexpr uintptr_t Stride = 0x88;
    }

    namespace Rva {
         inline constexpr uintptr_t SoftOcclusionImplCb = 0x6D6D118;
         inline constexpr uintptr_t SoftOcclusionTargetCb = 0x6D6D0F0;
    }

    namespace RenderEntityVtable {
         inline constexpr uintptr_t FastClusterEntity = 0x6D70CE8;
         inline constexpr uintptr_t SlimRenderEntity = 0x6D6F3F0;
         inline constexpr uintptr_t InstancedEntity2 = 0x6D6EB58;
         inline constexpr uintptr_t SmoothClusterEntity = 0x6D70A50;
         inline constexpr uintptr_t SmoothClusterGrassEntity = 0x6D70AD0;
         inline constexpr uintptr_t ModelLodEntity = 0x6D6FA80;
    }
}
