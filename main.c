#include <stdio.h>
#include "func1.h"
#include "func2.h"

void preprocess(){

printf("do some preprocessing");

}

void postprocess(){

printf("aaa");
}


void turbo_on(){
printf("on");
}

int main(){

func1();
func2();
turbo_on();

return 0;
}
