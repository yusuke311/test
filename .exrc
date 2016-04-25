set number
set ts=4
set shiftwidth=4
"set list
"set listchars=tab:>-,trail:.
"set listchars=trail:-
set smartindent
set autoindent
set whichwrap=b,s,[,],<,>
set backspace=indent,eol,start
set laststatus=2
set background=dark
set mouse=a
set clipboard+=autoselect
set cursorline
"syntax on
set statusline=%F%r%h%=.
set incsearch
set wildmenu wildmode=list:full
set cindent
set showcmd
function! ZenkakuSpace()
		    highlight ZenkakuSpace cterm=reverse ctermfg=DarkMagenta gui=reverse guifg=DarkMagenta
				endfunction
"
"				if has('syntax')
"						augroup ZenkakuSpace
"								autocmd!
"								autocmd ColorScheme* call ZenkakuSpace()
"								autocmd VimEnter,WinEnter * match ZenkakuSpace /　/
"						augroup END
"						call ZenkakuSpace()
"				endif
nnoremap あ a
nnoremap い i
nnoremap う u
nnoremap お o
nnoremap っd dd
nnoremap っy yy


"dein Scripts-----------------------------
if &compatible
  set nocompatible               " Be iMproved
endif
 
" Required:
set runtimepath^=~/.vim/dein/repos/github.com/Shougo/dein.vim
 
" Required:
call dein#begin(expand('~/.vim/dein'))
 
" Let dein manage dein
" Required:
call dein#add('Shougo/dein.vim')
 
" Add or remove your plugins here:
call dein#add('Shougo/neosnippet.vim')
call dein#add('Shougo/neosnippet-snippets')
call dein#add('Shougo/neocomplete.vim')
call dein#add('Townk/vim-autoclose')
call dein#add('thinca/vim-quickrun')
 
" You can specify revision/branch/tag.
call dein#add('Shougo/vimshell', { 'rev': '3787e5' })
 
" Required:
call dein#end()
 
" Required:
filetype plugin indent on
 
" If you want to install not installed plugins on startup.
if dein#check_install()
  call dein#install()
endif
 
"End dein Scripts-------------------------
