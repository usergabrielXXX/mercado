#ifndef BANNERS_H
#define BANNER_H

#include "estruturas.h"

void Clear()
{
#ifdef __linux__ /* se linux */
    std::system("clear");
#endif // __linux__

#ifdef __WIN32 /* se windows */
    std::system("cls");
#endif // __WIN32
}

typedef struct BANNERS
{

    bool banner_menu(void)
    {
        Clear();

        std::ifstream arquivo("includes/banners/1_bannerMenuPrincipal.txt");
        std::string linha;

        if (!arquivo.is_open())
        {
            std::cout << "Erro ao abrir o arquivo!" << '\n';
            return false;
        }

        do
        {
            std::cout << AZUL << NEGRITO << linha << RESET << '\n';
        } while (std::getline(arquivo, linha));

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA SAIR DESTE PROGRAMA BASTA DIGITAR \"sair\"" << RESET << '\n';

        return true;
    }

    bool banner_hortifruti(void)
    {
        Clear();

        std::ifstream arquivo("includes/banners/2_bannerHortifruti.txt");
        std::string linha;

        if (!arquivo.is_open())
        {
            std::cout << "Erro ao abrir o arquivo!" << '\n';
            return false;
        }

        do
        {
            std::cout << AZUL << NEGRITO << linha << RESET << '\n';
        } while (std::getline(arquivo, linha));

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR AO MENU PRINCIPAL BASTA DIGITAR \"menu\"" << RESET << '\n';

        return true;
    }

    // frutas.txt

    bool banner_frutas(void)
    {
        Clear();

        std::ifstream arquivo("includes/banners/frutas.txt");
        std::string linha;

        if (!arquivo.is_open())
        {
            std::cout << "Erro ao abrir o arquivo!" << '\n';
            return false;
        }

        do
        {
            std::cout << AZUL << NEGRITO << linha << RESET << '\n';
        } while (std::getline(arquivo, linha));

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR AO MENU PRINCIPAL BASTA DIGITAR \"mh\"" << RESET << '\n';

        return true;
    }

} BANNERS;

void menu_principal_mercado(void)
{
    BANNERS banner;

    banner.banner_menu();
    std::cout << VERDE << "\U0001F96C 1. Hortifruti" << RESET << '\n';
    std::cout << VERDE << "\U0001F35E 2. Padaria e confeitaria" << RESET << '\n';
    std::cout << VERDE << "\U0001F969 3. Açougue" << RESET << '\n';
    std::cout << VERDE << "\U0001F9FC 4. Limpeza" << RESET << '\n';
    std::cout << VERDE << "\U0001F6D2 5. Mercearia" << RESET << '\n';
    std::cout << VERDE << "\U0001F680 6. Utilidades e bazar" << RESET << '\n';
}

void menu_hortifruti(void)
{
    std::cout << "\U0001F34E 1. Frutas" << '\n';
    std::cout << "\U0001F955 2. Legumes" << '\n';
    std::cout << "\U0001F33F 3. Verduras" << '\n';
}

void exibir_frutas_hortifruti(void)
{
    PRODUTOS_FLV produtos;
    EMOJIS_PRODUTOS_FLV emoji;

    std::cout << NEGRITO << "Índice\tFruta" << RESET << '\n';
    size_t tamanho = std::min({produtos.frutas.size(), emoji.frutas.size()});
    for (size_t i = 0; i < tamanho; ++i)
    {
        std::cout << '[' << i << ']' << " - " << emoji.frutas[i] << " " << produtos.frutas[i] << '\n';
    }
}

#endif // BANNER_H