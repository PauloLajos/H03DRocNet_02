#pragma once

#include "command_message.h"

struct LocoCommandMessage
{
    CommandMessage command;

    unsigned char speed;

    bool forward;

    unsigned char lights;
};