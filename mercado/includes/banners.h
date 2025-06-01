#ifndef BANNERS_H
#define BANNER_H

#ifdef __linux__
#define AZUL "\033[34m"
#define VERMELHO "\033[31m"
#define AMARELO "\033[33m"
#define VERDE "\033[32m"
#define RESET "\033[0m"
#endif // __linux__

void Clear()
{
#ifdef __linux__ /* se linux */
    std::system("clear");
#endif // __linux__

#ifdef __WIN32 /* se windows */
    std::system("cls");
#endif // __WIN32
}

bool banner_menu(void)
{
    Clear();

    std::ifstream arquivo("includes/banners/banner.txt");
    std::string linha;

    if (!arquivo.is_open())
    {
        std::cout << "Erro ao abrir o arquivo!" << '\n';
        return false;
    }

    do
    {
        std::cout << AZUL << linha << RESET << '\n';
    } while (std::getline(arquivo, linha));
    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';
    std::cout << VERMELHO << "- PARA SAIR DESTE PROGRAMA BASTA DIGITAR \"sair\"  -" << RESET << '\n';
    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';

    return true;
}

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
        std::cout << AZUL << linha << RESET << '\n';
    } while (std::getline(arquivo, linha));

    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';
    std::cout << VERMELHO << "- PARA SAIR DESTE PROGRAMA BASTA DIGITAR \"sair\"  -" << RESET << '\n';
    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';

    return true;
}

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
        std::cout << AZUL << linha << RESET << '\n';
    } while (std::getline(arquivo, linha));

    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';
    std::cout << VERMELHO << "- PARA SAIR DESTE PROGRAMA BASTA DIGITAR \"sair\"  -" << RESET << '\n';
    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';

    return true;
}

/**
 * @brief Exibe o banner de verduras lendo o conteúdo de um arquivo de texto.
 *
 * Esta função limpa a tela, tenta abrir o arquivo "includes/banners/verduras.txt"
 * e exibe seu conteúdo linha por linha com a cor definida por AZUL. Caso o arquivo
 * não possa ser aberto, exibe uma mensagem de erro e retorna false.
 * Ao final, exibe instruções em destaque para o usuário sobre como sair do programa.
 *
 * @return true se o arquivo foi aberto e exibido com sucesso, false caso contrário.
 */
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
        std::cout << AZUL << linha << RESET << '\n';
    } while (std::getline(arquivo, linha));

    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';
    std::cout << VERMELHO << "- PARA SAIR DESTE PROGRAMA BASTA DIGITAR \"sair\"  -" << RESET << '\n';
    std::cout << VERMELHO << "--------------------------------------------------" << RESET << '\n';

    return true;
}

void menu_principal_mercado(void)
{
    std::cout << VERDE << "\U0001F96C 1. Hortifruti" << RESET << '\n';
    std::cout << VERDE << "\U0001F35E 2. Padaria e confeitaria" << RESET << '\n';
    std::cout << VERDE << "\U0001F969 3. Açougue" << RESET << '\n';
    std::cout << VERDE << "\U0001F9FC 4. Limpeza" << RESET << '\n';
    std::cout << VERDE << "\U0001F6D2 5. Mercearia" << RESET << '\n';
    std::cout << VERDE << "\U0001F680 6. Utilidades e bazar" << RESET << '\n';
}

#endif // BANNER_H