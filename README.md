## CISC 5300: Graphics
Based on Github user cortical-iv's [stable version of the Stroustrup FLTK middleware library](https://github.com/cortical-iv/hello_fltk)

### Overview
This repository contains example graphics code in `main.cpp`. In addition, it contains Bjarne Stroustrup's FLTK graphics library as part of the "Programming Principles and Practice using C++" book.

To run this code, you must compile and install FLTK. Download the latest version of the FLTK source from [here](https://www.fltk.org/software.php). Once you extract the source code, open the README corresponding to your platform (for example, README.OSX.txt or README.MSWindows.txt). If installing under Windows, it is highly recommended that you have MinGW/Cygwin installed. If so, follow the MinGW/Cygwin directions in the Windows README.

All custom code is in `main.cpp`. The remainder of the files in this directory are part of the author's FLTK interface library. It provides conveniences to you in the same way that `std_lib_facilities.h` does.

### Compiling
Once you have installed FLTK, you may compile this example program with the following G++ compiler arguments:

```
g++ *.cpp -lfltk -lfltk_images
```

To explain:
* `*.cpp` tells the compiler to compile all cpp files in the directory. This is necessary because the author's FLTK interface library contains several cpp files that must be compiled alongside `main.cpp`.
* `-lfltk` instructs the compiler to link your executable to the FTLK library, which you installed in the section above.
* `-lfltk_images` instructs the compiler to link your executable to the FLTK images library. This is required by the author's FLTK interface library, as it contains image display functionality.