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

<details>
<summary>Windows</summary>

#### Visual Studio 2015+

Install per-project using [NuGet](https://www.nuget.org/) in PowerShell:

```ps1
cd MyProjectDir\
Install-Package Allegro
```

Or, just [[install from within Visual Studio|Allegro in Visual Studio#using-nuget-within-visual-studio]].

#### MinGW (via MSYS2)

* [Go to the Allegro releases page](https://github.com/liballeg/allegro5/releases) and find the most recent Allegro 5 version.
  * There are a few options for MinGW - but for those new to Allegro, we recommend downloading the **x86_64 dynamic** package.
  * This will be named - e.g. for v5.2.6 - **allegro-x86_64-w64-mingw32-gcc-9.2.0-posix-seh-dynamic-5.2.6.0.zip**.
* Extract the relevant directories into your MinGW install's include & library paths:
  * Find out where you installed MinGW (`C:\msys64` is the default).
  * The .zip contains three directories under `allegro\`: `bin\ include\ lib\`.
  * Extract the files from each to e.g. `C:\msys64\mingw64\bin`, `C:\msys64\mingw64\include`, `C:\msys64\mingw64\lib` respectively.

</details>

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
  
