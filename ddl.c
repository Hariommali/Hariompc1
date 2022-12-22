#include stdio.h #inchde stdlib.
 struct node
 stuct node *Ilink:
 int ssn:
 char namef|201.dept[20].desi| 20]; loat sal: char phnof 12]: struct node "rlink:
 typedef struct node* NODIE: NODE start NULIL NODE create_node()
 NODE ptr:
 ptr (NODE)malloe(sizeof (struct node); if(ptNULLS
 print n'nINSUFFICTENT MEMORY'nin"): exit(0)
 printf nSSIL:"):

 printt" nNAMIE:"): scantos-ptr- name): print"inlIEPARTMENT:"): scanf"%s"-ptr- dept): printf"nD:SIGNATION:" scanf%s"ptrdesi): print"nSALARY:"): scanf(%f".&ptr--sal): printf"nPiONE NUMBER:"): scanl(%s"ptr- phno):
 ,
 18CSL38
 ptr--llink ptr- rlink NULL.; return ptr
 NODE insert_end(NODE start)
 NODE ptr, iemp,
 int data:
 pir create_nodel); istart NUIL)
 start ptr.
 else
 temp stan:
 whilettemp--rlink!-NULI.) temp-temp->rlink: np->rlink "ptr: ptr--link temp:
 

 return start
 NODE insern_front(NODE start)
 NODE ptr ptcreate_node():
 if start-NULL) start ptr
 else
 ptr-rlink-start start-llink"ptr start ptr:
 retum start;
 NODE delete_front(NODE start)
 NODI temp il start NULD
 print" n nlDouhly lnked list is empt, n'a*) else ilstart-link- NUu.1)
 printf unDELETED NODE IS:?nin").
 nrínuf nn old»»s|"%s%ld" *s n'n",start-ssn.start-name,start-dept.start-*des





 lemp start:
 start start-rlink;
 print"nualDELIETED FRONT NODE IS:An\n"):
 printl "nin«lésjP6s|%s|%1%s/\n un", tenmp->ssn,temp->name,temp->dept,tcmp->desi,temp-
 snl,temp->phno);
 free(temp): start-llink NULL
 relum sairt;
 NODE delete_end(NOIDE start)
 NODE Iemp.p: iffstart-NULL)
 print"\n\nDoubly linked List is empty:\n\n"); else if(start->rlink==NULL.)
 printf "n'nDIELETED NODF IS:\nn"): printt"n|odos|°»s|soll°»s|\nin".slart- ssn,slart- name.starl->dept,starl->desi,start
 "Sal,start-phno): free(start sturt NUL;
 else
 enmp "sta whilettemp--link! NUI.L.)
 emp temp- rlink: P lemp--Ilink;


 p-rlink-NULL;
 printi( "ninDELETED END NODE IS:nln"):
 printf "%dj%s|%s|as|%f|%sl".1emp->Ssn.temp->name.temp- dept.temp- desi,temp->sal.temp-
 phno): frec(temp):
 return start;
 void display(NODE start)
 NODE temp:
 int count 0:
 if(start NULL.)
 print"ininDoubly linked List is empty:inn"):
 return;
 temp start;
 print"ninThe nodes of the linked list are:\nin"):
 while(temp!-NUL.)
 count
 printf">|%d]%s|° as|° sofs".Iemp->ssin, temp->name.temp-~dept.temp-~desi.temp-
 >sal,temp->phıno): temp emp-rlink:
 printnnNumber of nodle in doubly link list are:%d",.count):

		     int choice,data,n, i;
 for(:
 18CSL38
 print"ninMENUnin"
 printtn:CREATE DL of'N 1EMPLOYEE USING INSERT END \n2:DISPlAY and COUNIn3:INSIERT ENDn4:DELETE ENDn5:INSERT FRONTin6: DIElE:TE FRONI M/Dl.l. AS DEQUEUE\n8:EXITn"):
 print"nn Enter the ehoice: "); scan ol".&choice): Switeh(choice)
 case T:
 printi "nnlEnter how muny employee infornation you want to maintainin\n");: scanf"%d",&n): forti-1:isn:i+4)
 print
 " ninlnter infornamtion of od employe:"i): start insert_end(start):
 breaki case 2:display(start): break: cuse'3;start=insert_end(start):
 break:
 case 4:start=delete_end(start);
 break
 case 5:start=insert_fiont(start):
 break:
 case 6: sturt delete_front(start):

case 7:printt"ubntDl:QUI:UE INSERTION AND DELETION AT BOTT start insert_lront(start): displuytstart)
 start insert_end(start): display(start):
 start delete_front(start) display(start):
 sturt delete_end(sturt): display(start):
 de fault:esit(0): 2',',21,3',174



