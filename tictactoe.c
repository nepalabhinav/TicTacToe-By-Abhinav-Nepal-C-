#include <stdio.h>

void print_board(char box[10])
{
    system("cls");

    printf("\n\n           ###     TIC TAC TOE BY ABHINAV NEPAL      ###\n\n\n");

    int a = 0;
    int i = 0;
    while (i <= 2)
    {
        printf("         ");

        int j = 0;
        while (j <= 2)
        {
            printf(" | ");
            printf("%c", box[a]);

            j += 1;
            a += 1;
        }

        i += 1;

        printf(" |\n          -------------\n\n");
    }
}

void x_win(char box[10])
{
    print_board(box);
    printf("\n         Player X has won!\n");

    printf("         play again? (press x to play again): ");
    char user_input;
    scanf(" %c", &user_input);
    if (user_input == 'x')
    {
        main();
    }
}

void y_win(char box[10])
{
    printf("\n         Player O has won!\n");

    printf("         play again? (press x to play again): ");
    char user_input;
    scanf(" %c", &user_input);
    if (user_input == 'x')
    {
        main();
    }
}

void tie(char box[10])
{
    printf("\n         The game has been tied!\n");

    printf("         play again? (press x to play again): ");
    char user_input;
    scanf(" %c", &user_input);
    if (user_input == 'x')
    {
        main();
    }
}

void game()
{
    char box[10] = "123456789";

    int input;
    char x = 'X';
    char y = 'O';
    int run = 1; //run is True
    int step = 0;

    while (run == 1)
    {
        // Player x
        print_board(box);
        printf("         Entering character will end the program\n\n");
        printf("         Enter X: ");
        int i = 0;
        int a = 0;
        while (i < 1)
        {
            scanf(" %d", &input);
            if (input<10 & input> 0 & box[input - 1] != x & box[input - 1] != y)
            {
                i = 1;
            }
            else
            {
                printf("Enter Again: ");
                i = 0;
                a += 1;
            }
            if (a > 12)
            {
                system("cls");
                exit(0);
            }
        }
        box[input - 1] = x;
        system("cls");
        if (box[0] == x & box[4] == x & box[8] == x)
        {
            x_win(box);
            break;
        }
        if (box[2] == x & box[4] == x & box[6] == x)
        {
            x_win(box);
            break;
        }
        if (box[0] == x & box[3] == x & box[6] == x)
        {
            x_win(box);
            break;
        }
        if (box[1] == x & box[4] == x & box[7] == x)
        {
            x_win(box);
            break;
        }
        if (box[2] == x & box[5] == x & box[8] == x)
        {
            x_win(box);
            break;
        }
        if (box[0] == x & box[1] == x & box[2] == x)
        {
            x_win(box);
            break;
        }
        if (box[3] == x & box[4] == x & box[5] == x)
        {
            x_win(box);
            break;
        }
        if (box[6] == x & box[7] == x & box[8] == x)
        {
            x_win(box);
            break;
        }
        system("cls");

        step += 1;

        if (step > 8)
        {
            tie(box);
            break;
        }

        // Player y
        print_board(box);
        printf("         Entering character will end the program\n\n");
        printf("         Enter O: ");
        int j = 0;
        int b = 0;
        while (j < 1)
        {
            scanf(" %d", &input);
            if (input<10 & input> 0 & box[input - 1] != x & box[input - 1] != y)
            {
                j = 1;
            }
            else
            {
                printf("Enter Again: ");
                j = 0;
                b += 1;
            }
            if (b > 12)
            {
                system("cls");
                exit(0);
            }
        }
        box[input - 1] = y;
        system("cls");
        if (box[0] == y & box[4] == y & box[8] == y)
        {
            y_win(box);
            break;
        }
        if (box[2] == y & box[4] == y & box[6] == y)
        {
            y_win(box);
            break;
        }
        if (box[0] == y & box[3] == y & box[6] == y)
        {
            y_win(box);
            break;
        }
        if (box[1] == y & box[4] == y & box[7] == y)
        {
            y_win(box);
            break;
        }
        if (box[2] == y & box[5] == y & box[8] == y)
        {
            y_win(box);
            break;
        }
        if (box[0] == y & box[1] == y & box[2] == y)
        {
            y_win(box);
            break;
        }
        if (box[3] == y & box[4] == y & box[5] == y)
        {
            y_win(box);
            break;
        }
        if (box[6] == y & box[7] == y & box[8] == y)
        {
            y_win(box);
            break;
        }

        step += 1;
    }
}

main()
{
    game();
}