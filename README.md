# dotfiles
----------
Quick install and configure vim and tmux

## Install
Change directory to home `cd ~`   
`git clone https://github.com/volcanoh/dotfiles .dotfiles`
### vim
`sudo apt-get install vim`  
`ln -sf ~/.dotfiles/vim ~/.vim && ln -sf ~/.dotfiles/vim/vimrc ~/.vimrc`    
`git clone https://github.com/gmarik/Vundle.vim.git ~/.vim/bundle/Vundle.vim `  
Install ctags `sudo apt-get install ctags`    
Launch vim and run `:PluginInstall`   
Download and compile ycmd `cd ~/.vim/bundle/YouCompleteMe && ./install.py --clang-completer`    
#### neovim
`sudo apt-get install neovim`   
`pip3 install neovim`   
`mkdir -p ~/.config/nvim && ln -sf ~/.vimrc init.vim`  


### tmux 
`sudo apt-get install tmux`  
`git clone https://github.com/gpakosz/.tmux.git`  
`ln -sf ~/.dotfiles/tmux.conf ~/.tmux.conf`   
#### hot key
`<C-h>-` split verticle   
`<C-h>|` split horizon  
`<C-h>h,j,k,l` swift windows  

### zsh
`sudo apt-get install zsh`  
`sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"`  
`chsh -s /bin/zsh`  
