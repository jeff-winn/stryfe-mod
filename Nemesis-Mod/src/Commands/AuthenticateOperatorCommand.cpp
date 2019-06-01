#include "AuthenticateOperatorCommand.h"

AuthenticateOperatorCommand::AuthenticateOperatorCommand(App* app) {
    m_app = app;
}

AuthenticateOperatorCommand::~AuthenticateOperatorCommand() {
    m_app = NULL;
}

void AuthenticateOperatorCommand::handle(Packet_t packet) {
    m_app->authenticate();
}