REM TODO: Verify 16 bit system.

REM Assembles frog.dmg -> frog.lod
REM Output: FROG.LOD, BASE.SYM
dmg frog

REM Assembles music -> MUS.LOD
REM This isn't actually used right now. This is because it outputs a slightly different LOD file.
cd MUSIC
REM ..\dmg MUS.AUD
cd ..\
REM copy MUSIC\MUS.LOD .\MUS.LOD

REM Adds music
REM Output: frogger.lod
copy /b frog.lod+mus.lod frogger.lod
del frog.bin

REM Turns Our LOD File into a ROM.
REM Output: frogger.bin
glod2bin frogger