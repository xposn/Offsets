#pragma once

#include <cstdint>
namespace Offsets {

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

    namespace EngineChams {
         inline constexpr uintptr_t Cluster = 0x8;
         inline constexpr uintptr_t ClusterHum = 0xF8;
         inline constexpr uintptr_t ClusterEnts = 0x48;
         inline constexpr uintptr_t Queue = 0x10;
         inline constexpr uintptr_t Array = 0x70;
         inline constexpr uintptr_t Fill = 0x11;
         inline constexpr uintptr_t MatFlags = 0x18;
         inline constexpr uintptr_t MatCtl = 0x78;
         inline constexpr uintptr_t Param = 0x1C;
         inline constexpr uintptr_t Flags2 = 0x20;
         inline constexpr uintptr_t Color = 0x24;
         inline constexpr uintptr_t Shader = 0x28;
    }

    namespace Rva {
         inline constexpr uintptr_t RaycastBoundDesc = 0x830af80;
         inline constexpr uintptr_t SoftOcclusionImplCb = 0x6D59170;
         inline constexpr uintptr_t SoftOcclusionTargetCb = 0x6D59198;
         inline constexpr uintptr_t FFlagPhysicsSenderScale = 0x7dfcb88;
    }

    namespace RenderEntityVtable {
         inline constexpr uintptr_t FastClusterEntity = 0x6D5CE38;
         inline constexpr uintptr_t SlimRenderEntity = 0x6D5B540;
         inline constexpr uintptr_t InstancedEntity2 = 0x6D5AB28;
         inline constexpr uintptr_t SmoothClusterEntity = 0x6D5CBB8;
         inline constexpr uintptr_t SmoothClusterGrassEntity = 0x6D5CC30;
         inline constexpr uintptr_t ModelLodEntity = 0x6D5BB78;
    }
}
