# Tidy-Kingston

Code to find out which day your garbage is based on input of postal code

## Breakout Board V1

The Raspberry PI is placed upside down onto the breakout board. This flips the conventional location of pin numbering. On the breakout board the top right slot is mapped to Pin 1.

**Relay GPIO Pins**
 - Pin 11 --> Controls R1
 - Pin 13 --> Controls R2
 - Pin 15 --> Controls R3 
 - Pin 16 --> Controls R4
 - Pin 22 --> Controls R5
 - Pin 18 --> Controls R6
 
**I2C Pins**
Pin 3 (SDA)
Pin 5 (SCL)
I2C pins are extended to SDA1 - SDA4 and SCL1 - SCL4
**UART Pins**
Pin 8 TX
Pin 10 RX
UART pins are extended to RX1 and TX1

**BOM**
|  Item |Description | Quantity | Datasheet Link |
|--|--|--|--|--|
| SKE15C-24 | Mean Well 24V Converter |1 |[SKE15C-24](https://www.meanwell-web.com/content/files/pdfs/productPdfs/MW/Ske15/SKE15-spec.pdf)|
| SKA20B-12 | Mean Well 12V Converter| 1 |[ SKA20B-12](https://www.meanwell-web.com/content/files/pdfs/productPdfs/MW/SKA20/SKA20-spec.pdf) |
| SKMW20G-05 | Mean Well 5V Converter  |1  |[SKMW20G-05](https://www.meanwell-web.com/content/files/pdfs/productPdfs/MW/SKMW20/SKMW20,DKMW20-spec.pdf) |
| SRD-05VDC-SL-C | Songle 5V Relay |6  |[SRD-05VDC-SL-C ](https://datasheetspdf.com/pdf-file/720556/Songle/SRD-05VDC-SL-C/1)|
|BOB-12009 | Logic Level Convertor (Convert 3.3V output from RPi GPIO to 5V for use in relays) | 2 | [BOB-12009](https://media.digikey.com/pdf/Data%20Sheets/Sparkfun%20PDFs/Bi-Directional-Logic-Level_HookupGuide.pdf) |
| TB006-508-02BE | Two Screw Head Terminal (Used to connect 5V, 24V, 48V power sources) | 3 |[TB006-508-02BE](https://www.cuidevices.com/product/resource/tb006-508.pdf) |
| TB006-508-06BE | Six Screw Head Terminal (Used for temporary connection to output of relays) | 1  |[TB006-508-06BE](https://www.cuidevices.com/product/resource/tb006-508.pdf)  |
| 920-0135-01 | 40 position female header for RPi to be plugged into  |  1| |
| 5-146261-1| 2 position header| 24 | [5-146261-1](https://www.te.com/commerce/DocumentDelivery/DDEController?Action=srchrtrv&DocNm=146261&DocType=Customer%20Drawing&DocLang=English)|
| STC02SYAN |Jumper Shorting Tin (short the desired header for different output voltages of the relays)|4|[STC02SYAN](https://drawings-pdf.s3.amazonaws.com/11134.pdf)|
| Relay Diode (PN2222A PBFREE)|  | 6| [PN2222A PBFREE](https://my.centralsemi.com/datasheets/PN2221-2222A.PDF)|
| Relay Resistor | 1k Ohms |  6| |
| LED Resistor  || 7 | |
| Relay LED | Will turn on, if connected 5V source to relay is on | 6| |
| Status LED | Connected to Pin 40 of RPi |1| |
