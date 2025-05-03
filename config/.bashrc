#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias grep='grep --color=auto'
alias yoink='yay -Syuu'
alias yeet='yay -Rscn'
alias clean='pacman -Qdtq | sudo pacman -Rns -'
alias nf='neofetch'
alias ani='mov-cli -s ani'
alias yt='mov-cli -s yt'
PS1='[\u@\h \W]\$ '

# colorful prompt
export PS1="\[$(tput bold)\]\[$(tput setaf 1)\][\[$(tput setaf 3)\]\u\[$(tput setaf 2)\]@\[$(tput setaf 4)\]\h \[$(tput setaf 5)\]\W\[$(tput setaf 1)\]]\[$(tput setaf 7)\]\\$ \[$(tput sgr0)\]"

# Created by `pipx` on 2025-04-27 14:14:27
export PATH="$PATH:/home/ll/.local/bin"
