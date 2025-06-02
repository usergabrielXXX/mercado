#ifndef BANNERS_H
#define BANNER_H

#ifdef __linux__
#define PRETO "\033[30m"
#define VERMELHO "\033[31m"
#define VERDE "\033[32m"
#define AMARELO "\033[33m"
#define AZUL "\033[34m"
#define MAGENTA "\033[35m"
#define CIANO "\033[36m"
#define BRANCO "\033[37m"
#define CINZA_CLARO "\033[90m"
#define VERMELHO_CLARO "\033[91m"
#define VERDE_CLARO "\033[92m"
#define AMARELO_CLARO "\033[93m"
#define AZUL_CLARO "\033[94m"
#define MAGENTA_CLARO "\033[95m"
#define CIANO_CLARO "\033[96m"
#define BRANCO_CLARO "\033[97m"
#define FUNDO_PRETO "\033[40m"
#define FUNDO_VERMELHO "\033[41m"
#define FUNDO_VERDE "\033[42m"
#define FUNDO_AMARELO "\033[43m"
#define FUNDO_AZUL "\033[44m"
#define FUNDO_MAGENTA "\033[45m"
#define FUNDO_CIANO "\033[46m"
#define FUNDO_BRANCO "\033[47m"
#define FUNDO_CINZA_CLARO "\033[100m"
#define FUNDO_VERMELHO_CLARO "\033[101m"
#define FUNDO_VERDE_CLARO "\033[102m"
#define FUNDO_AMARELO_CLARO "\033[103m"
#define FUNDO_AZUL_CLARO "\033[104m"
#define FUNDO_MAGENTA_CLARO "\033[105m"
#define FUNDO_CIANO_CLARO "\033[106m"
#define FUNDO_BRANCO_CLARO "\033[107m"
#define ITALICO "\033[3m"
#define NEGRITO "\033[1m"
#define SUBLINHADO "\033[4m"
#define INVERSO "\033[7m"
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

    // MENU DE HORTIFRUTI
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

        std::cout << VERMELHO << SUBLINHADO << NEGRITO << "PARA VOLTAR AO MENU PRINCIPAL BASTA DIGITAR \"voltar\"" << RESET << '\n';

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

#endif // BANNER_H