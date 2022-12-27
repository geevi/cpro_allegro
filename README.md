# Learning C using Drawings, Graphics and Games
This repo contains some sample programs to help learn C.

A simplified interface to allegro libary is provided (allegro.h) which helps to write programs with less boilerpate code.

## Usage
- Install Allegro 5 library:  
  [https://github.com/liballeg/allegro_wiki/wiki/Quickstart](https://github.com/liballeg/allegro_wiki/wiki/Quickstart).
- Download and extract the code from: [https://github.com/geevi/cpro_allegro/archive/refs/heads/main.zip](https://github.com/geevi/cpro_allegro/archive/refs/heads/main.zip)
- Compile using  
  ``gcc 2_rec_drawing.c allegro.c $(pkg-config allegro-5 allegro_font-5 allegro_primitives-5 allegro_audio-5 allegro_acodec-5 allegro_image-5 --libs --cflags) -lm``  
  or run the script provided  
  ``bash linux_compile.sh`` for linux and mac
  ``windows_compile.bat`` for windows
