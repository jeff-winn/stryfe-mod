#ifndef CHANGE_CONFIGURATION_SETTING_COMMAND_H
#define CHANGE_CONFIGURATION_SETTING_COMMAND_H

#include "ConfigurationCommand.h"

// Provides a command which changes configuration settings.
class ChangeConfigurationSettingCommand : public ConfigurationCommand {
    public:
        ChangeConfigurationSettingCommand(uint8_t subtype);

    protected:
        void handleImpl(uint8_t* data, uint16_t len) override;

        int getInt32ValueFromPacket(uint8_t* data);
        float getFloatValueFromPacket(uint8_t* data);

    private:
        uint8_t m_subtype;
};

#endif