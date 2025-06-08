#ifndef BANNERS_H
#define BANNERS_H

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
        // for(int i=0; i < 1000000; i++)
        //     std::printf("\r%d", i);
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

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR A SESSÃO ANTERIOR DIGITE \"<<\"" << RESET << '\n';

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

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR A SESSÃO ANTERIOR DIGITE \"<<\"" << RESET << '\n';

        return true;
    }

    // legumes.txt

    bool banner_legumes(void)
    {
        Clear();

        std::ifstream arquivo("includes/banners/legumes.txt");
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

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR A SESSÃO ANTERIOR DIGITE \"<<\"" << RESET << '\n';

        return true;
    }

    bool banner_verduras(void)
    {
        Clear();

        std::ifstream arquivo("includes/banners/verduras.txt");
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

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR A SESSÃO ANTERIOR DIGITE \"<<\"" << RESET << '\n';

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
    PRECOS_HORTIFRUTI precos;

    std::cout << NEGRITO << "Índice\tFrutas\t\t\tPreço" << RESET << '\n';
    size_t tamanho = std::min({produtos.frutas.size(), emoji.frutas.size(), precos.preco_frutas.size()});
    for (size_t i = 0; i < tamanho; ++i)
    {
        std::cout << '[' << i << ']' << "\t" << '[' << emoji.frutas[i] << ']' << ' '
                  << produtos.frutas[i] << NEGRITO << ITALICO << "\t\tR$ "
                  << std::fixed << std::setprecision(2)
                  << precos.preco_frutas[i] << "/kg" << RESET << '\n';
    }
}

void exibir_legumes_hortifruti(void)
{
    PRODUTOS_FLV produtos;
    EMOJIS_PRODUTOS_FLV emoji;
    PRECOS_HORTIFRUTI precos;

    std::cout << NEGRITO << "Índice\tLegumes\tPreço" << RESET << '\n';
    size_t tamanho = std::min({produtos.legumes.size(), emoji.legumes.size()});
    for (size_t i = 0; i < tamanho; ++i)
    {
        // std::printf("[%lu] - %s %s\n", i, emoji.legumes[i], produtos.legumes[i]);
        std::cout << '[' << i << ']' << "\t" << '[' << emoji.legumes[i] << ']' << ' '
                  << produtos.legumes[i] << NEGRITO << ITALICO << "\t\tR$ "
                  << std::fixed << std::setprecision(2)
                  << precos.preco_legumes[i] << "/kg" << RESET << '\n';
    }
}

void exibir_verduras_hortifruti(void)
{
    PRODUTOS_FLV produtos;
    EMOJIS_PRODUTOS_FLV emoji;
    PRECOS_HORTIFRUTI precos;

    std::cout << NEGRITO << "Índice\tVerduras\tPreço" << RESET << '\n';
    size_t tamanho = std::min({produtos.verduras.size(), emoji.verduras.size()});
    for (size_t i = 0; i < tamanho; ++i)
    {
        std::cout << '[' << i << ']' << "\t" << '[' << emoji.verduras[i] << ']' << ' '
                  << produtos.verduras[i] << NEGRITO << ITALICO << "\t\tR$ "
                  << std::fixed << std::setprecision(2)
                  << precos.preco_verduras[i] << "/kg" << RESET << '\n';
    }
}

#endif // BANNER_H