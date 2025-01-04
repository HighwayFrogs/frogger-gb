# Frogger (Game Boy / Game Boy Color)
The official source code to Frogger for Game Boy and Game Boy Color.  
**Development Start:** May 1 1998  
**Developer:** Morning Star Media  
**Programmer:** David Lubar  

## Repository Information
This repository started as the original source backup zip file, but was modified by Kneesnap to improve file organization, and to add documentation.  
**ROM SHA-1 Hash:** `CD5DFD2355B29CD1E8650396D1F26148D2B92061`  
**ROM CRC-32 Hash:** `2F2A9901`  
**ROM Date:** `March 31st, 1999 9:02 AM`  

### Build List
| Build                                                                       | Platform | Date       | Size | CRC Hash | Serial         | Notes                                                                                                                                                                                                                     |
|-----------------------------------------------------------------------------|----------|------------|------|----------|----------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| [Frogger (USA)](https://gamehacking.org/game/3676)                          | GB       | 1998/1999? | 128K | 4D933C08 | DMG-AFGE-USA   | The build date is a guess based on the source code dates.                                                                                                                                                                 |
| Prototype (This Repository)                                                 | GB       | 1999-03-31 | 128K | 2F2A9901 | DMG-AFRE-USA   | Appears to be a midway point between the 1998 build and the Frogger (USA) build.<br>Does not appear to have the Game Boy Color in any form yet.<br>Uses the non-Hasbro-themed images of Frogger, but has the Hasbro logo. |
| [Frogger (E) (M6) [C][!]](https://gamehacking.org/game/10846)               | GB/GBC   | 1999       | 512K | B6BF0672 | DMG-AFRP-EUR   | Uses the non-Hasbro-themed images of Frogger.<br>Appears to be the PAL version of the previous ROM.<br>Contains a language select.<br>Also called Frogger (Europe) (En,Fr,De,Es,It,Nl) (GB Compatible)                    |
| [Frogger (USA) (GB Compatible)](https://gamehacking.org/game/10845)         | GB/GBC   | 1999       | 1M   | AF46EA77 | DMG-AFRE-USA   | Uses the non-Hasbro-themed images of Frogger.<br>Also sometimes called Frogger (U) (V1.0) [C][!]                                                                                                                          |
| [Frogger (USA) (Rev 1) (GB Compatible)](https://gamehacking.org/game/10847) | GB/GBC   | 1999       | 1M   | BA907064 | DMG-AFRE-USA-2 | Uses the Hasbro-themed images of Frogger.                                                                                                                                                                                 |
| [Frogger (U) (V1.2) [C][!]](https://gamehacking.org/game/10848)             | GB/GBC   | 1999       | 1M   | D9A22E5D | DMG-AFRE-USA-3 | Uses the Hasbro-themed images of Frogger.<br>Also called Frogger (USA) (Rev 2) (GB Compatible)                                                                                                                            |

## How to build?
The game was created using DOS, so you'll need something capable of running 16-bit DOS executables to build the ROM.  
For example, [DOSBox](https://www.dosbox.com/download.php?main=1).  

### Build Steps:
**1)** Mount your frogger-gbc folder in DOSBox.  
Command: `mount X C:\{path to frogger-gbc}\frogger-gbc`  

**2)** Switch to the drive letter 'X', which is your frogger-gbc folder.  
Command: `X:`  

**3)** Enter the `SOURCE` directory.  
Command: `cd SOURCE`  

**4)** Assemble the ROM by running `MAKE.BAT`.  
Upon a successful build, the ROM file will be named: `FROG.BIN`.  

## Toolchain Info
**dmg.exe:**  
An assembler of unknown origin, dated December 1989.  
This assembler has no documentation.  
It appears to output "glod" files, which appear to be very simple linkable objects.  

**glod2bin.exe:**  
Converts the previously mentioned "glod" files into an actual GameBoy ROM.  


### Glod File Documentation
Glod files are broken up into chunks.  
A glod file can have any number of chunks, placed sequentially.  
It reports having been built in June 1990 by "Mark D. Klein", who does appear to be credited on various GameBoy games.  
There is nothing else in a glod file besides a list of chunks. Thus, it is possible to combine glod files together simply by appending one glod file to another.  

**Chunk Format:**  
```c
u16 orgAddress; // The $org address which the chunk data will be placed at.
u16 chunkDataSize; // The amount of data (in bytes) in this chunk.
u8 bankId; // The bank ID of the chunk data. (This is a guess)
u8[] chunkData; // The bytes assembled from the assembly text. (Size is 'chunkDataSize' from earlier)
```

### Disclaimer
Preserved by [Highway Frogs](https://highwayfrogs.net/)  
This repository is provided for preservation / educational purposes only.  