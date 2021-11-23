   /*
   Project:Library project-Milestone 2
   Author:Purity
   Date:20/11/2021
   Compiler:GCC
   Language:C99
   License:MIT
   */
   #include <stdio.h>
   #include <stdlib.h>
   #include<windows.h>
   int main();
   void execute_action(int action);
   int main()

   {
      int action;
      action=menu();
      execute_action(action);

      return 0;
   }
   void execute_action(int action){
      printf("you selected action %d,action");

   }
   int menu()
   {
       int action;
       do{
            printf("Library system\n");
            printf("welcome Purity\n");
            printf("What would you like to do\n");
            printf("1.View users\n");
            printf("2.Add a new user");
            printf("3.Delete user\n");
            printf("4.Edit user\n");
            printf("5.Change password");
            printf("6.Log in\n");
            printf("7.Log out\n");
            printf("8.Exit system\n");
            printf("selected action(1-8):");
            scanf("%d",&action);
            if(action < 1 || action > 8){
                    system("cls");
                    printf("invalid action!!!try again.\n");

         }
       }while(action < 1 || action> 8 );

       return action;
   }
