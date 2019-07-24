

/*
        #########################################################

                    Start a naming game with main function

        #########################################################

*/


#include<stdio.h>
#include<conio.h>

int r1,r,c1,i,j,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,N1,N2,N3,N4,N5,N6,N7,N8,N9,N10,N11,N12,N13,N14,N15,N16,N17,N18,N19,N20,N21,N22,N23,N24;
char a[][6]={ 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', ' ', ' ', ' ', ' '};


int main()
{
    char c;
    printf("\n\n\t\t<= WELL COME TO OUR NAMMING GAME =>");
    printf("\n\n\t\t  Press any key to show the GAME\n\n\t\t");
    scanf("%c",&c);
    system("cls");
    printf("\n\n\tThink a name and enter the lenght or size of the name : ");
    scanf("%d",&r);

    if(r>=2 && r<=15)
        {
            play();
            printf("\n\n\tpresented by");
        }
    else
        {
        system("cls");
        printf("\n\n\tPlease input the correct size from 2 to 15 ");
        printf("\n\tPress again the size of your mind name : ");
        scanf("%d",&r);

        if(r>=2 && r<=15)
        {
            play();
            printf("\n\n\tpresented by");
        }
        else
            {
                system("cls");
            printf("\n\n\t   Sorry you have failed to give correct input");
            }}
        printf("\n\n\n\n\tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
        printf("\n\tAA                                              AA");
        printf("\n\tAA                                              AA");
        printf("\n\tAA          PROGRAMMER AL KAZI  AKASH           AA\n\tAA           UTTARA UNIVERSITY DHAKA\t\tAA");
        printf("\n\tAA                                              AA");
        printf("\n\tAA                                              AA");
        printf("\n\tAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");

    getch();
}

void play()
{
    if(r==2)
        name2();
    else if(r==3)
        name3();
    else if(r==4)
        name4();
    else if(r==5)
        name5();
    else if(r==5)
        name5();
    else if(r==6)
        name6();
    else if(r==7)
        name7();
    else if(r==8)
        name8();
    else if(r==9)
        name9();
    else if(r==10)
        name10();
    else if(r==11)
        name11();
    else if(r==12)
        name12();
    else if(r==13)
        name13();
    else if(r==14)
        name14();
    else if(r==15)
        name15();
}



/*
        #######################################################

                Calling all function in a single function

        #######################################################

*/
void name2()
{
    for2();
    start();
    system("cls");
    fore2();
    restart2();
}
void name3()
{
    for3();
    start();
    system("cls");
    fore3();
    restart3();
}
void name4()
{
    for4();
    start();
    system("cls");
    fore4();
    restart4();
}
void name5()
{
    for5();
    start();
    system("cls");
    fore5();
    restart5();
}


void name6()
{
    for6();
    start();
    system("cls");
    fore6();
    restart6();
}

void name7()
{
    for7();
    start();
    system("cls");
    fore7();
    restart7();
}

void name8()
{
    for8();
    start();
    system("cls");
    fore8();
    restart8();
}
void name9()
{
    for9();
    start();
    system("cls");
    fore9();
    restart9();
}
void name10()
{
    for10();
    start();
    system("cls");
    fore10();
    restart10();
}
void name11()
{
    for11();
    start();
    system("cls");
    fore11();
    restart11();
}
void name12()
{
    for12();
    start();
    system("cls");
    fore12();
    restart12();
}
void name13()
{
    for13();
    start();
    system("cls");
    fore13();
    restart13();
}
void name14()
{
    for14();
    start();
    system("cls");
    fore14();
    restart14();
}

void name15()
{
    for15();
    start();
    system("cls");
    fore15();
    restart15();
}

/*
      ####################################################
                 For all function for this program
      ###################################################

*/

void start()
{

    printf("\n\n");
    for(i=1;i<=6;i++)
    printf("%4d",i);

    printf("\n\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            printf("%4c",a[i][j]);
        printf("\n\n");
    }

}

void start2()
{

    printf("\n\n");
    for(i=1;i<=5;i++)
    printf("%4d",i);

    printf("\n\n");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            printf("%4c",a[j][i]);
        printf("\n\n");
    }

}

/*
        ##########################################
                    For Three size name
        ##########################################

*/



void for2()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
}

void fore2()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
}


void restart2()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }
}


/*
        ##########################################
                    For Three size name
        ##########################################

*/



void for3()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
}

void fore3()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");

}


void restart3()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }

}


/*
        ##########################################
                    For Four size name
        ##########################################

*/

void for4()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
}

void fore4()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");

}


void restart4()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

}




/*
        ##########################################
                    For Five size name
        ##########################################

*/

void for5()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
}

void fore5()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
}


void restart5()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }
}



/*
        ##########################################
                    For six size name
        ##########################################

*/


void for6()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
}

void fore6()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
}


void restart6()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }
}



/*
        ##########################################
                    For seven size name
        ##########################################

*/


