# dwm-catppuccin-config

Screenshots:

![floating.png](https://github.com/chicken-transfer4/dwm-catppuccin-config/blob/main/screenshots/floating.png?raw=true)

![tiling.png](https://github.com/chicken-transfer4/dwm-catppuccin-config/blob/main/screenshots/tiling.png?raw=true)

INSTALL INSTRUCTIONS: 
* Install dependencies using

 "pacman -Syuu xorg-server xorg-xinit linux-api-headers gcc make pkgconf feh picom libxft libxinerama terminus-font ttf-nerd-fonts-symbols"

* Change "user" in slock/config.def.h to your username 

* Go into dwm,st,slock,slstatus and run "make clean install" in them

* Move the files in config to the correct places:
mv xinitrc /etc/X11/xinit/xinitrc
mv .bashrc mv ~/.bashrc
mv picom.conf mv /etc/xdg/picom.conf

Start it by running the command startx
