/*************************************
Stacks
*************************************/ 

/*************************************
Typedef
*************************************/

//arrayStack
//LListStack

/*************************************
Important Functions
*************************************/

/**********
Array
**********/

arrayStack *initArrayStack (int size); //Make a init for array Stacks

void push (int value, arrayStack *stack); //Push on an array

int pop(arrayStack *stack, int *value); //Pop  value and return it

/**********
Linked List
**********/

LListStack *initListStack (void); //Make a init for linked list Stacks

void push (int value, LListStack *stack); //Push on an array

int pop(LListStack *stack, int *value); //Pop  value and return it

int isEmpty(LListStack *stack);