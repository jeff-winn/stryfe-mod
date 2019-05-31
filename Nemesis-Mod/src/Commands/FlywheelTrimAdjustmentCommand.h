#ifndef FLYWHEEL_TRIM_ADJUSTMENT_COMMAND_H
#define FLYWHEEL_TRIM_ADJUSTMENT_COMMAND_H

#include "../Controllers/FlywheelController.h"
#include "Command.h"

// Provides a command which handles flywheel trim adjustment changes.
class FlywheelTrimAdjustmentCommand : public Command {
    public:
        FlywheelTrimAdjustmentCommand(FlywheelController* controller);

        // Handles the packet.
        void handle(Packet_t packet) override;

    private:
        FlywheelController* m_controller;
};

#endif