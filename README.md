# dotfiles
----------
Quick install and comfigrate vim and tmux
## install.sh
```

#!/bin/sh

mv dotfiles ~/.dotfiles

#vim
ln -sf ~/.dotfiles/vim ~/.vim
ln -sf ~/.dotfiles/vim/vimrc ~/.vimrc
git clone https://github.com/gmarik/Vundle.vim.git ~/.vim/bundle/Vundle.vim
cd ~/.vim/bundle/YouCompleteMe
./install.sh --clang-completer

#tmux 
ln -sf ~/.dotfiles/tmux.conf ~/.tmux.conf

```
