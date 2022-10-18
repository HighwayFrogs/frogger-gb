# Frogger (Game Boy / Game Boy Color)
The official source code to Frogger for Game Boy and Game Boy Color.  
**Development Start:** May 1 1998  
**Developer:** Morning Star Media  
**Programmer:** David Lubar  

## How to build?
Due to the age of the game and programs, something which can run 16-bit DOS executables is necessary to build this.  
Testing has been done with [DOSBox](https://www.dosbox.com/download.php?main=1).  

**1)** Mount your frogger-gbc folder in DOSBox.  
Command: `mount X C:\{path to frogger-gbc}\frogger-gbc`  

**2)** Switch to the drive letter 'X', which is your frogger-gbc folder.  
Command: `X:`  

**3)** Assemble the ROM by running `MAKE.BAT`.  
The ROM will be called `frogger.bin`.  

Preserved by [Highway Frogs](https://highwayfrogs.net/)