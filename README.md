# DigiSpark Jiggler

This repo is a sample implementation to use a DigiSpark board.
It shows how to flash the newest bootloader and fix flashing issues, and upload code to it.

# Installation

The following libraries need to be installed manually and put into ./lib to be able to use the keyboard and mouse:
https://github.com/digistump/DigistumpArduino/tree/master/digistump-avr/libraries

You need to install platformio to be able to compile the code
```bash
pipx install platformio
```

And install the micronucleus tool to flash the latest bootloader and upload your code.
```bash
git clone https://github.com/micronucleus/micronucleus
cd commandline
make
sudo make install
```

The preinstalled bootloader is outdated and may have a bug that causes the chip to constantly disconnect.
This update fixes that issue. \
Upload the latest bootloader:
```bash
# cd into the micronucleus repo
micronucleus --run firmware/upgrades/upgrade-t85_default.hex
# Then plug in your board
```

To actually compile and upload your code:
```bash
# Compile
platformio run
# Upload
micronucleus --run .pio/build/digispark-tiny/firmware.hex
```
