rem Run glod2bin.
rem Strip first $100 bytes by reading into Debug
rem and writing back out.
rem This is necessary because GLOD2BIN writes
rem an image from $00 instead of from $100
rem then download

glod1bin frog
debug frog.bin < chop100
gmb frog.bin

