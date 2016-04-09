#!/bin/sh

#vim
ln -s ~/dotfiles/vim ~/.vim
ln -s ~/dotfiles/vim/vimrc ~/.vimrc
#zsh
sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"
ln -s ~/dotfiles/zshrc ~/.zshrc
#tmux 
ln -s ~/dotfiles/tmux.conf ~/.tmux.conf
