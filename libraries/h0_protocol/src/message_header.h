#pragma once

#include <stdint.h>

#include "node_id.h"

struct MessageHeader
{
    uint8_t version;

    MessageType type;

    NodeId sender;

    NodeId receiver;

    uint16_t payloadLength;
};
