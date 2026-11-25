#pragma once

#include <stdint.h>

enum class NodeType : uint8_t
{
    Unknown = 0,

    Bridge = 1,
    Loco = 2,
    Track = 3,

    Signal = 4,
    Switch = 5,
    Crossing = 6,

    Sensor = 7,

    Test = 250
};