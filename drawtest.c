#include "user.h"
#include "stat.h"
#include "types.h"

int main(){
  char* draw_buffer = malloc(3000);
  int size = draw(draw_buffer,3000);
  if(size==-1){
    printf(1,"Error: The size of the buffer is too small");
  }
  else{
      printf(1,"%s\n",draw_buffer);
  }
  return 0;
}