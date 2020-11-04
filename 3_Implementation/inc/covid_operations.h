/** 
* @file covid_operations.h
* Covid management application with many operations
*
*/
#ifndef __COVID_OPERATIONS_H__
#define __COVID_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
*  adds the visits of new people in operand2 to previous people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int visits(int operand1, int operand2);

/**
*  adds the positive tested of new people in operand2 to previously positived tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int positive(int operand1, int operand2);

/**
*  subtracts the negative tested of new people in operand2 to previously visited people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int negative(int operand1, int operand2);

/**
*  adds the new deaths in operand2 to previously died people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int died(int operand1, int operand2);

/**
*  adds the newly recovered  people in operand2 to previously recovered people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int recovered(int operand1, int operand2);

/**
*  adds the home quarantined of new people in operand2 to previously home quarantined people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int homequarant(int operand1, int operand2);

/**
*  adds the revisted positive tested of new people after one visit in operand2 to previously revisited and positived tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int revisitedpos(int operand1, int operand2);

/**
*  subtracts the revisted negative tested of new people after one visit in operand2 to previously revisited and negative tested people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int revisitedneg(int operand1, int operand2);

/**
*  adds the hospital quarantined of new people in operand2 to previously hospital quarantined people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int hospquarant(int operand1, int operand2);

/**
*  adds the new people who have completed isolation in operand2 to previously completed isolation people count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int compisolation(int operand1, int operand2);

/**
*  adds the positive tested of new people from different state in operand2 to previously positived tested people of different state count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int diffstatepos(int operand1, int operand2);

/**
*  subtracts the negative tested of new people from different state in operand2 to previously negative tested people of different state count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int diffstateneg(int operand1, int operand2);

/**
*  adds the positive tested of new people infected from primary contact in operand2 to previously infected people from primary contact count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int primecon(int operand1, int operand2);

/**
*  adds the positive tested of new people infected from secondary contact in operand2 to previously infected people from secondary contact count in operand1 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int seccon(int operand1, int operand2);

/**
* finds the percentage of the number of people infected as operand1 by total number of people tested positive in operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the (operand1 / operand2)*100
* @note returns 0 for divide by 0 error
*/
int infectedrate(int operand1, int operand2);

/**
* finds the percentage of the number of people dead as operand1 by total number of people tested positive in operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the (operand1 / operand2)*100
* @note returns 0 for divide by 0 error
*/
int deathrate(int operand1, int operand2);

/**
* finds the percentage of the number of people recovered as operand1 by total number of people tested positive in operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the (operand1 / operand2)*100
* @note returns 0 for divide by 0 error
*/
int recoveryrate(int operand1, int operand2);

#endif  /* #define __COVID_OPERATIONS_H__ */

