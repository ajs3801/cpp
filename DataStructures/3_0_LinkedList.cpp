#include <stdio.h>
#include <stdlib.h>

typedef int LData;

typedef struct _node
{
  LData data;
  Node * nextPtr;
}Node;

typedef struct _information
{
  Node *head;
  Node *tail;
  Node *before;
  int numOfData;
}Infor;

void ListInit(Infor* plist)
{
  plist->head = NULL;
  plist->tail = NULL;
  plist->before = NULL;
  plist->numOfData = 0;
}

void FCreateNode(Infor * plist, Node * DMY, LData data)
{
  Node * NewNode = (Node*)malloc(sizeof(Node));
  NewNode->data = data;
  NewNode->nextPtr = NULL;
  
  DMY->nextPtr = NewNode;
  plist->before = DMY;
  plist->tail = NewNode;

  (plist->numOfData)++;
}

void CreateNode(Infor * plist, LData data)
{
  Node * Newnode = (Node*)malloc(sizeof(Node));
  Newnode->data = data;
  Newnode->nextPtr=NULL;

  plist->before->nextPtr = Newnode;
  plist->before = plist->tail;
  plist->tail = Newnode;
  (plist->numOfData)++;
}

void LRead(void)
{

}

void SpecificSearch(LData finding)
{

}

LData LRemove(Node * plist , LData data)
{

}

int main(void)
{
  //section1 (Init)
  int UserInput = 0;
  scanf("%d", &UserInput);

  Infor * List;

  Node * DMY = (Node*)malloc(sizeof(Node));
  DMY->data = 0;
  DMY->nextPtr = NULL;

  ListInit(&DMY);

  for (int i=0 ; i<UserInput ; ++i)
  {
    int data = 0;
    if (i==0)
    {
      printf("Input integer Data...");
      scanf("%d", &data);
      FCreateNode(&List,&DMY,data);
    }

    printf("Input integer Data...");
    scanf("%d", &data);
    CreateNode(&List,data);
  }


  return 0;
}
