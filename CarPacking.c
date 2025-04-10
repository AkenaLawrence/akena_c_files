#include <stdio.h>
#define FLOORS 2 
#define SECTIONS 3
    int garage[FLOORS][SECTIONS] = {0};
    int* findavailablespace() {
        static int location[2];
        for(int i = 0; i < FLOORS; i++) {
            for(int j = 0; j < SECTIONS; j++) {
                if(garage[i][j] = 0) {
                    location[0] = i;
                    location[1] = j;
                    return location;
                }
            }
        }
        return NULL;
    }


    int parkvehicle() {
        int* space = findavailablespace();
        if(space != NULL){
            int floor = space[0];
            int section = space[1];
            garage[floor][section] = 1;
            return 1;

        }return -1;



       void showGarage(); {
            printf("Garage Occupancy:\n");
            for(int i = 0; i < FLOORS; i++ ) {
                printf("Floor %d", i);
                for( int j = 0; j < SECTIONS; j++){
                    printf("%d", garage[i][j]);
                }
                printf("\n");
            
            }
        }
        int main(); {
            int numVehicle;
            puts("Welcome to the parking garage system!\n");
            showGarage();
            printf("\nEnter number of vehicle you want to park: ");
            scanf("%d",&numVehicle);
            for (int i = 0; i < numVehicle; i++) {
                parkvehicle();
            }
            printf("\nFinal Garage status:\n");
            
            
            showGarage();
            return 0;

        }






    }





