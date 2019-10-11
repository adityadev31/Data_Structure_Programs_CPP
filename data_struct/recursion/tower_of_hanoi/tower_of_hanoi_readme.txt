Step 1) see the pic (LHS = moves, RHS = logic)

Step 2) TOH(bar, from, middle, to)      

Step 3) -> (move bar1)    so to move bar1 we have to move from bar3-> bar2-> bar-1     always from higher to lower

Step 4) there are main three steps:-  its like      1->2->1     i.e,    p->q->p  (2->1->2->1->2) comlete cycle

Step 5) precisely       1(print from->to)   ----->>>    2(print from->to)   ----->>>       1(print from->to)


Step 6)            __1__------------------<<<<__2__>>>>------------------__1__
		     |                          |                          |
		     |                          |                          |
		     |                          |                          |
		     |                          |                          |
	      print(from->to)		  print(from->to)            print(from->to)


Step 7) hence code :-


void TOH(n, from, middle, to){
    if(n==1){
	print(fro->to);
    }
    TOH(n-1, from, to, middle);      // from as it is and     middle <--> to  swapped
    print(from->to);
    TOH(n-1, middle, from, to);      // to as it is and     from <--> middle  swapped
}



