/**
 * @file SRC_ConvoFluence-Bot.c
 * @author Mehedi Hasan Rifat
 * @brief In an imaginary Social-Media app called "LifeDiary" two friends, from different countries, are sharing their thoughts on each other's country! What are you waiting for, just run the program! :)
 * @version 0.1
 * @date 2023-11-12
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>

void clearScreen()
{
    const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
    write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int main()
{
    char ans;
    char press[] = " Please Press 2: ";
    char dots[] = "...";
    char notif[] = "Ruby just accepted your friend request!\n\n";
    char ruby1[] = "Hey, Rifat!";
    char rifat1[] = "Hi, Ruby!";
    char ruby2[] = "Where are you from? :)";
    char rifat2[] = "I am from a beautiful country called Bangladesh!";
    char ruby3[] = "Wow, amazing!";
    char rifat3[] = "Yes, indeed!";
    char rifat4[] = "What about you, Ruby?";
    char ruby4[] = "Well, I am from the United States. :)";
    char rifat5[] = "I have a question, Rifat!";
    char rifat6[] = "Yeah, sure.";
    char ruby5[] = "Don't you find it difficult to go to your school by boat in Bangladesh?";
    char ruby6[] = "It must be a hassle for you, right?";
    char rifat7[] = "Ruby, I am really wondering who might have told you that! Hahaha.";
    char ruby7[] = "Not really.";
    char ruby8[] = "I saw teenagers going to school using boats";
    char rifat8[] = "I understand, where did you see that?";
    char ruby9[] = "Definitely on Google!";
    char rifat9[] = "Hahaha, now I have got it!";
    char rifat10[] = "Have you ever visited Bangladesh tho?";
    char ruby10[] = "No, I have never.";
    char rifat11[] = "Ruby, the truth is...";
    char rifat12[] = "I do not go to school by boat but rather, I use my school bus! Hehe";
    char ruby11[] = "You must be lying =|";
    char rifat13[] = "Hahaha, Ruby! I am being completely true.";
    char ruby12[] = "Then the media...";
    char rifat14[] = "Yes, the media do not always show the truth.";
    char rifat15[] = "If you ever get interested in a country, you must try visiting that country to get to know it better.";
    char rifat16[] = "Unless you visit the country, you will definitely left unaware of the facts and its cultures for sure.";
    char ruby13[] = "Yeah, I got it now! Thanks for letting me know, Rifat. :)";
    char ruby14[] = "What do... you know about the country I live in?";
    char rifat17[] = "Tit for tat? Hahahaha...";
    char ruby15[] = "No, not at all! :P";
    char rifat18[] = "Well, America is a Posh Country with loads of skycrappers and sports cars! 8)";
    char ruby16[] = "Umm-hmm, really? That is what you think about the United States?... As you said, it is also not always like that as you see on the YouTube videos!";
    char ruby17[] = "Do you know where I live in Texas?";
    char rifat19[] = "Where?!! @_@";
    char ruby18[] = "I live in a village here in the United States. ^^";
    char rifat20[] = "Village in the United States? O_O";
    char ruby19[] = "Sounds unfamiliar to you?";
    char rifat21[] = "No, I mean I have never seen any villages in America on the YouTube videos I have seen so far.";
    char ruby20[] = "Exactly! You have seen on YouTube videos but not in person.";
    char rifat22[] = "Now that you have said that, I feel really enthusiastic to explore the different cultures and traditions of America now! :)";
    char ruby21[] = "Come to America sometime! We have got to meet in person for sure";
    char rifat23[] = "Hopefully, oneday! I recently applied for a scholarship in America.";
    char ruby22[] = "Oh, really?";
    char rifat24[] = "Yes! If I somehow get the scholarship, I will be able to explore your beautiful America!! :)";
    char ruby23[] = "I very much hope you get the scholarship. ^^ Can't wait for you to be here in America, my friend!";
    char rifat25[] = "Hahaha, you are a good buddy! Thanks! =)";
    char ruby24[] = "Welcome! I have to go to school now, Rifat. Meet you in person soon!";
    char rifat26[] = "Okay, Ruby! ^^ Goodbye!";
    char ruby25[] = "Goodbye, Rifat! ^^";
    char outro[] = "The End";
    char head[] = "LESSON TO BE LEARNED: ";
    char lesson[] = "You definitely have learned something from this conversation. Exploring different cultures and countries is important in our life to get to know the world better. Not only that, we get to break the misconceptions we have about different cultures through travelling. If you have the ability and money to travel, just go for it. It is totally worth it as the wise people says. You only get to live once. I repeat, not twice! Thank you!";
    char tag[] = "Mehedi Hasan Rifat\nBogura, Bangladesh.";

    clearScreen();

    printf("LifeDiary [Built by Mehedi Hasan Rifat]\n\n");
    printf("Notifications ");
    printf("loading");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(700);
    }
    clearScreen();
    printf("LifeDiary [Built by Mehedi Hasan Rifat]\n\n");
    Sleep(500);
    printf("Notifications (1): ");
    Sleep(300);
    for (int i = 0; notif[i] != 0; i++)
    {
        printf("%c", notif[i]);
        Sleep(41);
    }
    Sleep(700);
    printf("To know her Interest, ");
    Sleep(300);
    for (int i = 0; press[i] != 0; i++)
    {
        printf("%c", press[i]);
        Sleep(41);
    }
    int n;
    scanf("%d", &n);

    Sleep(500);

PROMPT:
    if (n == 2)
    {
        printf("\nInterests: ");
        char intrst[] = "Cultures and Traditions\n\n";
        Sleep(700);
        for (int i = 0; intrst[i] != 0; i++)
        {
            printf("%c", intrst[i]);
            Sleep(41);
        }
        Sleep(500);
        for (int i = 0; dots[i] != 0; i++)
        {
            printf("%c", dots[i]);
            Sleep(700);
        }
        printf("\n\n");
        char confirmation[] = "Wow! She just sent you a message! Want to reply? (y/n): ";
        for (int i = 0; confirmation[i] != 0; i++)
        {
            printf("%c", confirmation[i]);
            Sleep(41);
        }

    COND:
        scanf(" %c", &ans);
        if (ans == 'y')
        {
            goto CHAT;
        }
        else
        {
            char pr[] = ":( You have to reply to that message! Type 'y': ";
            for (int i = 0; pr[i] != 0; i++)
            {
                printf("%c", pr[i]);
                Sleep(41);
            }
            goto COND;
        }
    }
    else
    {
        for (int i = 0; press[i] != 0; i++)
        {
            printf("%c", press[i]);
            Sleep(41);
        }
        scanf("%d", &n);
        goto PROMPT;
    }

CHAT:
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(700);
    }
    printf("\n\n");
    printf("Ruby: ");

    for (int k = 0; ruby1[k] != 0; k++)
    {
        printf("%c", ruby1[k]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat1[i] != 0; i++)
    {
        printf("%c", rifat1[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby2[i] != 0; i++)
    {
        printf("%c", ruby2[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat2[i] != 0; i++)
    {
        printf("%c", rifat2[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby3[i] != 0; i++)
    {
        printf("%c", ruby3[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat3[i] != 0; i++)
    {
        printf("%c", rifat3[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat4[i] != 0; i++)
    {
        printf("%c", rifat4[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby4[i] != 0; i++)
    {
        printf("%c", ruby4[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; rifat5[i] != 0; i++) // Oops! I made a mistake while naming the character array. It would be "ruby5". Let's ignore that.
    {
        printf("%c", rifat5[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat6[i] != 0; i++)
    {
        printf("%c", rifat6[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby5[i] != 0; i++)
    {
        printf("%c", ruby5[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby6[i] != 0; i++)
    {
        printf("%c", ruby6[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat7[i] != 0; i++)
    {
        printf("%c", rifat7[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby7[i] != 0; i++)
    {
        printf("%c", ruby7[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby8[i] != 0; i++)
    {
        printf("%c", ruby8[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat8[i] != 0; i++)
    {
        printf("%c", rifat8[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby9[i] != 0; i++)
    {
        printf("%c", ruby9[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat9[i] != 0; i++)
    {
        printf("%c", rifat9[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat10[i] != 0; i++)
    {
        printf("%c", rifat10[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby10[i] != 0; i++)
    {
        printf("%c", ruby10[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat11[i] != 0; i++)
    {
        printf("%c", rifat11[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat12[i] != 0; i++)
    {
        printf("%c", rifat12[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby11[i] != 0; i++)
    {
        printf("%c", ruby11[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat13[i] != 0; i++)
    {
        printf("%c", rifat13[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby12[i] != 0; i++)
    {
        printf("%c", ruby12[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat14[i] != 0; i++)
    {
        printf("%c", rifat14[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat15[i] != 0; i++)
    {
        printf("%c", rifat15[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat16[i] != 0; i++)
    {
        printf("%c", rifat16[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby13[i] != 0; i++)
    {
        printf("%c", ruby13[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby14[i] != 0; i++)
    {
        printf("%c", ruby14[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat17[i] != 0; i++)
    {
        printf("%c", rifat17[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby15[i] != 0; i++)
    {
        printf("%c", ruby15[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat18[i] != 0; i++)
    {
        printf("%c", rifat18[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby16[i] != 0; i++)
    {
        printf("%c", ruby16[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby17[i] != 0; i++)
    {
        printf("%c", ruby17[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat19[i] != 0; i++)
    {
        printf("%c", rifat19[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby18[i] != 0; i++)
    {
        printf("%c", ruby18[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat20[i] != 0; i++)
    {
        printf("%c", rifat20[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby19[i] != 0; i++)
    {
        printf("%c", ruby19[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat21[i] != 0; i++)
    {
        printf("%c", rifat21[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby20[i] != 0; i++)
    {
        printf("%c", ruby20[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat22[i] != 0; i++)
    {
        printf("%c", rifat22[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby21[i] != 0; i++)
    {
        printf("%c", ruby21[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat23[i] != 0; i++)
    {
        printf("%c", rifat23[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby22[i] != 0; i++)
    {
        printf("%c", ruby22[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat24[i] != 0; i++)
    {
        printf("%c", rifat24[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby23[i] != 0; i++)
    {
        printf("%c", ruby23[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat25[i] != 0; i++)
    {
        printf("%c", rifat25[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby24[i] != 0; i++)
    {
        printf("%c", ruby24[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Rifat: ");
    for (int i = 0; rifat26[i] != 0; i++)
    {
        printf("%c", rifat26[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("Ruby: ");
    for (int i = 0; ruby25[i] != 0; i++)
    {
        printf("%c", ruby25[i]);
        Sleep(41);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("\t\t\t\t\t\t\t\t\t\t");
    for (int i = 0; outro[i] != 0; i++)
    {
        printf("%c", outro[i]);
        Sleep(53);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    for (int i = 0; head[i] != 0; i++)
    {
        printf("%c", head[i]);
        Sleep(41);
    }
    for (int i = 0; lesson[i] != 0; i++)
    {
        printf("%c", lesson[i]);
        Sleep(53);
    }
    printf("\n");
    for (int i = 0; dots[i] != 0; i++)
    {
        printf("%c", dots[i]);
        Sleep(500);
    }
    printf("\n");
    for (int i = 0; tag[i] != 0; i++)
    {
        printf("%c", tag[i]);
        Sleep(53);
    }

    printf("\n");

    return 0;
}