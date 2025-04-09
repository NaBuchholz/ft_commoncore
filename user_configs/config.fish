if status is-interactive
  # Commands to run in interactive sessions can go here
	# Configuração de aliases para Git
    alias g='git'
    alias ga='git add'
    alias gaa='git add --all'
    alias gb='git branch'
    alias gc='git commit -v'
    alias gcm='git commit -m'
    alias gca='git commit -v --amend'
    alias gco='git checkout'
    alias gd='git diff'
    alias gf='git fetch'
    alias gl='git pull'
    alias gp='git push'
    alias gs='git status'
    alias glog='git log --oneline --decorate --graph'
    alias gloga='git log --oneline --decorate --graph --all'

	# Padrão 42
	  alias gccw='gcc -Wall -Wextra -Werror'
	  alias normall='find . -type f \( -name "*.c" -o -name "*.h" \) -exec norminette {} \;'
  # Funções Git mais avançadas
    function gac
        git add .
        git commit -m "$argv"
    end

    function gpush
        git push origin (git branch --show-current)
    end

    function gpull
        git pull origin (git branch --show-current)
    end

	# Configurações visuais
    set fish_greeting ""  # Remove a mensagem de boas-vindas

end
