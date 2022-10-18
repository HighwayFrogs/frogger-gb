REM TODO: Verify 16 bit system.

REM Assembles frog.dmg -> frog.lod
REM Output: FROG.LOD, BASE.SYM
dmg frog

REM Assembles music -> MUS.LOD
cd MUSIC
dmg MUS
cd ..\
PAUSE

REM Adds music
REM Output: frogger.lod
copy /b frog.lod+MUSIC\mus.lod frogger.lod
del frog.bin

REM Turns Our LOD File into a ROM.
REM Output: frogger.bin
glod2bin frogger