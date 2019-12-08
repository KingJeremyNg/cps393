// DO NOT MODIFY THIS FILE!!!

typedef struct node NodeType;

struct node {
        char ch;
        NodeType *next;  
   };

NodeType *SetUp(void);
void PrintAll(NodeType *L);
void PrintPart(NodeType *L, int x, int y);