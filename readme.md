This project is a DIY six-channel stereo speaker selector based on *[STC15W201](https://www.stcmicro.com/datasheet/STC15W201S_Features.pdf)* MCU. The purpose of this electronic switch is to share a pair of speakers between six stereo audio systems.

To select each speaker channel, we use a couple of 12V DPDT relays. These relays interface to *74HC595* through a *ULN2003*, 3-channel Darlington transistor array IC. 

The 6-channel speaker selector is an open-source project. This repository has all the schematics, PCB design files, and firmware source codes. 

The complete documentation of this project is in the wiki section of this repository. The PCB Gerber files and compiled binaries are also available in the release section of this repository. The PCB of the 6-channel speaker selector can also order from the PCBWay website.

All the content of this project is distributed under the terms of the following license:

- Hardware License: [CERN-OHL-W 2.0](https://ohwr.org/cern_ohl_w_v2.txt)
- Software License: [MIT](https://github.com/dilshan/6ch-speaker-selector/blob/main/LICENSE)
- Documentation License: [CC BY 4.0](https://creativecommons.org/licenses/by/4.0/)