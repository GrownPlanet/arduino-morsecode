# arduino morsecode
Create a 1% keyboard and use morse code to type!
## uploading to an arduino and compiling
You will need an arduino that support HID. [list of arduinos that support HID](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/) \
You can just upload the project to an arduino using arduino-ide or arduino-cli.
## code
`morse_code_alphabet.h` contains the alphabet in a huffman encoding inspired way. \
`morse_code.ino` contains the code for interprreting the morse code, you can change the defines to configure it to your needs.
