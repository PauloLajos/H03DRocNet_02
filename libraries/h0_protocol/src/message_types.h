#pragma once

#include <stdint.h>

enum class MessageType : uint8_t
{
    Unknown = 0,

    Command = 1,
    Status = 2,
    Telemetry = 3,

    Discovery = 10,

    OTA = 20,

    Debug = 250
};