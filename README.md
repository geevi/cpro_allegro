# Learning C using Drawings, Graphics and Games
This repo contains some sample programs to help learn C.

A simplified interface to allegro libary is provided (allegro.h) which helps to write programs with less boilerpate code.

## Usage
### 1. Install Allegro 5 library:  
  [https://github.com/liballeg/allegro_wiki/wiki/Quickstart](https://github.com/liballeg/allegro_wiki/wiki/Quickstart).

<details>
<summary>Linux</summary>

#### Ubuntu 18.04+ (or derivatives thereof)

First, add the Allegro PPA. This gives you up-to-date versions of Allegro; the base repos only provide 5.2.3 at the time of writing.

```bash
sudo add-apt-repository ppa:allegro/5.2
```

Then, install Allegro:

```bash
sudo apt-get install liballegro*5.2 liballegro*5-dev
```

#### Debian-based distributions (Debian, Mint, Ubuntu, etc..)

```bash
sudo apt-get install liballegro-ttf5-dev
```

#### Fedora

```bash
sudo dnf install allegro5*
```

#### Arch

```bash
sudo pacman -S allegro
```

#### openSUSE Tumbleweed

```bash
sudo zypper install liballegro*
```

#### Others

Binary packages may be available for your distro; feel free to add them here if so.

Otherwise, select "Something else" below.

</details>

<details>
<summary>OSX</summary>

#### Install with [Homebrew](https://brew.sh/)

```bash
brew install allegro
```

You will also need to install pkg-config, if it is not already installed.

```bash
brew install pkg-config
```

</details>


  Windows

1. Download and Install MSYS2 (https://www.msys2.org/)  
  
2. Install GCC and make:   
  
  Open the MSYS2 UCRT64 terminal (from start menu)  
  
  run command `pacman -S mingw-w64-ucrt-x86_64-gcc`  
  
  run command `pacman -S make`  

3. Install Allegro  
    
  Download and extract: https://github.com/liballeg/allegro5/releases/download/5.2.8.0/allegro-x86_64-w64-mingw32-gcc-12.1.0-posix-seh-dynamic-5.2.8.0.zip  
   
  Copy the include, lib, bin folders in the extracted allegro folder to [MSYS2 Directory]\ucrt64.  

4. Download and extract the files in https://github.com/geevi/cpro_allegro/archive/refs/heads/main.zip to [MSYS2 Directory]/home/[username]/  

5. Open MSYS2 UCRT64 terminal (from start menu).   
  
  `cd cpro_allegro-main`  
  
  `make`  

### 2. Download and extract the code 
from: [https://github.com/geevi/cpro_allegro/archive/refs/heads/main.zip](https://github.com/geevi/cpro_allegro/archive/refs/heads/main.zip)
  

### 3. Compile 
using either of the bellow options  
  - Run the long command   
  ``gcc 2_rec_drawing.c allegro.c $(pkg-config allegro-5 allegro_font-5 allegro_primitives-5 allegro_audio-5 allegro_acodec-5 allegro_image-5 --libs --cflags) -lm``
  - run the script provided 
    - ``bash linux_compile.sh`` for linux and mac 
    - ``windows_compile.bat`` for windows   
  - run make
    - ``make 1`` for compiling 1_learn_draw. Run the executable 1.out
    - ``make 2`` for compiling 2_rec_drawing. Run the executable 2.out
  
