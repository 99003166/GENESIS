#include <covid_operations.h>

int visits(int operand1, int operand2)
{
    return operand1 + operand2;
}

int positive(int operand1, int operand2)
{
    return operand1 + operand2;
}

int negative(int operand1, int operand2)
{
    return operand1 - operand2;
}

int died(int operand1, int operand2)
{
    return operand1 + operand2;
}

int recovered(int operand1, int operand2)
{
    return operand1 - operand2;
}

int homequarant(int operand1, int operand2)
{
    return operand1 + operand2;
}

int revisitedpos(int operand1, int operand2)
{
    return operand1 + operand2;
}

int revisitedneg(int operand1, int operand2)
{
    return operand1 - operand2;
}

int hospquarant(int operand1, int operand2)
{
    return operand1 + operand2;
}

int compisolation(int operand1, int operand2)
{
    return operand1 + operand2;
}

int diffstatepos(int operand1, int operand2)
{
    return operand1 + operand2;
}

int diffstateneg(int operand1, int operand2)
{
    return operand1 - operand2;
}

int primecon(int operand1, int operand2)
{
    return operand1 + operand2;
}

int seccon(int operand1, int operand2)
{
    return operand1 + operand2;
}

int infectedrate(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return (operand1 / operand2)*100 ;
}

int deathrate(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return (operand1 / operand2)*100 ;
}

int recoveryrate(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return (operand1 / operand2)*100 ;
}
