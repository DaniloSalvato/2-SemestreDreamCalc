#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>

main () {

    system("MODE con cols=168 lines=60");




    int resp1, resp2, resp3;
    float a, x, b, k, res1, rad, rada, radb;



    while (1)
    {
        printf("\n");
        printf("\n");
        printf("\t\t 						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
        printf("\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
        printf("\t\tDDDDDD						CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
        printf("\t\tDDDDDDD					       CALC        CA        LC  CALCCALC        CALC\n");
        printf("\t\tDD   DDD  RR  RR  EEEEE  AAAAAAA  MM       MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
        printf("\t\tDD   DDD  RR RR   EE	 AA   AA  MMM     MMM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
        printf("\t\tDD   DDD  RRRR    EEEEE  AAAAAAA  MM M   M MM  CALC  CALCCALC        CA  LCCALCCA  LCCALCCALC\n");
        printf("\t\tDDDDDDD   RR      EE	 AA   AA  MM   M   MM  CALC  CALCCALC  CALC  CA  LCCALCCA  LCCALCCALC\n");
        printf("\t\tDDDDDD    RR	  EEEEE  AA   AA  MM       MM  CALC        CA  LCCA  LC        CA        LCCA\n");
        printf("\t\t				  		CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n");
        printf("\t\t						 CALCCALCCALCCALCCALCCALCCALCCALCCALCCALCCA\n");
        printf("\t\t						  CALCCALCCALCCALCCALCCALCCALCCALCCALCCALC\n\n\n");

        printf("\t\t                                   D R E A M    C A L C  \n");
        _sleep(1000);

        printf("\t_________________________________________________________________________________________________________\n");
        printf("\t|                                        MENU PRINCIPAL                                                  |\n");
        printf("\t|________________________________________________________________________________________________________|\n");
        printf("\t|  1 - f(x) = k                                                                                          |\n");
        printf("\t|  2 - f(x) = x^k                                                                                        |\n");
        printf("\t|  3 - f(x) = k^x                                                                                        |\n");
        printf("\t|  4 - f(x) = ln(x)                                                                                      |\n");
        printf("\t|  5 - f(x) = 1/x                                                                                        |\n");
        printf("\t|  6 - f(x) = sen(x)                                                                                     |\n");
        printf("\t|  7 - f(x) = cos(x)                                                                                     |\n");
        printf("\t|  8 - f(x) = tg(x)                                                                                      |\n");
        printf("\t|  9 - sair                                                                                              |\n");
        printf("\t|________________________________________________________________________________________________________|\n");

        printf("\n\tDigite o numero da opcao desejada: ");
        scanf("\t %d", &resp1);

        switch (resp1)
        {

        case 1:
            printf("\n\tOpcao escolhida 1 - f(x) = k.\n");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");


            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }

            switch (resp2)
            {

            case 1:
                printf("\n\tDigite o valor de x: ");
                scanf("%f", &k);
                printf("\n\tO resultado de f(%.4f) = %.4f.\n\n", k, k);

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);


                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\n\tA derivada de uma funcao constante tera seu resultado 0.\n\n");

               printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado, Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor de k da funcao: ");
                scanf("%f", &k);
                printf("\tDigite o valor do limite maximo: ");
                scanf("%f", &b);
                printf("\tDigite o valor do limite minimo: ");
                scanf("%f", &a);

                printf("\tO resultado da integral f(%.4f) com MAX %.4f e MIN %.4f  = %.4f.\n\n", k, b, a, ((k * b) - (k * a)));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 2:
            printf("\n\tOpcao escolhida 2 - f(x) = x^k\n");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }
            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                printf("\tDigite o valor de k: ");
                scanf("%f", &k);
                printf("\tO resultado da f(%.4f ^ %.4f) = %.4f.\n\n", x, k, pow(x, k));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                printf("\tDigite o valor de k: ");
                scanf("%f", &k);
                printf("\tO resultado da derivada de f(%.4f ^ %.4f) = %.4f \n\n", x, k, (pow(x, k - 1) * k));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");

                scanf("%d", &resp3);
                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\n\tDigite o valor de k da funcao: ");
                scanf("%f", &k);
                while (k == 1)
                {
                    printf("\tDigite um valor diferente de 1 por favor: ");
                    scanf("%f", &k);
                }
                printf("\tDigite o valor do limite maximo: ");
                scanf("%f", &b);
                printf("\tDigite o valor do limite minimo: ");
                scanf("%f", &a);

                printf("\tO resultado da derivada f(%.4f) com MAX %.4f e MIN %.4f = %.4f.\n\n", k, b, a, (pow(b, (k + 1)) / (k + 1) - pow(a, (k + 1)) / (k + 1)));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 3:
            printf("\tOpcao escolhida 3 - f(x) = k^x\n");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }

            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                printf("\tDigite o valor de k: ");
                scanf("%f", &k);
                while ((k == 1) && (k <= 0))
                {
                    printf("\tO Numero tem de ser diferente de 1 e maior que 0");
                    scanf("%f", &k);
                }
                printf("\tO resultado da f(%.4f ^ %.4f) = %.4f.\n\n", k, x, pow(k, x));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                printf("\tDigite o valor de k: ");
                scanf("%f", &k);
                while ((k == 1) && (k <= 0))
                {
                    printf("\tO Numero tem de ser diferente de 1 e maior que 0");
                    scanf("%f", &k);
                }
                printf("\tO resultado da derivada de f(%.4f ^ %.4f) = %.4f \n\n", k, x, (pow(k, x) * log(k)));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor de k\n");
                scanf("%f", &k);
                while ((k == 1) && (k <= 0))
                {
                    printf("\tO Numero tem de ser diferente de 1 e maior que 0");
                    scanf("%f", &k);
                }
                printf("\tDigite o valor do limite maximo: ");
                scanf("%f", &b);
                printf("\tDigite o valor do limite minimo: ");
                scanf("%f", &a);
                printf("\t\tO resultado da derivada f(%.4f) com MAX %.4f e MIN %.4f = %.4f. \n\n", k, b, a, ((pow(k, b) / log(k)) - (pow(k, a) / log(k))));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 4:

            printf("\n\tOpcao escolhida 4 - f(x) = ln(x).\n");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }
            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                while (x <= 0)
                {
                    printf("\tO Numero tem de ser maior que 0");
                    scanf("%f", &x);
                }
                printf("\tO resultado de f(ln(%.4f)) = %.4f.\n\n", x, log(x));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                while (x == 0)
                {
                    printf("\tDigite um numero diferente de 0: ");
                    scanf("%f", &x);
                }
                printf("\tA derivada de f(ln(%.4f)) = f(%.4f)\n\n", x, (1 / x));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor do limite maximo: ");
                scanf("%f", &b);
                while (b <= 0)
                {
                    printf("\tO Numero tem de ser maior que 0");
                    scanf("%f", &b);
                }
                printf("\tDigite o valor do limite minimo: ");
                scanf("%f", &a);
                while (a <= 0)
                {
                    printf("\tO Numero tem de ser maior que 0");
                    scanf("%f", &a);
                }
                printf("\tO resultado da integral de f(ln(x)) com MAX %.4f e MIN %.4f = %.4f.\n\n", b, a, ((b * log(b) - b) - (a * log(a) - a)));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 5:

            printf("\n\tOpcao escolhida 5 f(x) = 1/x\n");
            _sleep(1000);

           printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }

            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                while (x == 0)
                {
                    printf("\tDigite um numero diferente de 0: ");
                    scanf("%f", &x);
                }
                printf("\tO resultado de f(1 / %.4f) = %.4f.\n\n", x, 1 / x);

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado, Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                while (x == 0)
                {
                    printf("\tDigite um numero diferente de 0: ");
                    scanf("%f", &x);
                }
                printf("\tA derivada de f(1 / %.4f) = %.4f\n\n", x, -1 / pow(x, 2));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor do limite maximo: ");
                scanf("%f", &b);
                while (x == 0)
                {
                    printf("\tDigite um numero diferente de 0: ");
                    scanf("%f", &b);
                }
                printf("\tDigite o valor do limite minimo: ");
                scanf("%f", &a);
                while (x == 0)
                {
                    printf("\tDigite um numero diferente de 0: ");
                    scanf("%f", &a);
                }
                printf("\tA integral de f(1 / x) com MAX %.4f e MIN %.4f = %.4f\n\n", b, a, (log(b) - log(a)));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 6:
            printf("\n\tOpcao escolhida 6 - f(x) = sen(x)\n");
            _sleep(1000);

           printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }
            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x em graus: ");
                scanf("%f", &x);
                rad = (x * M_PI) / 180;
                printf("\tO resultado de f(sen %.4f) = %.4f\n\n", x, sin((rad * 180) / M_PI));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x em graus: ");
                scanf("%f", &x);
                rad = (x * M_PI) / 180;
                printf("\tA derivada de f(%.4f) = %.4f\n\n", x, cos(rad));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor do limite maximo em graus: ");
                scanf("%f", &b);
                radb = (b * M_PI) / 180;
                printf("\tDigite o valor do limite minimo em graus: ");
                scanf("%f", &a);
                rada = (a * M_PI) / 180;
                printf("\tO resultado da integral f(sen x) com MAX %.4f e MIN %.4f = %.4f\n\n", b, a, (-cos(radb) - (-cos(rada))));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }

                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 7:
            printf("\n\tOpcao escolhida 7 - f(x) = cos(x)");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }
            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x em graus: ");
                scanf("%f", &x);
                rad = (x * M_PI) / 180;
                printf("\tO resultado de f(%.4f) = %.4f\n\n", x, cos((rad * 180) / M_PI));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado, Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x em graus: ");
                scanf("%f", &x);
                rad = (x * M_PI) / 180;
                printf("\tA derivada de f(%.4f)= %.4f\n\n", x, -sin(rad));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor do limite maximo em graus: ");
                scanf("%f", &b);
                radb = (b * M_PI) / 180;
                printf("\tDigite o valor do limite minimo em graus: ");
                scanf("%f", &a);
                rada = (a * M_PI) / 180;
                printf("\tO resultado da integral f(cos x) com MAX %.4f e MIN %.4f = %.4f\n\n", b, a, (sin(radb) - sin(rada)));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 8:
            printf("\n\tOpcao escolhida 8 - f(x) = tg(x)\n");
            _sleep(1000);

            printf("\n\t ______________________________\n");
            printf("\t|     Deseja:       \n");
            printf("\t|______________________________|\n");
            printf("\t| 1 - Resolver normalmente     |\n");
            printf("\t| 2 - Derivar                  |\n");
            printf("\t| 3 - Integrar                 |\n");
            printf("\t| 4 - Voltar                   |\n");
            printf("\t|______________________________|\n");
            printf("\n\tDigite a opcao escolhida: ");
            scanf("%d", &resp2);
            printf("\t______________________________\n");

            while (resp2 != 1 && resp2 != 2 && resp2 != 3 && resp2 != 4)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf("%d", &resp2);
            }
            switch (resp2)
            {

            case 1:
                printf("\tDigite o valor de x em graus: ");
                scanf("%f", &x);
                while (x == 90 || x == 180)
                {
                    printf("\tDigite um numero diferente de 90 ou 180.\n");
                    scanf("%f", &x);
                }
                rad = (x * M_PI) / 180;
                printf("\tO resultado de f(tg %.4f) = %.4f\n\n", x, tan((rad * 180 / M_PI)));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 2:
                printf("\tDigite o valor de x: ");
                scanf("%f", &x);
                rad = (x * M_PI) / 180;
                printf("\tA derivada de f(tg %.4f)= %.4f\n\n", x, pow(1 / cos((rad)), 2));

                 printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 3:
                printf("\tDigite o valor do limite maximo em graus: ");
                scanf("%f", &b);
                radb = (b * M_PI) / 180;
                printf("\tDigite o valor do limite minimo em graus: ");
                scanf("%f", &a);
                rada = (a * M_PI) / 180;
                printf("\tO resultado da integral f(tg x) com MAX %.4f e MIN %.4f= %.4f\n\n", b, a, (-log(abs(cos(radb)))) - (-log(abs(cos(radb)))));

                printf("\t _________________________________\n");
                printf("\t|     Deseja voltar ao menu?      |\n");
                printf("\t|_________________________________|\n");
                printf("\t|  1 - Sim?                       |\n");
                printf("\t|  2 - Nao, encerrar o programa?  |\n");
                printf("\t|_________________________________|\n");
                printf("\n\tDigite a opcao escolhida: ");
                scanf("%d", &resp3);

                if (resp3 == 1)
                {
                    fflush(stdin);
                    continue;
                }
                else if (resp3 == 2)
                {
                    printf("Processo finalizado. Obrigado por usar a DreamCalc!\n");
                      _sleep(5000);
                }
                break;

            case 4:
                printf("\tVoltando ao menu\n");
                _sleep(1000);
                fflush(stdin);
                continue;
            }
            break;

        case 9:
            printf("Processo finalizado. Obrigado por usar a DreamCalc!");
            _sleep(5000);
            break;

        default:
            while (resp1 < 1 || resp1 > 9)
            {
                fflush(stdin);
                printf("\Opcao invalida, voce pode ter digitado uma letra, simbolo ou numero diferente, por favor digite uma opcao valida!\n\n");
                scanf(" %d", &resp1);
            }
            continue;
        }
        break;
    }
    return 0;
}
