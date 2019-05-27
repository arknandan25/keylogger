# keylogger
Keylogger made in c++ ,with windows programming in eclipse and mingw compiler.
It tracks almost all the keys of the key even with shift and capslock on.
It  even has the function to hide the dialog box from the screen to detect the key strokes and save the data in a txt file.
Program:
The log function makes use of GetAsyncKeyState(key) function to register a key and then uses switch case for multiple combinations of keystrokes.
The hide function uses windows programming to hide the dialog box created in the release version of the cpp file.
The program can be seen running in the task manager though and can only be closed via there.
