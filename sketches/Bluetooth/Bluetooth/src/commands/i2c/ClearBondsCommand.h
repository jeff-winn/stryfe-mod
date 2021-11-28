#ifndef CLEAR_BONDS_COMMAND_H
#define CLEAR_BONDS_COMMAND_H

#include "../Command.h"

class ClearBondsCommand : public Command {
    public:
        ClearBondsCommand();
        ~ClearBondsCommand() override;

    protected:
        void executeImpl(uint8_t *data, uint8_t len) override;  
};

#endif /* CLEAR_BONDS_COMMAND_H */