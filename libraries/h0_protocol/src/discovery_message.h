#pragma once

#include "message_header.h"
#include "version.h"
#include "node_types.h"


struct DiscoveryMessage
{
    MessageHeader header;

    NodeType nodeType;

    unsigned short address;

    Version firmwareVersion;

    char name[32];
};