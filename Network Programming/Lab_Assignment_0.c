#include<stdio.h>

struct QNode{
    int key;
    struct QNode *next;
}
typedef struct QNode Node{
    int key;
    struct QNode *next;
} Node;

struct QueueStructure{
    struct QueueStructure *front;
    struct QueueStructure *rear;
}
typedef struct QueueStructure Queue{
    Node *front;
    Node *rear;
} Queue;

Node *createNode(int data){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->key = data;
    newNode->next = NULL:
    return newNode;
}

Queue *createQueue(){
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

Queue *enqueue(Queue *queue, int data){
    Node *newNode = createNode(data);
    if(queue->front = NULL){
        queue->front = newNode;
        queue->rear = newNode;

    }
    else{
        queue->rear->next = newNode;
        queue->rear = newNode;

    }
    return queue;
}

int dequeue(Queue *queue){
    if(queue->front == NULL){
        printf("Queue is empty\n");
        return -1;
    }
    else{
        Node *temp = queue->front;
        queue->front = queue->front->next;
        int data = temp->key;
        free(temp);
        return data;

    }


}

void displayQueue(Queue *queue){
    Node *temp = queue->front;
    while(temp != NULL) {
        printf("%d", temp->key);
        temp = temp->next;


    }
}

int countQueue(Queue *queue){
    int count = 0;
    Node *temp = queue->front;
    while(temp != NULL) {
        count++;
        temp = temp->next;

    }
    return count;
}

void main(){
    Queue *queue = createQueue();
    createNode(10);
    enqueue(createNode(10));
    enqueue(createNode(20));
    enqueue(createNode(30));
    enqueue(createNode(40));
    countNode(queue);
    displayQueue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    dequeue(queue);
    countQueue(queue);
    displayQueue(queue);
    return 0;

}
