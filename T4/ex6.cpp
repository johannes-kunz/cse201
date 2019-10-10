#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "LinkedList.hpp"
int main(){
  LinkedList* ll = new LinkedList();
  for(int i=0;i<100;i++){
    ll->append(rand()%11);
  }
  LinkedList* sl = ll->filterSmaller(5);
  sl->display();

  delete sl;
  delete ll;
  return 0;
}
