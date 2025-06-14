#include "includes/file.h"

int main(void)
{
    std::string _opcao_menu, opcao_hortifruti;
    struct VARIAVEIS variavel;

    do
    {
        menu_principal_mercado();

        printf("%s[MENU] Insira a opção desejada: %s", NEGRITO, RESET);
        std::getline(std::cin, _opcao_menu);

        op_menu(_opcao_menu);
        retornarMensagens(_opcao_menu);

    } while (std::strcmp(_opcao_menu.c_str(), "sair") != 0);

    return 0;
}
