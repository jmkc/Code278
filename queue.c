/*************************************
Queues
*************************************/ 

/*************************************
Typedef
*************************************/

//arrayQueue

/*************************************
Important Functions
*************************************/

/**********
Array
**********/

arrayQueue *initArrayQueue(int n); //initialize an arrayQueue

int isEmpty(arrayQueue *q); //if queue is empty

int isFull(arrayQueue *q); //if queue is full

int enqueue(int val, arrayQueue *q); //enqueue a value

int dequeue(int val, arrayQueue *q); //dequeue a value

/**********
Linked Lists
**********/

item getHead();

item getTail();

void enqueueHead(item);

void enqueueTail(item);

item dequeueHead();

item dequeueTail();


