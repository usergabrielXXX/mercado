/* arquivo: file.h */

#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <fstream>
#include <chrono>
#include <thread>
#include "estruturas.h"
#include "banners.h"

#define TEMPO 1000

void contador(void)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(TEMPO));
}

void mensagemSaida(const std::string &s)
{
    if (std::strcmp(s.c_str(), "sair") == 0)
    {
        std::cout << '\n' << "Obrigado por usar este programa! " << "\U0001F603" << '\n';
        std::cout << VERMELHO << "Encerrando o programa!" << RESET << '\n';
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

/**
 * @brief Verifica se a string fornecida contém apenas caracteres numéricos.
 *
 * Esta função verifica se todos os caracteres da string 'num' são dígitos.
 * Caso a string esteja vazia ou contenha algum caractere não numérico,
 * a função retorna false e exibe uma mensagem de erro.
 *
 * @param num Referência constante para a string a ser verificada.
 * @return true se a string contém apenas números e não está vazia, false caso contrário.
 */
bool somenteNumeros(const std::string& num)
{
    if(num.empty())
    {
        return false;
    }

    for(auto& n : num)
    {
        if(!std::isdigit(n))
        {
            std::cout << VERMELHO <<"Insira apenas números!" << RESET << '\n';
            return false;
        }
    }

    return true;
}

/**
 * @brief Exibe mensagens relacionadas à entrada do usuário e valida se a entrada contém apenas números.
 *
 * Esta função chama as funções auxiliares para exibir mensagens de opção inválida e de saída,
 * utilizando a string fornecida como parâmetro. Em seguida, verifica se a string contém apenas números;
 * caso contrário, a execução da função é encerrada.
 *
 * @param s String de entrada a ser validada e utilizada nas mensagens.
 */
void retornarMensagens(const std::string &s)
{
    opcaoInvalidaMenu(s);
    mensagemSaida(s);

    // if (somenteNumeros(s) == false)
    //     return;
}

#endif // FILE_H
