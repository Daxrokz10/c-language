#include <stdio.h>

int main(){
    int choice_lang, choice_recharge;
    int valid_choice; // Flag to check if the choice is valid

    printf("Please select a language to proceed further \n");

    do {
        valid_choice = 1; 

        printf("Press 1 to continue in english \n");
        printf("Press 2 to continue in hindi \n");
        printf("Press 3 to continue in gujarati \n\n");

        printf("Enter your choice : ");
        scanf("%d", &choice_lang); 

        switch(choice_lang){
            case 1:
                printf("Press 1 to recharge your internet \n");
                printf("Press 2 to top-up \n");
                printf("Press 3 for special recharge \n\n");

                printf("Enter your choice : ");
                scanf("%d", &choice_recharge); 

                switch(choice_recharge){
                    case 1:
                        printf("Internet recharge successful");
                        break;
                    case 2:
                        printf("Top-up successful");
                        break;
                    case 3:
                        printf("Special recharge successful");
                        break;
                    default:
                        printf("Invalid choice");
                        valid_choice = 0; 
                        break;
                }
                break;

            case 2:
                printf("Internet recharge ke liye ek dabaye \n");
                printf("Top-up ke liye do dabaye \n");
                printf("Special recharge ke liye teen dabaye \n\n");

                printf("Apki choice dabaiye: ");
                scanf("%d", &choice_recharge); 

                switch(choice_recharge){
                    case 1:
                        printf("Aapka internet recharge safaltapurvak hua");
                        break;
                    case 2:
                        printf("Aapka top-up safaltapurvak hua");
                        break;
                    case 3:
                        printf("Aapka special recharge safaltapurvak hua");
                        break;
                    default:
                        printf("Galat chunav");
                        valid_choice = 0; 
                        break;
                }
                break;

            case 3:
                printf("Internet recharge maate ek dabavo \n");
                printf("Top-up maate be dabavo \n");
                printf("Special recharge maate tron dabavo \n\n");

                printf("Tamari choice dabavo: ");
                scanf("%d", &choice_recharge); 

                switch(choice_recharge){
                    case 1:
                        printf("Tamaru Internet recharge safaltapurvav thiyu");
                        break;
                    case 2:
                        printf("Tamaru top-up safaltapurvak thiyu");
                        break;
                    case 3:
                        printf("Tamaru special recharge safaltapurvak thiyu");
                        break;
                    default:
                        printf("Galat chunav \n\n");
                        valid_choice = 0; 
                        break;
                }
                break;

            default:
                printf("Invalid choice , Please select again :) \n\n");
                valid_choice = 0; 
                break;
        }
    } while (!valid_choice); 

    return 0;
}