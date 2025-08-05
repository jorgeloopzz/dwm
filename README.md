<!--dwm logo-->
<p align="center">
  <img src="https://dwm.suckless.org/dwm.svg" width=250>
</p>

dwm is a dynamic window manager for the X window system developed by [suckless](https://suckless.org/), a free software community of programmers whose projects focus on *simplicity, clarity and frugality*, making them as light as possible with a strong minimal [philosophy](https://suckless.org/philosophy/).

# Installation
By default, dwm is installed under */usr/local* path. For a local installation, edit `config.mk` to match your local setup as I have configured and after that, enter the following command to build and compile :

```bash
make clean install
```

> [!IMPORTANT] 
> In case you get a compiling error such as:
> >X11/.../<>.h: no such file or directory
>
> install  `apt-file` to search in which package **<>.h** header file is included. Just a brief example of how to use it:
>
> ```bash
> sudo apt install apt-file
> apt-file search "Xinerema.h"
> libxinerama-dev: /usr/include/X11/extensions/Xinerama.h
> ```
> `libxinerama-dev` is your target.

&nbsp;

# Configuration
The configuration of dwm is done by creating a custom `config.h` file and recompiling the source code each time you make changes, whether modifying the source code or applying **patches**.

## Patches
Patches are additional configurations that you can employ to your own *custom build*. There are a ton of [patches](https://dwm.suckless.org/patches/) available with many functionalities. The followings are the ones I use:

 - [Auto start](https://dwm.suckless.org/patches/autostart/dwm-autostart-20161205-bb3bd6f.diff)
 - [Volume control](https://dwm.suckless.org/patches/amixer-integration/dwm-amixer-integration-6.5.diff)
 - [Gaps](https://dwm.suckless.org/patches/fullgaps/dwm-fullgaps-20200508-7b77734.diff)

Run `patch -p1 < path/to/patches` to apply them.

> [!TIP]
> I recommend having a folder where to place `diff` files, mainly for organization, but regardless the location you have them, make sure your current directory when patching is where `dwm.c` and `config.h` are located.

&nbsp;

# dwmblocks
If you decide to use **dwmblocks** as your status bar follow the exact same instructions for building dwm. All configurations are made in `blocks.h` header.

> [!NOTE]
> Every script you may not recognize in this config file is on my [dotfiles](https://github.com/jorgeloopzz/dotfiles/tree/master) repo.

&nbsp;

# Running dwm
There are several ways to run dwm. In my case, I made the `desktop` file and moved it to the `xessions` folder in order to be able to select **dwm** through login menu.
```bash
sudo cp dwm.desktop /usr/share/xsessions/
```
