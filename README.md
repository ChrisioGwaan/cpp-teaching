# C++ Programming Techniques

*This is a public repository for people who want to learn C++ on their own. Hope my repository will be helpful to you on your C++ journey. Good Luck!*

*We use C++14 in this repo.*

If you find any content that are ambiguous or incorrect, feel free to do the following options:

* Open issues or
* Post your questions on Discussions
* Contact me with [Email](chris322322@gmail.com)

## Compiler Installation (Windows)

> Install MinGW-x64

* Go to the [link](https://www.msys2.org/) and download the MSYS2 installer at the first step of _Installation_

> Tools to be installed in Mingw-x64

1. Install the mingw-w64 GCC by running the following command on MSYS2:
```
pacman -S mingw-w64-ucrt-x86_64-gcc
```
3. Install full Mingw-w64 toolchain:
```
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```
5. Check gcc and gdb version on Command Prompt:
```
gcc --version
gdb --version
```

> Path Environment Setup

1. Press `Win` and type `env`, select `Edit the system environment variables`
2. Go to `Environment Variables`
3. Choose `Path` variable in _User variables_ and double click it
4. Find `msys64\mingw64\bin` in your C Drive, and copy the path `C:\msys64\mingw64\bin`
5. Back to `Path` variable session, select `New` and paste the path
6. Remember to click `OK OK OK`

> More information

* You can check this [link](https://code.visualstudio.com/docs/languages/cpp) out for learning more details

## WSL in VS code with C++

> VS Code - WSL extension

* [Link](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl)

> Install Ubuntu - Windows Subsystem for Linux

* Open Command Prompt in Administrator mode, and run the following command:
```
wsl --install
```
* The system will require a restart and it's normal
* After the restart, the Ubuntu terminal will pop up and ask you to setup a password. Due to a Linux security mechanism, you can't see your password as you type. So, keep your password in mind.

> Sudo Update

* Run the following command to perform an update:
```
sudo apt-get update && sudo apt-get dist-upgrade
```

> Install GNU Compiler and GDB Debugger

* Run the following command to perform the install:
```
sudo apt-get install build-essential gdb
```

> Version Check

* Run the following command to check the version:
```
whereis g++
whereis gdb
```

> Use WSL in VS Code

* Press **CTRL+`** to open a terminal, select the down arrow to the right of + icon, you should see Ubuntu(WSL) option there. DONE!

> More information

* You can check this [link](https://code.visualstudio.com/docs/cpp/config-wsl) out for learning more details
