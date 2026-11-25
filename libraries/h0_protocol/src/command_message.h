#pragma once

#include "message_header.h"
#include "command_types.h"

struct CommandMessage
{
    MessageHeader header;

    CommandType command;
};