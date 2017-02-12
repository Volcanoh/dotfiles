# dotfiles
----------
Quick install and configure vim and tmux

## Install
Change directory to home `cd ~`   
`git clone https://github.com/volcanoh/dotfiles .dotfiles`
### vim
`ln -sf ~/.dotfiles/vim ~/.vim && ln -sf ~/.dotfiles/vim/vimrc ~/.vimrc`    
`git clone https://github.com/gmarik/Vundle.vim.git ~/.vim/bundle/Vundle.vim `  
Install ctags `sudo apt-get install ctags`    
Launch vim and run `:PluginInstall`   
Download and compile ycmd `cd ~/.vim/bundle/YouCompleteMe && ./install.py --clang-completer`    

### tmux 
`ln -sf ~/.dotfiles/tmux.conf ~/.tmux.conf`
#### hot key
`<C-h>-` split verticle
`<C-h>|` split horizon
`<C-h>h,j,k,l` swift windows
