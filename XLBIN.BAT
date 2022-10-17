rem combine with aud and xlice it
copy /b frog.lod+mus.lod frogger.lod
glod2bin frogger
del frog.bin
ren frogger.bin frog.bin
loadice