void for7()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
}

void fore7()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
}


void restart7()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }
}




/*
        ##########################################
                    For eight size name
        ##########################################

*/


void for8()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
}

void fore8()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
}


void restart8()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }
  for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }
}



/*
        ##########################################
                    For nine size name
        ##########################################

*/


void for9()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
}

void fore9()
{
    system("cls");
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
}


void restart9()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

     for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

     for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }

}



/*
        ##########################################
                    For Ten size name
        ##########################################

*/


void for10()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
}

void fore10()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
}


void restart10()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

     for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

     for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }

     for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
}




/*
        ##########################################
                    For Eleven size name
        ##########################################

*/


void for11()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
    start();
    printf("\nSelect the column where has your 11th letter : ");
    scanf("%d",&n11);
    system("cls");
}

void fore11()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 11th letter : ");
    scanf("%d",&N11);
    system("cls");

}


void restart11()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

      for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

      for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }
      for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
      for(i=N11-1;i<N11;i++)
    {
        for(j=n11-1;j<n11;j++)
            printf("%c",a[i][j]);

    }
}


/*
        ##########################################
                    For Twelve size name
        ##########################################

*/


void for12()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
    start();
    printf("\nSelect the column where has your 11th letter : ");
    scanf("%d",&n11);
    system("cls");
    start();
    printf("\nSelect the column where has your 12th letter : ");
    scanf("%d",&n12);
    system("cls");
}

void fore12()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 11th letter : ");
    scanf("%d",&N11);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 12th letter : ");
    scanf("%d",&N12);
    system("cls");

}


void restart12()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

      for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

      for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }
      for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
      for(i=N11-1;i<N11;i++)
    {
        for(j=n11-1;j<n11;j++)
            printf("%c",a[i][j]);

    }

      for(i=N12-1;i<N12;i++)
    {
        for(j=n12-1;j<n12;j++)
            printf("%c",a[i][j]);

    }
}


/*
        ##########################################
                    For Thirteen size name
        ##########################################

*/


void for13()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
    start();
    printf("\nSelect the column where has your 11th letter : ");
    scanf("%d",&n11);
    system("cls");
    start();
    printf("\nSelect the column where has your 12th letter : ");
    scanf("%d",&n12);
    system("cls");
    start();
    printf("\nSelect the column where has your 13th letter : ");
    scanf("%d",&n13);
    system("cls");
}

void fore13()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 11th letter : ");
    scanf("%d",&N11);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 12th letter : ");
    scanf("%d",&N12);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 13th letter : ");
    scanf("%d",&N13);
    system("cls");

}


void restart13()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

      for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

      for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }
      for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
      for(i=N11-1;i<N11;i++)
    {
        for(j=n11-1;j<n11;j++)
            printf("%c",a[i][j]);

    }
      for(i=N12-1;i<N12;i++)
    {
        for(j=n12-1;j<n12;j++)
            printf("%c",a[i][j]);

    }
      for(i=N13-1;i<N13;i++)
    {
        for(j=n13-1;j<n13;j++)
            printf("%c",a[i][j]);

    }
}


/*
        ##########################################
                    For Fourteen size name
        ##########################################

*/


void for14()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
    start();
    printf("\nSelect the column where has your 11th letter : ");
    scanf("%d",&n11);
    system("cls");
    start();
    printf("\nSelect the column where has your 12th letter : ");
    scanf("%d",&n12);
    system("cls");
    start();
    printf("\nSelect the column where has your 13th letter : ");
    scanf("%d",&n13);
    system("cls");
    start();
    printf("\nSelect the column where has your 14th letter : ");
    scanf("%d",&n14);
    system("cls");
}

void fore14()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 11th letter : ");
    scanf("%d",&N11);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 12th letter : ");
    scanf("%d",&N12);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 13th letter : ");
    scanf("%d",&N13);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 14th letter : ");
    scanf("%d",&N14);
    system("cls");

}


void restart14()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

      for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

      for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }
      for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
      for(i=N11-1;i<N11;i++)
    {
        for(j=n11-1;j<n11;j++)
            printf("%c",a[i][j]);

    }
      for(i=N12-1;i<N12;i++)
    {
        for(j=n12-1;j<n12;j++)
            printf("%c",a[i][j]);

    }
      for(i=N13-1;i<N13;i++)
    {
        for(j=n13-1;j<n13;j++)
            printf("%c",a[i][j]);

    }
      for(i=N14-1;i<N14;i++)
    {
        for(j=n14-1;j<n14;j++)
            printf("%c",a[i][j]);

    }
}


/*
        ##########################################
                    For Fifteen size name
        ##########################################

*/


