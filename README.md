# dotfiles
----------
Quick install and configure vim and tmux

## Install
Change directory to home `cd ~`   
`git clone https://github.com/volcanoh/dotfiles .dotfiles`
### vim
`sudo apt-get install vim`  
`ln -sf ~/.dotfiles/vim ~/.vim && mkdir -p ~/.vim/temp && ln -sf ~/.dotfiles/vim/vimrc ~/.vimrc`    
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
`sudo apt-get install xsel` #ubuntu   
`git clone https://github.com/gpakosz/.tmux.git`    
`ln -sf ~/.dotfiles/tmux/tmux.conf ~/.tmux.conf && ln -sf ~/.dotfiles/tmux ~/.tmux`     
`git clone https://github.com/tmux-plugins/tpm ~/.tmux/plugins/tpm`     
#### hot key
`<C-f>-` split verticle     
`<C-f>|` split horizon  
`<C-f>h,j,k,l` swift windows    

### zsh
`sudo apt-get install zsh`  
`sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"`  
`chsh -s /bin/zsh`  
