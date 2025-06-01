/* arquivo: file.h */

#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstring>
#include <algorithm>
#include <fstream>
#include <chrono>
#include <thread>
#include "estruturas.h"
#include "banners.h"

#define TEMPO 1000

// void contadorDeUso(void)
// {
//     using clock = std::chrono::steady_clock;
//     auto inicio = clock::now();

//     while (true)
//     {
//         auto agora = clock::now();
//         auto duracao = std::chrono::duration_cast<std::chrono::seconds>(agora - inicio).count();

//         std::cout << VERMELHO << NEGRITO << "\rTempo de uso: " << duracao << " segundos" << RESET << std::flush;

//         std::this_thread::sleep_for(std::chrono::seconds(1));
//     }
// }

void contador(void)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(TEMPO));
}

void mensagemSaida(const std::string &s)
{
    if (std::strcmp(s.c_str(), "sair") == 0)
    {
        std::cout << '\n'
                  << "Obrigado por usar este programa! " << "\U0001F603" << '\n';
        std::cout << VERMELHO << "Encerrando o programa!" << RESET << '\n';
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        contador();
    }
}

void opcaoInvalidaMenu(const std::string &a)
{
    if (std::strcmp(a.c_str(), "sair") != 0)
    {
        std::cout << VERMELHO << "\U0001F7E5" << " Essa opção não existe!" << RESET << '\n';
        contador();
    }
}

void tratar_opcao_menu_principal(const std::string& opcao)
{
    if(opcao == "1")
    {
        banner_hortifruti();
    }
}

void retornarMensagens(const std::string &s)
{
    opcaoInvalidaMenu(s);
    mensagemSaida(s);
    // tratar_opcao_menu_principal(s);
}


#endif // FILE_H