void for15()
{
    system("cls");
    start();
    printf("\nSelect the column where has your 1st letter : ");
    scanf("%d",&n1);
    system("cls");
    start();
    printf("\nSelect the column where has your 2nd letter : ");
    scanf("%d",&n2);
    system("cls");
    start();
    printf("\nSelect the column where has your 3rd letter : ");
    scanf("%d",&n3);
    system("cls");
    start();
    printf("\nSelect the column where has your 4th letter : ");
    scanf("%d",&n4);
    system("cls");
    start();
    printf("\nSelect the column where has your 5th letter : ");
    scanf("%d",&n5);
    system("cls");
    start();
    printf("\nSelect the column where has your 6th letter : ");
    scanf("%d",&n6);
    system("cls");
    start();
    printf("\nSelect the column where has your 7th letter : ");
    scanf("%d",&n7);
    system("cls");
    start();
    printf("\nSelect the column where has your 8th letter : ");
    scanf("%d",&n8);
    system("cls");
    start();
    printf("\nSelect the column where has your 9th letter : ");
    scanf("%d",&n9);
    system("cls");
    start();
    printf("\nSelect the column where has your 10th letter : ");
    scanf("%d",&n10);
    system("cls");
    start();
    printf("\nSelect the column where has your 11th letter : ");
    scanf("%d",&n11);
    system("cls");
    start();
    printf("\nSelect the column where has your 12th letter : ");
    scanf("%d",&n12);
    system("cls");
    start();
    printf("\nSelect the column where has your 13th letter : ");
    scanf("%d",&n13);
    system("cls");
    start();
    printf("\nSelect the column where has your 14th letter : ");
    scanf("%d",&n14);
    system("cls");
    start();
    printf("\nSelect the column where has your 15th letter : ");
    scanf("%d",&n15);
    system("cls");
}

void fore15()
{
    start2();
    printf("\nAgain select the column where has your 1st letter : ");
    scanf("%d",&N1);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 2nd letter : ");
    scanf("%d",&N2);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 3rd letter : ");
    scanf("%d",&N3);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 4th letter : ");
    scanf("%d",&N4);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 5th letter : ");
    scanf("%d",&N5);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 6th letter : ");
    scanf("%d",&N6);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 7th letter : ");
    scanf("%d",&N7);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 8th letter : ");
    scanf("%d",&N8);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 9th letter : ");
    scanf("%d",&N9);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 10th letter : ");
    scanf("%d",&N10);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 11th letter : ");
    scanf("%d",&N11);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 12th letter : ");
    scanf("%d",&N12);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 13th letter : ");
    scanf("%d",&N13);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 14th letter : ");
    scanf("%d",&N14);
    system("cls");
    start2();
    printf("\nAgain select the column where has your 15th letter : ");
    scanf("%d",&N15);
    system("cls");


}


void restart15()
{

    printf("\n\n\t# Your mind name is : ");

    for(i=N1-1;i<N1;i++)
    {
        for(j=n1-1;j<n1;j++)
            printf("%c",a[i][j]);

    }

    for(i=N2-1;i<N2;i++)
    {
        for(j=n2-1;j<n2;j++)
            printf("%c",a[i][j]);

    }

    for(i=N3-1;i<N3;i++)
    {
        for(j=n3-1;j<n3;j++)
            printf("%c",a[i][j]);

    }


    for(i=N4-1;i<N4;i++)
    {
        for(j=n4-1;j<n4;j++)
            printf("%c",a[i][j]);

    }

    for(i=N5-1;i<N5;i++)
    {
        for(j=n5-1;j<n5;j++)
            printf("%c",a[i][j]);

    }

    for(i=N6-1;i<N6;i++)
    {
        for(j=n6-1;j<n6;j++)
            printf("%c",a[i][j]);

    }

     for(i=N7-1;i<N7;i++)
    {
        for(j=n7-1;j<n7;j++)
            printf("%c",a[i][j]);

    }

      for(i=N8-1;i<N8;i++)
    {
        for(j=n8-1;j<n8;j++)
            printf("%c",a[i][j]);

    }

      for(i=N9-1;i<N9;i++)
    {
        for(j=n9-1;j<n9;j++)
            printf("%c",a[i][j]);

    }
      for(i=N10-1;i<N10;i++)
    {
        for(j=n10-1;j<n10;j++)
            printf("%c",a[i][j]);

    }
      for(i=N11-1;i<N11;i++)
    {
        for(j=n11-1;j<n11;j++)
            printf("%c",a[i][j]);

    }

     for(i=N12-1;i<N12;i++)
    {
        for(j=n12-1;j<n12;j++)
            printf("%c",a[i][j]);

    }
     for(i=N13-1;i<N13;i++)
    {
        for(j=n13-1;j<n13;j++)
            printf("%c",a[i][j]);

    }
     for(i=N14-1;i<N14;i++)
    {
        for(j=n14-1;j<n14;j++)
            printf("%c",a[i][j]);

    }
     for(i=N15-1;i<N15;i++)
    {
        for(j=n15-1;j<n15;j++)
            printf("%c",a[i][j]);

    }
}





