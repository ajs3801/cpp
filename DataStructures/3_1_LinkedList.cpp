#include <stdio.h>
#include <stdlib.h>

typedef int LData;

typedef struct _node
{
  LData data;
  struct _node * nextPtr;
}Node;

typedef struct _information
{
  Node *head;
  Node *tail;
  Node *before;
  Node *cur;
  int numOfData;
}Infor;

void ListInit(Infor* plist, Node * DMY)
{
  plist->head = NULL;
  plist->tail = DMY;
  plist->before = NULL;
  plist->cur = NULL;
  plist->numOfData = 0;
}

void CreateNodeF(Infor * plist, Node * DMY, LData data)
{
  Node * Newnode = (Node*)malloc(sizeof(Node));

  //input data
  Newnode->data = data;
  Newnode->nextPtr = NULL;
  
  //connect
  DMY->nextPtr = Newnode;

  plist->head = DMY;//plist->cur is still NULL.
  plist->tail->nextPtr = Newnode;

  plist->tail = Newnode;

  (plist->numOfData)++;
}

void CreateNode(Infor * plist, LData data)
{
  Node * Newnode = (Node*)malloc(sizeof(Node));

  //input data
  Newnode->data = data;
  Newnode->nextPtr=NULL;

  //connect
  plist->tail->nextPtr = Newnode;
  plist->tail = Newnode;

  (plist->numOfData)++;
}

void FRead(Infor * plist, Node * DMY)
{
  //init cur and before pointer
  plist->cur = DMY->nextPtr;
  plist->before = DMY;

  printf("%-3d ",plist->cur->data);
}

void NRead(Infor * plist)
{
  plist->before = plist->cur;
  plist->cur = plist->cur->nextPtr;
  
  printf("%-3d ",plist->cur->data);
}

int IsInSearch(Infor * plist, LData finding)
{
  int count = 0;

  for (int i=0; i<(plist->numOfData) ; ++i)
  {
    if (plist->cur->data == finding)
      count++;
    
    plist->cur = plist->cur->nextPtr;
    plist->before = plist->cur;
  }

  return count;
}

LData LRemove(Node * plist , LData data)
{
  
}

int main(void)
{
  //Ask user how many data user like to make
  int UserInput = 0;
  printf("How many data you like to make?");
  scanf("%d", &UserInput);

  Infor * List;

  //create Dommy Node
  Node * DMY = (Node*)malloc(sizeof(Node));
  DMY->data = 0;
  DMY->nextPtr = NULL;

  //Init -> Init List
  ListInit(List,DMY);

  //Input Data and connect each node.
  for (int i=0 ; i<UserInput ; ++i)
  {
    int data = 0;
    if (i==0)
    {
      printf("Input integer Data...");
      scanf("%d", &data);
      CreateNodeF(List,DMY,data);

      continue;
    }

    printf("Input integer Data...");
    scanf("%d", &data);
    CreateNode(List,data);
  }
  
  List->before = DMY;
  List->cur = DMY->nextPtr;
  printf("==========================================\n");
  printf("Now initializing is completed.\n");
  printf("==========================================\n");

  while (1)
  {
    int User = 0;
    printf("1. add Data\n");
    printf("2. print out ALL DATA\n");
    printf("3. find data\n");
    printf("4. remove data\n");
    printf("5. quit\n");
    printf("what function you want to do?");
    scanf("%d",&User);

    if (User == 1)
    {
      LData user_add;
      printf("Input data you want to add...");
      scanf("%d", &user_add);

      CreateNode(List,user_add);
    }

    else if (User == 2)
    {
      int count = 0;
      printf("[Data set print out]\n");

      for (int i=0; i<List->numOfData ; ++i)
      {
        if (i==0)
        {
          FRead(List,DMY);
          count++;
        } 

        if (i!=0)
        {
          NRead(List);
          count++;
        }

        if (count == 10) //if printed number exceed 10, then new line will be added.
        {
          printf("\n");
          count = 0;
        }
      }

      List->before = DMY;
      List->cur = DMY->nextPtr;

      printf("and total data number is %d\n", List->numOfData);
    }

    else if (User == 3)
    {
      int find_user = 0;
  
      printf("What data you want to find...");
      scanf("%d",&find_user);

      int total_num = IsInSearch(List,find_user);

      printf("In this node, there are %d number of %d\n", total_num, find_user);

      List->before = NULL;
      List->cur = DMY;
    }

    else if (User == 4)
    {
      int remove_user = 0;
      printf("what data you want to remove...");
      scanf("%d", &remove_user);
      int total_num = IsInSearch(List,remove_user);

      if (remove_user == 0)
        printf("Thers's no such data.\n");

      else if (remove_user == 1)
        LRemove(List,remove_user);

      else if (remove_user > 1)
      {
        int remove_what = 0;
        printf("1. remove all data\n");
        printf("2. remove specific data\n");
        printf("Input your answer");
        scanf("%d", &remove_what);

        if (remove_what == 1)
        {
          for (int i=0 ; i<total_num ; ++i)
          {
            LRemove(List, remove_user);
          }
        }
        else if (remove_what == 2)
        {

        }
      }
    }

    else if (User == 5)
      break;

    else 
      printf("Input ERROR!\n");
  }

  printf("\n");

  return 0;
}
