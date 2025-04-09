<p align="center">
  <img src="https://github.com/42school/norminette/raw/master/assets/42_logo.svg" alt="42 Logo" width="120">
</p>

<h1 align="center">🛠️ 42Utils - Configurações para o Common Core 🛠️</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Norminette-v3-blue" alt="Norminette v3">
  <img src="https://img.shields.io/badge/VSCode-configurado-brightgreen" alt="VSCode">
  <img src="https://img.shields.io/badge/Fish-shell-orange" alt="Fish Shell">
  <img src="https://img.shields.io/badge/42-friendly-blueviolet" alt="42 Friendly">
</p>

## 📋 Índice

- [Introdução](#-introdução)
- [Configurações](#-configurações)
  - [Editor de Código (VSCode)](#-editor-de-código-vscode)
  - [Terminal (Fish Shell)](#-terminal-fish-shell)
- [Dicas de Norminette](#-dicas-de-norminette)
- [Aliases e Funções Úteis](#-aliases-e-funções-úteis)
- [Plugins Recomendados](#-plugins-recomendados) 
- [FAQ - Perguntas Frequentes](#-faq---perguntas-frequentes)
- [Como Contribuir](#-como-contribuir)
- [English Version](#-english-version)

## 🚀 Introdução

E aí, cadete! Cansado de perder tempo configurando seu ambiente de desenvolvimento a cada novo projeto? Este repositório foi criado para facilitar sua jornada pelo Common Core da 42, reunindo configurações, dicas e truques para otimizar seu fluxo de trabalho enquanto segue à risca a sagrada Norma.

> **"Tempo salvo em configuração é tempo ganho para debugar aquele segfault misterioso às 3 da manhã."**

Este repositório contém:
- Configurações otimizadas para VSCode
- Setup de Fish Shell com aliases úteis
- Dicas para lidar com a Norminette
- Macetes para Git e outras ferramentas
- E muito mais!

## ⚙️ Configurações

### 💻 Editor de Código (VSCode)

O Visual Studio Code é um dos editores mais populares entre os cadetes da 42, oferecendo um equilíbrio perfeito entre funcionalidades e leveza. Nossa configuração personalizada já vem com:

- Régua na coluna 80 (limite da Norma)
- Visualização de espaços em branco
- Tema adaptado para longas sessões de código
- Indentação com tabs de 4 espaços (como exige a Norma)
- Configuração do Header da 42
- Fontes monoespaçadas optimizadas para código

Para usar, basta copiar o arquivo `user_configs/vscode_settings.json` para seu diretório de configurações do VSCode.

```bash
# Linux
cp user_configs/vscode_settings.json ~/.config/Code/User/settings.json

# macOS
cp user_configs/vscode_settings.json ~/Library/Application\ Support/Code/User/settings.json
```

> **Dica:** Evite usar ferramentas como Copilot na 42! A configuração já desabilita esses recursos para manter seu código 100% seu.

### 🐟 Terminal (Fish Shell)

O Fish Shell oferece uma experiência muito mais agradável que o bash padrão, com auto-completação inteligente, destacamento de sintaxe colorido e um histórico de comandos mais eficiente. Minha configuração inclui:

- Aliases para comandos Git comuns (`gs` para `git status`, etc.)
- Atalhos para compilação com flags da Norma (`gccw` para `gcc -Wall -Wextra -Werror`)
- Funções personalizadas para otimizar seu workflow
- Remoção da mensagem de boas-vindas para um terminal mais limpo

Copie minhas configurações:

```bash
cp user_configs/config.fish ~/.config/fish/config.fish
```

## 📏 Dicas de Norminette

A Norminette pode ser sua melhor amiga ou seu pior pesadelo. Aqui estão algumas dicas para evitar problemas comuns:

| Regra | O que fazer | O que não fazer |
|-------|-------------|-----------------|
| Indentação | Usar tabs de 4 espaços | Misturar tabs e espaços |
| Funções | Máximo 25 linhas por função | Usar funções aninhadas |
| Linhas | Máximo 80 colunas | Linhas que forçam rolagem horizontal |
| Variáveis | Declarar no início da função | Declarar no meio do código |
| Nomes | Snake case (exemplo: `user_input`) | Camel case (exemplo: `userInput`) |

Comando para verificar todos os arquivos do projeto:
```bash
find . -type f \( -name "*.c" -o -name "*.h" \) -exec norminette {} \;
```

## 🔧 Aliases e Funções Úteis

Minha configuração do Fish inclui vários aliases úteis:

```fish
# Compila com as flags da Norma
alias gccw='gcc -Wall -Wextra -Werror'

# Executa norminette em todos os arquivos .c e .h
alias normall='find . -type f \( -name "*.c" -o -name "*.h" \) -exec norminette {} \;'

# Git simplificado
alias gs='git status'
alias gp='git push'
alias gaa='git add --all'

# Função para add+commit em um comando
function gac
    git add .
    git commit -m "$argv"
end
```
## 🔌 Plugins Recomendados

### Para VSCode:
- **42 Header**: Adiciona automaticamente o header da 42 aos seus arquivos
- **C/C++**: Suporte a linguagem C com intellisense
- **Bracket Pair Colorizer**: Facilita a identificação de chaves/parênteses
- **GitLens**: Visualização avançada do histórico Git
- **Material Icon Theme**: Melhora a visualização de arquivos no explorador

## ❓ FAQ - Perguntas Frequentes

### Como lidar com as limitações da Norma em projetos complexos?
Divida seu código em funções pequenas e bem definidas. Use estruturas para agrupar variáveis relacionadas e reduzir o número de parâmetros.

### Como evitar problemas de vazamento de memória?
Sempre utilize Valgrind ou similar para verificar vazamentos. Estabeleça uma convenção clara para alocação/liberação de memória em seu código.

## 🤝 Como Contribuir

Contribuições são sempre bem-vindas! Sinta-se à vontade para:

1. Fazer um fork do repositório
2. Criar um branch para sua feature (`git checkout -b feature/nova-config`)
3. Commit suas mudanças (`git commit -m 'feat: adiciona configuração X'`)
4. Push para o branch (`git push origin feature/nova-config`)
5. Abrir um Pull Request

## 🌐 English Version

# 🛠️ 42Utils - Common Core Configurations 🛠️

Welcome to 42Utils, a comprehensive repository of configurations, tips, and tools designed to optimize your development workflow at 42 School. This repository contains customized settings for VSCode, Fish Shell, and various utilities to help you comply with the Norm while improving your productivity.

## What's Included

- **VSCode Configuration**: Optimized settings with the 80-column ruler, whitespace visualization, and 42 header setup
- **Fish Shell**: Custom configuration with useful aliases and functions for Git and C development
- **Norminette Tips**: Common pitfalls and how to avoid them

## Getting Started

Clone this repository and copy the configuration files to their respective locations:

```bash
# VSCode
cp user_configs/vscode_settings.json ~/.config/Code/User/settings.json

# Fish Shell
cp user_configs/config.fish ~/.config/fish/config.fish
```

For more detailed instructions and tips, please refer to the sections above in Portuguese.

---

<p align="center">
  Feito com ❤️ por nyx
</p>

<p align="center">
  <i>Lembre-se: A Norma existe por um motivo. Mas isso não significa que não podemos facilitar o processo!</i>
</p>
