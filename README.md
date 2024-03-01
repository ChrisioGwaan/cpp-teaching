![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white) ![WSL](https://img.shields.io/badge/WSL-0078d7.svg?style=for-the-badge&logo=linux&logoColor=white) ![Ubuntu](https://img.shields.io/badge/Ubuntu-0078d7.svg?style=for-the-badge&logo=ubuntu&logoColor=white)

# C++ Programming Techniques

> [!NOTE]
> This repository is for learning the C++ programming language, and the compiler version is set to **C++14**.

If you find any content that are ambiguous or incorrect, feel free to do the following options:

* Open issues or
* Post your questions on Discussions
* [Email Me](chris322322@gmail.com)

## Compiler Installation (Windows)

### Install MinGW-x64

* Go to the [link](https://www.msys2.org/) and download the MSYS2 installer at the first step of _Installation_

### Tools to be installed in Mingw-x64

1. Install the mingw-w64 GCC by running the following command on MSYS2:

```
pacman -S mingw-w64-ucrt-x86_64-gcc
```

2. Check gcc and gdb version on Command Prompt:

```
gcc --version
gdb --version
```

### Path Environment Setup

1. Press `Win` and type `env`, select `Edit the system environment variables`
2. Go to `Environment Variables`
3. Choose `Path` variable in _User variables_ and double click it
4. Find `msys64\mingw64\bin` in your C Drive, and copy the path `C:\msys64\mingw64\bin`
5. Back to `Path` variable session, select `New` and paste the path
6. Remember to click `OK OK OK`

## WSL in VS code with C++

### VS Code - WSL extension (Optional)

* [Link](https://marketplace.visualstudio.com/items?itemName=ms-vscode-remote.remote-wsl)

### Install Ubuntu - Windows Subsystem for Linux

* Open Command Prompt in Administrator mode, and run the following command:
```
wsl --install
```
* The system will require a restart and it's normal
* After the restart, the Ubuntu terminal will pop up and ask you to setup a password. Due to a Linux security mechanism, you can't see your password as you type. So, keep your password in mind.

### WSL Check Update

* Run the following command to perform an update:
```
sudo apt-get update && sudo apt-get dist-upgrade
```

### Install GNU Compiler and GDB Debugger

* Run the following command to perform the install:
```
sudo apt-get install build-essential gdb
```

### Installation Check

* Run the following command to check the version:
```
whereis g++
whereis gdb
```

### Use WSL Terminal in VS Code

* Press ``` CTRL+ ` ``` to open a terminal, select the down arrow to the right of + icon, you should see Ubuntu(WSL) option there. DONE!

## License

This project is licensed under the [MIT](/LICENSE). This means that you are free to use, modify, and distribute the project under the terms of this license.

### Authors

- Weixi Guan (Chrisio Gwaan) - [@ChrisioGwaan](https://github.com/ChrisioGwaan)

### Usage and Restrictions

The intent of this license is to allow for the free use of this project for educational, research, and personal projects. However, please adhere to the following guidelines:
- **Academic Integrity**: This project should not be used for purposes that violate academic integrity policies of educational institutions.
- **Commercial Use**: If you intend to use this project for commercial purposes, please check the specific terms of the license or contact the authors.
- **Liability**: The authors are not responsible for any damages or issues arising from the use of this project.
- **Warranties**: The authors provide no warranties or guarantees for this project.