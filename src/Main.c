
#include "model/Room.h"
#include "controller/Controller.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int args, char *argv[]){
    srand(time(NULL));
    return controller_menu();
}