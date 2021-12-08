# dmenu

A dynamic menu fox X written in C.

> All settings can be modified in [config.h](./config.h)

## Installation

1. Clone the repository:

   ```sh
   git clone https://github.com/andreapasquetto/dmenu.git
   ```

2. Make changes to the configuration, if necessary

3. Compile and install

   ```sh
   make && sudo make clean install
   ```

## Features and Patches

- Support for color fonts
- [border](https://tools.suckless.org/dmenu/patches/border)
- [center](https://tools.suckless.org/dmenu/patches/center)
- [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch)
- [grid](https://tools.suckless.org/dmenu/patches/grid)
- [gridnav](https://tools.suckless.org/dmenu/patches/gridnav)
- [line-height](https://tools.suckless.org/dmenu/patches/line-height)
- [numbers](https://tools.suckless.org/dmenu/patches/numbers)
- [password](https://tools.suckless.org/dmenu/patches/password)

## Options

| Option        | Action                     |
| ------------- | -------------------------- |
| `-F`          | toggle fuzzy search        |
| `-P`          | toggle password mode       |
| `-b`          | toggle bottom position     |
| `-bw`         | border width               |
| `-c`          | toggle center position     |
| `-fn`         | set custom font            |
| `-g [number]` | set grid columns           |
| `-h [number]` | set line height            |
| `-i`          | set case-insensitive match |
| `-l [number]` | set grid rows              |
| `-p [string]` | set custom prompt string   |
