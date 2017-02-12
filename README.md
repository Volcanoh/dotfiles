# dotfiles
----------
Quick install and comfigrate vim and tmux

## Install
Change directory to home `cd ~`  
`git clone https://github.com/volcanoh/dotfiles .dotfile`
### vim
`ln -sf ~/.dotfiles/vim ~/.vim && ln -sf ~/.dotfiles/vim/vimrc ~/.vimrc`
Install the plugin manager for vim `git clone https://github.com/gmarik/Vundle.vim.git ~/.vim/bundle/Vundle.vim`
Launch vim and run `:PluginInstall`
Download and compile ycmd for vim `cd ~/.vim/bundle/YouCompleteMe && ./install.sh --clang-completer`

### tmux 
`ln -sf ~/.dotfiles/tmux.conf ~/.tmux.conf`

