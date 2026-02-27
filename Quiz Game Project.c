#include <stdio.h>
int main(){
    int i;
    int r,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point1=0,point2=0,point3=0,point4=0,point5=0,point6=0,point7=0,point8=0,point9=0,point10=0;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;


    printf("WELLCOME TO OUR MINI QUIZ GAME C PROJECT\n\n");
    printf("GAME DEVELOP BY\n\n");
    printf("MD RABBY HASAN\n\nMD SADMAN SHAKIB\n\nTousif Akram Rubaith\n\nAbdullah Al Sadid\n\nMotasim Shahriar\n\nRakib hasan Rafi\n\n");

   printf("*** Press 1 to start the game\n");
   printf("*** Press 0 to quit the game\n");

   scanf("%d", &i);

   if(i==1)
   {
        printf("The game has started\n\n");
   }
   else if(i==0)
   {
        printf("The game has ended\n\n");
   }
   else
   {
        printf("invalid\n\n");
   }
    if(i==1)
    {

        printf("\n");
        printf("                                01. Which operator is used for taking input from the user in C?\n\n");

        printf("                                1) input\n");

        printf("                                2) read\n");

        printf("                                3) print\n");

        printf("                                4) scanf\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans1);
        printf("\n");
        if(ans1==4)
        {

            printf("                                Correct Answer\n");
            point1=5;

            printf("                                Congratulations! You have scored %d points.\n",point1);
            printf("============================================================================================================================================================\n");
        }
        else
        {
            ;
            printf("                                Wrong Answer\n");
            point01=0 ;

            printf("                                Oops! You have scored %d point.\n",point01);

            printf("                                The correct answer is: 4) scanf\n");
            printf("============================================================================================================================================================\n");
        }
        printf("\n");

        printf("                                02. Which of the following is an example of a web browser?\n\n");

        printf("                                1) Adobe Photoshop\n");

        printf("                                2) Microsoft Excel\n");

        printf("                                3) Google\n");


        printf("                                4) Microsoft Word\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans2);
        printf("\n");
        if(ans2==3)
        {

            printf("                                Correct Answer\n");
            point2=5;

            printf("                                Congratulations! You have scored %d points.\n",point2);
           printf("============================================================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point02=0;

            printf("                                Oops! You have scored %d point.\n",point02);

            printf("                                The correct answer is: 3) Google\n");
            printf("============================================================================================================================================================\n");
        }

        printf("\n");

        printf("                                03. What is the correct way to write a single-line comment in C?\n\n");


        printf("                                1) /*comment*/\n");

        printf("                                2) //comment\n");

        printf("                                3) <!--comment-->\n");

        printf("                                4) **comment**\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans3);
        printf("\n");
        if(ans3==2)
        {

            printf("                                Correct Answer\n");
            point3=5;

            printf("                                Congratulations! You have scored %d points.\n",point3);
           printf("============================================================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point03=0;

            printf("                                Oops! You have scored %d point.\n",point03);

            printf("                                The correct answer is: 2) //comment\n");
            printf("============================================================================================================================================================\n");
        }

        printf("\n");

        printf("                                04. What is the function of a firewall in network security?\n\n");

        printf("                                1) To protect against viruses\n");

        printf("                                2) To block unwanted websites\n");

        printf("                                3) To prevent unauthorized access\n");

        printf("                                4) To improve internet speed\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans4);
        printf("\n");
        if(ans4==3)
        {

            printf("                                Correct Answer\n");
            point4=5;

            printf("                                Congratulations! You have scored %d points.\n",point4);
           printf("============================================================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point04=0;

            printf("                                Oops! You have scored %d point.\n",point04);

            printf("                                The correct answer is: 3) To prevent unauthorized access\n");
            printf("============================================================================================================================================================\n");
        }

        printf("\n");

        printf("                                05. What is the output of the following code snippet?\n\n");
        printf("                                              #include<stdio.h>\n                                              int main() {\n                                              int x=10;\n                                              x++;\n                                        ");
        printf("%s","      printf(\"%d\",x);\n                                              return 0;\n                                              }\n\n");
        printf("                                1) 10\n");
        printf("                                2) 11\n");
        printf("                                3) 12\n");
        printf("                                4) Error\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans5);
        printf("\n");
        if(ans5==2)
        {
            printf("                                Correct Answer\n");
            point5=5;
            printf("                                Congratulations! You have scored %d points.\n",point5);
           printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point05=0;
            printf("                                Oops! You have scored %d point.\n",point05);
            printf("                                The correct answer is: 2) 11\n");
            printf("============================================================================================================================================================\n");
        }

        printf("\n");

        printf("                                06. What does the term 'URL' stand for??\n\n");
        printf("                                1) Universal Resource Locator\n");
        printf("                                2) Uniform Resource Locator\n");
        printf("                                3) Universal Reference Locator\n");
        printf("                                4) Uniform Reference Locator\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans6);
        printf("\n");
        if(ans6==2)
        {
            printf("                                Correct Answer\n");
            point6=5;
            printf("                                Congratulations! You have scored %d points.\n",point6);
           printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point06=0;
            printf("                                Oops! You have scored %d point.\n",point06);
            printf("                                The correct answer is: 2) Uniform Resource Locator\n");
            printf("============================================================================================================================================================\n");
        }

        printf("\n");


        printf("                                07. What is the correct way to end a C statement?\n\n");
        printf("                                1) ;\n");
        printf("                                2) :\n");
        printf("                                3) .\n");
        printf("                                4) ,\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans7);
        printf("\n");
        if(ans7==1)
        {
            printf("                                Correct Answer\n");
            point7=5;
            printf("                                Congratulations! You have scored %d points.\n",point7);
           printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point07=0;
            printf("                                Oops! You have scored %d point.\n",point07);
            printf("                                The correct answer is: 1) ;\n");
           printf("============================================================================================================================================================\n");
        }
        printf("\n");

        printf("                                08. What does CPU stand for?\n\n");
        printf("                                1) Central Processing Unit\n");
        printf("                                2) Computer Processing Unit\n");
        printf("                                3) Control Processing Unit\n");
        printf("                                4) Central Power Unit\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans8);
        printf("\n");
        if(ans8==1)
        {
            printf("                                Correct Answer\n");
            point8=5;
            printf("                                Congratulations! You have scored %d points.\n",point8);
            printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point08=0;
            printf("                                Oops! You have scored %d point.\n",point08);
            printf("                                The correct answer is: 1) Central Processing Unit\n");
            printf("============================================================================================================================================================\n");

        }

        printf("\n");

        printf("                                09. What is the index of the last element in an array with 10 elements?\n\n");
        printf("                                1) 10\n");
        printf("                                2) 9\n");
        printf("                                3) 0\n");
        printf("                                4) 1\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans9);
        printf("\n");
        if(ans9==2)
        {
            printf("                                Correct Answer\n");
            point9=5;
            printf("                                Congratulations! You have scored %d points.\n",point9);
            printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point09=0;
            printf("                                Oops! You have scored %d point.\n",point09);
            printf("                                The correct answer is: 2) 9\n");
            printf("============================================================================================================================================================\n");
        }
        printf("\n");
        printf("                                10. What is the correct way to include the standered input/output library in C?\n\n");
        printf("                                1) #include<stdio.h>\n");
        printf("                                2) #include<input.h>\n");
        printf("                                3) #include<iostream>\n");
        printf("                                4) #include<output.h>\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans10);
        printf("\n");
        if(ans10==1)
        {
            printf("                                Correct Answer\n");
            point10=5;
            printf("                                Congratulations! You have scored %d points.\n",point10);
           printf("============================================================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point010=0;
            printf("                                Oops! You have scored %d point.\n",point010);
            printf("                                The correct answer is: 1) #include<stdio.h>\n");
           printf("============================================================================================================================================================\n");
        }

        printf("\n\n\n");
        printf("                                           Your result is processing...\n                                                 Please wait...\n");
        int total;


        printf("|----------------------------------------------------------------------------------------------------------------------|");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|");
        printf("|----------------------------------------------------------------------------------------------------------------------|");


        total=point1+point2+point3+point4+point5+point6+point7+point8+point9+point10;
        printf("\n\n\n");
        printf("                                           |-------------------------|\n");
        printf("                                           |Your Total Score is = %d\n|\n",total);
        printf("                                           |-------------------------|\n");

        if(total<=10)
        {
            printf("\n");
            printf("               |.......................................................................................|\n");
            printf("               |Don't worry. Failure is a part of the process. You just learn to pick yourself back up.|\n");
            printf("               |                              Try your best next time.                                 |\n");
            printf("               |.......................................................................................|\n");
            printf("\n\n");
        }
        else if(total>10&&total<=40)
        {
            printf("\n");
            printf("                  |..............................................................................|\n");
            printf("                  |                             Great!! Nice Try.                                |\n");
            printf("                  |..............................................................................|\n");
            printf("\n\n");
        }
        else if(total>40)
        {
            printf("\n");
            printf("                  |.......................................................................................|\n");
            printf("                  |            Congratulations!! Your hard work and perseverance have paid off.           |\n");
            printf("                  |.......................................................................................|\n");
            printf("\n\n");

        }
    }
}
