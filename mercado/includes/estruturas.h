#include <vector>
#include <string>

typedef struct FLV
{
    std::vector<std::string> frutas{"maçã", "banana", "laranja", "manga", "uva", "abacaxi", "morango", "melancia", "kiwi", "pêssego"};
    std::vector<std::string> legumes{"cenoura", "batata", "pimenta", "beringela", "alho", "pepino", "tomate", "vagem", "milho", "abobora"};
    std::vector<std::string> verduras{"alface", "couve", "espinafre", "rúcula", "agrião", "acelga", "escarola", "mostarda", "cebolinha", "salsinha"};

} FLV;

typedef struct EMOJIS
{
    std::vector<std::string> frutas{
        "\U0001F34E", // maçã
        "\U0001F34C", // banana
        "\U0001F34A", // laranja
        "\U0001F96D", // manga
        "\U0001F347", // uva
        "\U0001F34D", // abacaxi
        "\U0001F353", // morango
        "\U0001F349", // melancia
        "\U0001F95D", // kiwi
        "\U0001F351"  // pêssego
    };

    std::vector<std::string> legumes{
        "\U0001F955", // cenoura
        "\U0001F954", // batata
        "\U0001F336", // pimenta
        "\U0001F346", // beringela
        "\U0001F9C4", // alho
        "\U0001F952", // pepino
        "\U0001F345", // tomate
        "\U0001FADB", // vagem
        "\U0001F33D", // milho
        "\U0001F383"  // abobora
    };

    std::vector<std::string> verduras{
        "\U0001F96C", // alface
        "\U0001F96C", // couve
        "\U0001F96C", // espinafre
        "\U0001F96C", // rúcula
        "\U0001F96C", // agrião
        "\U0001F96C", // acelga
        "\U0001F96C", // escarola
        "\U0001F96C", // mostarda
        "\U0001F33F", // cebolinha
        "\U0001F33F"  // salsinha
    };

} EMOJIS;