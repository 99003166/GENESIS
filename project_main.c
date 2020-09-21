#include <covid_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Covid operation requested by user*/
unsigned int covid_operation = 0;

/* Operands on which operation count is performed */
int covid_operand1 = 0;
int covid_operand2 = 0;

/* Covid operations */
enum operations{ VISITS=1, POSITIVE=1, NEGATIVE, DIED=1, RECOVERED, HOMEQUARANT=1, REVISITEDPOS=1, REVISITEDNEG, HOSPQUARANT=1, COMPISOLATION=1, DIFFSTATEPOS=1, DIFFSTATENEG, PRIMECON=1, SECCON=1, INFECTEDRATE, DEATHRATE, RECOVERYRATE, EXIT };

/* Display the menu of operations supported */
void covid_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****COVID MANAGEMENT****\n");
    while(1)
    {
        covid_menu();
    }
}

void covid_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Visits \n2. Positive\n3. Negative\n4. Died\n5. Recovered\n6. Homequarant\n7. Revisitedpos\n8. Revisitedneg\n9. Hospquarant\n10. Compisolation\n11. Diffstatepos\n12. Diffstateneg\n13. Primecon\n14. Seconcon\n14. Infectedrate\n15. Deathrate\n16. Recoveryrate\n17. Exit");
    printf("\n\tEnter your choice\n");
   
     __fpurge(stdin);
    scanf("%d", &covid_operation);
    
if(INVALID != valid_operation(covid_operation))
    {
        printf("\n\tEnter the new and previous count with space between them\n");
        __fpurge(stdin);
        scanf("%d %d", &covid_operand1, &covid_operand2);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        __fpurge(stdin);
        getchar();
        return;
        
    }
    
            if( VISITS==covid_operation)
        {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           visits(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                   }
         else if (POSITIVE==covid_operation)
         {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           positive(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                    }
         else if (NEGATIVE==covid_operation)
         {
            printf("\n\t%d - %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           negative(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                   }
             else if (DIED==covid_operation)
             {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           died(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                         }
             else if(RECOVERED==covid_operation)
             {
            printf("\n\t%d - %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           recovered(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                         }
             else if (HOMEQUARANT==covid_operation)
             {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           homequarant(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
             else if( REVISITEDPOS==covid_operation)
             {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           revisitedpos(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                         }
            else if(REVISITEDNEG==covid_operation)
            {
            printf("\n\t%d - %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           revisitedneg(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if(HOSPQUARANT==covid_operation)
            {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           hospquarant(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if(COMPISOLATION==covid_operation)
            {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           compisolation(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                       }
            else if (DIFFSTATEPOS==covid_operation)
            {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           diffstatepos(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if (DIFFSTATENEG==covid_operation)
            {
            printf("\n\t%d - %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           diffstateneg(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if (PRIMECON==covid_operation)
            {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           primecon(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if (SECCON==covid_operation)
            {
            printf("\n\t%d + %d = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
           seccon(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
                else if (INFECTEDRATE==covid_operation)
                {
            printf("\n\t(%d / %d)*100 = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
            infectedrate(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                            }
            else if (DEATHRATE==covid_operation)
            {
            printf("\n\t(%d / %d)*100 = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
            deathrate(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                        }
            else if( RECOVERYRATE==covid_operation)
            {
            printf("\n\t(%d / %d)*100 = %d\nEnter to continue", 
            covid_operand1, 
            covid_operand2,
            recoveryrate(covid_operand1, covid_operand2));
            
            __fpurge(stdin);
            getchar();
                       }
    else if(EXIT == covid_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }
       else
                   exit(0);
}
           
    
int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((VISITS <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}
