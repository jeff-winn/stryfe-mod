#ifndef FLYWHEEL_CONTROLLER_H
#define FLYWHEEL_CONTROLLER_H

#include <DualG2HighPowerMotorShield.h>
#include "../Hardware/Potentiometer.h"
#include "MotorController.h"

// Defines the motors within the flywheel assembly.
enum FlywheelMotor {
    Motor1,
    Motor2
};

// Provides a mechanism to control the flywheel assembly.
class FlywheelController : public MotorController {
    public:
        FlywheelController(
            HardwareAccessLayer* hardware,
            DualG2HighPowerMotorShield18v18* motorController, 
            Potentiometer* motor1Potentiometer,
            Potentiometer* motor2Potentiometer);

        // Initializes the controller.
        virtual void init();

        // Gets the current of the motor specified (in milliamps).
        virtual unsigned int getMotorCurrentMilliamps(FlywheelMotor motor);

    protected:
        virtual int calculateLimiterForSpeed(int speed);
        virtual int calculateMotorSpeed(FlywheelMotor motor);
        virtual float getMotorSpeedAdjustment(FlywheelMotor motor);
        virtual int determineMotorMaximumSpeed();    
        virtual int calculateStepFromValue(int value);

        virtual void onStart();
        virtual void onStop();
        
    private:
        HardwareAccessLayer* m_hardware;
        DualG2HighPowerMotorShield18v18* m_driver;
        Potentiometer* m_motor1Adjustment;
        Potentiometer* m_motor2Adjustment;

        int m_m1Speed;
        int m_m2Speed;
};

#endif