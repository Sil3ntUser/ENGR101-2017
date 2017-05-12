
#include <stido.h>

int main(){
	init();
	int count = 0;
	while (count<100000){

	take_picture();
		int sum = 0;
		int i,w,s;
	for(i=0, i<320, i++){
		w = get_pixel(i,120,3);
	if(w>127){
		s=1;
   }
	else{
		s=0;
	}
		sum = sum + (i-160)*s;}
	}
	sleep1(0,50);
  count++;
}
