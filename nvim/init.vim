set number
set mouse=a
set showcmd
set encoding=utf-8
set showmatch 
set relativenumber

call plug#begin('~/.local/share/nvim/plugged')

Plug 'davidhalter/jedi-vim'
Plug 'Shougo/deoplete.nvim', { 'do': ':UpdateRemotePlugins' }
Plug 'zchee/deoplete-jedi'
Plug 'jiangmiao/auto-pairs'
Plug 'hachy/eva01.vim', { 'branch': 'main' }
Plug 'Yggdroot/indentLine'
Plug 'haya14busa/incsearch.vim'

call plug#end()

" Colores
colorscheme eva01

" Configuraciones
let g:deoplete#enable_at_startup = 1

autocmd InsertLeave,CompleteDone * if pumvisible() == 0 | pclose | endif

inoremap <expr><tab> pumvisible() ? "\<c-n>" : "\<tab>"

let g:neomake_python_enabled_makers = ['pylint']

let g:indentLine_fileTypeExclude = ['text', 'sh', 'help', 'terminal']
let g:indentLine_bufNameExclude = ['NERD_tree.*', 'term:.*']

" Maps requeridos
map /  <Plug>(incsearch-forward)
map ?  <Plug>(incsearch-backward)

" Quitar resaltado luego de buscar
let g:incsearch#auto_nohlsearch = 1

