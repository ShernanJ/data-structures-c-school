/* Followed instructions on how to call function from another file here: 
https://riptutorial.com/c/example/3250/calling-a-function-from-another-c-file */

#ifndef CHANGEUTIL_DOT_H /* Include Guard to prevent file from being called twice.*/
#define CHANGEUTIL_DOT_H

/**
*	function declaration
*/

void calcChange(float moneyOwed, float moneyPaid, int change[]);

#endif
