" TeX-Suite
set shellslash
set grepprg=grep\ -nH\ $*
let g:tex_flavor='latex'
let g:Tex_SmartKeyDot = 0
let g:Tex_comment_nospell= 1
let g:Tex_SmartKeyQuote = 0

" Certain file-specific settings which don't seem to apply in after/ftplugin
let g:tex_conceal='agms'
let g:xml_syntax_folding=1

let g:vimtex_view_method='zathura'
let g:vimtex_quickfix_mode=0
set conceallevel=1

let g:Tex_Leader=';'
let g:Tex_ViewRule_pdf = 'Skim'
let g:Tex_MultipleCompileFormats='pdf,bib,pdf,pdf'

imap <C-b> <ESC><ESC>:w<CR>\ll:only<CR>\ls
nmap <C-b> <ESC>:w<CR>\ll:only<CR>\ls



" this is mostly a matter of taste. but LaTeX looks good with just a bit
" of indentation.
set sw=2
" TIP: if you write your \label's as \label{fig:something}, then if you
" type in \ref{fig: and press <C-n> you will automatically cycle through
" all the figure labels. Very useful!
set iskeyword+=:

imap <C-b> <ESC><ESC>:w<CR>\ll:only<CR>\ls
nmap <C-b> <ESC>:w<CR>\ll:only<CR>\ls

