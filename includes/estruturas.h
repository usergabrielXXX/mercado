#ifndef ESTRUTURAS_H
#define ESTRUTURAS_H

#include <vector>
#include <string>
#include "cores.h"
typedef struct PRODUTOS_FLV
{
    std::vector<std::string> frutas{"maçã", "banana", "laranja", "manga", "uva", "abacaxi", "morango", "melancia", "kiwi", "pêssego"};
    std::vector<std::string> legumes{"cenoura", "batata", " pimenta", "beringela", "alho", "pepino", "tomate", " vagem", "milho", "abobora"};
    std::vector<std::string> verduras{"alface", "couve", "espinafre", "rúcula", "agrião", "acelga", "escarola", "mostarda", "cebolinha", "salsinha"};

} PRODUTOS_FLV;

typedef struct EMOJIS_PRODUTOS_FLV
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

} EMOJIS_PRODUTOS_FLV;

typedef struct PRECOS_HORTIFRUTI
{
    std::vector<double> preco_frutas{
        6.49,  // maçã
        4, 29, // banana
        3.79,  // laranja
        5.59,  // manga
        9.89,  // uva
        7.99,  // abacaxi
        8.49,  // morango
        2.99,  // melancia
        1.99,  // kiwi
        7.29   // pêssego
    };

    std::vector<double> preco_legumes{

        3.49, // cenoura
        4.19, // batata
        6.90, // pimenta
        5.29, // berinjela
        2.49, // alho
        3.79, // pepino
        6.59, // tomate
        7.99, // vagem
        1.99, // milho
        2.79  // abóbora
    };

    std::vector<double> preco_verduras{
        2.99, // alface
        2.49, // couve
        3.49, // espinafre
        2.79, // rúcula
        2.59, // agrião
        4.19, // acelga
        3.89, // escarola
        2.99, // mostarda
        1.99, // cebolinha
        1.99  // salsinha
    };

} PRECOS_HORTIFRUTI;

typedef struct VARIAVEIS
{
    std::string op_fruta, op_legumes, op_verduras;
} VARIAVEIS;

/* formas de pagamento
   mexer nisso aqui depois */
   
// typedef struct FORMAS_DE_PAGAMENTO
// {
//     std::vector<std::string> f_pagamento{"pix, crédito, debito"};
// } FORMAS_DE_PAGAMENTO;

#endif // ESTRUTURAS_H