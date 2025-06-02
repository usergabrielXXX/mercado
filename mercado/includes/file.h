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

BANNERS banner;

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

bool mensagemSaida(const std::string &s)
{
    if (std::strcmp(s.c_str(), "sair") == 0)
    {
        std::cout << NEGRITO << ITALICO << "\nObrigado por usar este programa! " << RESET << "\U0001F603" << '\n';
    }

    return true;
}

void retornarMensagens(const std::string &s)
{
    mensagemSaida(s);
}

void printar_produtos_frutas(/*const PRODUTOS_FLV &produtos, const EMOJIS_PRODUTOS_FLV &emoji*/)
{
    PRODUTOS_FLV produtos;
    EMOJIS_PRODUTOS_FLV emoji;

    std::cout << NEGRITO << "Índice\tFruta" << RESET << '\n';//\t\t\tLegume\t\t\tVerdura\n";
    size_t tamanho = std::min({produtos.frutas.size(), emoji.frutas.size()});
    for (size_t i = 0; i < tamanho; ++i)
    {
        std::cout << '[' << i << ']'<< " - " << emoji.frutas[i] << " " << produtos.frutas[i] << '\n';
        
        /* organizar depois */

        //   << emoji.legumes[i] << " " << produtos.legumes[i] << "\t"
        //   << emoji.verduras[i] << " " << produtos.verduras[i] << "\n";
    }
}

#endif // FILE_H
