# dwm-catppuccin-config
install instructions:

edit config.def.h files to edit if you want to

change user in slock/config.def.h to your username 

you need the packages " xorg-server xorg-xinit linux-api-headers gcc make pkgconf feh picom libxft libxinerama terminus-font ttf-nerd-fonts-symbols " to install (using pacman, not sure about other package
managers)

install dwm, st, slstatus, dmenu and slock by running  "sudo make clean install"

in config, move picom.conf to /etc/xdg/picom.conf and move .bashrc to 
/home/"user"/.bashrc and xinitrc to /etc/X11/xinit/xinitrc


also move wp to /etc/wp


then start it by running the command startx or use a desktop manager
![floating.png](https://github.com/chicken-transfer4/dwm-catppuccin-config/blob/main/screenshots/floating.png?raw=true)

![tiling.png](https://github.com/chicken-transfer4/dwm-catppuccin-config/blob/main/screenshots/tiling.png?raw=true)

