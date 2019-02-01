#ifndef DIGITAL_PIN_H
#define DIGITAL_PIN_H

#include "Pin.h"

namespace App { namespace Hardware { namespace GPIO
{
    class DigitalPin : public Pin {
        public:
            DigitalPin::DigitalPin(uint8_t id);

            int read();
            void write(uint32_t value);
    };
}}}

#endif