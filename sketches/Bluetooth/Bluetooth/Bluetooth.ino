#include "src/BLEController.h"
#include "src/commands/I2cCommandFactory.h"
#include "src/I2cController.h"

void setup() {
    I2CBus.init(OnI2cCommandReceived);
    I2CBus.waitForMaster(); // Pauses execution until the master device has completed startup.

    BLE.init(OnBluetoothCommandReceived);
    BLE.startAdvertising();
}

void loop() {
    delay(100);
}

void OnI2cCommandReceived(uint8_t type, uint8_t subtype, uint8_t *data, uint8_t len) {
    auto command = I2cCommands.create(type, subtype);
    if (command != NULL) {
        command->execute(data, len);
        delete command;
    }
}

void OnBluetoothCommandReceived(uint8_t type, uint8_t subtype, uint8_t *data, uint8_t len) {    
}