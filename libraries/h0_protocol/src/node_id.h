#pragma once

#include <stdint.h>

#include "node_types.h"

struct NodeId
{
    NodeType type;

    uint16_t address;
};