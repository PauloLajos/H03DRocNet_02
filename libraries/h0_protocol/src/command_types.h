#pragma once

enum class CommandType
{
    Unknown = 0,

    SetSpeed = 1,

    SetLights = 2,

    EmergencyStop = 3,

    Reboot = 10,

    ConfigUpdate = 20
};