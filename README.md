# Stryfe Mod
This project aims to bring Arduino hardware into the Nerf Stryfe (or any pusher based semi-automatic) blaster platform.

## Setting up your environment
Because this project requires the use of symbolic links, you will need to use the command line to clone the repository. Visual Studio Code can do it, but it does not permit symbolic links by default.

```shell
git clone -c core.symlinks=true 
```

## Hardware Requirements
These are the boards and hardware being used by the project:
- [Adafruit Feather M4 Express](https://www.adafruit.com/product/3857) - Mainboard sketch
- [Adafruit Micro SD SPI or SDIO Card Breakout Board](https://www.adafruit.com/product/4682)
- [Tactile Button Switch (6mm square, 5mm tall)](https://www.adafruit.com/product/367)
- [Pololu Dual G2 High-Power Motor Driver 18v18 Shield for Arduino](https://www.pololu.com/product/2515)
- [Pololu G2 High-Power Motor Driver 18v17](https://www.pololu.com/product/2991)
- [Pololu 5V, 500mA Step-Down Voltage Regulator](https://www.pololu.com/product/2843)

### Optional Hardware
- [Adafruit Feather nRF52840 Express](https://www.adafruit.com/product/4062) - Bluetooth sketch

## Bluetooth Support
If you wish to use the Bluetooth connectivity included with this device, please see the Wiki page.
