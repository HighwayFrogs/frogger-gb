REM This script will fail in an environment unable to run 16-bit DOS applications.

REM Assembles FROG.DMG -> FROG.LOD
REM Output: FROG.LOD, BASE.SYM
dmg FROG

REM Assembles music -> MUS.LOD
REM This isn't actually used right now. This is because it outputs a slightly different LOD file.
cd MUSIC
..\dmg MUS.AUD
cd ..\

REM Adds music
REM Output: frogger.lod
copy /b FROG.LOD+MUSIC\MUS.LOD frogger.lod
del ..\FROG.BIN
del MUS.LOD

REM Turns Our LOD File into a ROM.
REM Output: FROGGER.BIN
glod2bin frogger
ren frogger.bin ..\FROG.BIN