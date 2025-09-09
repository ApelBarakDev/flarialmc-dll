#pragma once

#include "Command.hpp"

#include "../../Client/Events/EventManager.hpp"
#include "Events/Network/PacketSendEvent.hpp"

class CommandManager {
public:
    static CommandManager instance;
    static std::vector<std::shared_ptr<Command>> Commands;

    static void initialize();
    static void terminate();
    void onPacket(PacketSendEvent &event);
};
