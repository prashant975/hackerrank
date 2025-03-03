#include <stdio.h>

int main() {
    int path;
    scanf("%d",&path);
    switch(path){
        case 1: printf("Player chooses the Left path.\n");
            int c1;
            scanf("%d",&c1);
            switch(c1){
                case 1: printf("Poor choice, Game Over!\n");
                         break;
                    
                case 2: printf("Player found a bridge.\n");
                int b1;
                    scanf("%d",&b1);
                switch(b1){
                case 1: printf("Player crosses the bridge safely.\n");
                        int c1;
                        scanf("%d",&c1);
                            switch(c1){
                                case 1:printf("All that glitters is not gold, Game Over!");
                                    break;
                                case 2:printf("All your efforts were for nothing, Game Over!");
                                    break;
                                case 3:printf("Congratulations!! You won the treasure.");
                                    break;
                            }
                        break;
                        return 0;
                case 2: printf("Poor luck, Game Over!");
                break;
                }
                    
            }
            return 0;
            
        case 2: printf("Player chooses the Middle path.\n");
            int num;
            scanf("%d",&num);
                
                if(num==582){
                    printf("Player solved the puzzle.\n");
                 int c1;
                        scanf("%d",&c1);
                            switch(c1){
                                case 1:printf("All that glitters is not gold, Game Over!");
                                    break;
                                case 2:printf("All your efforts were for nothing, Game Over!");
                                    break;
                                case 3:printf("Congratulations!! You won the treasure.");
                                    break;
                            }
                        
            }
            else{  printf("Foolish player, Game Over!");
                            }
           
            break;
            return 0;
            
        case 3: printf("Player chooses the Right path.\n");
            int num1;
            scanf("%d",&num1);
                
                if(num1==30){
                         printf("Player solved the puzzle.\n");
                        
                 int c1;
                        scanf("%d",&c1);
                            switch(c1){
                                case 1:printf("All that glitters is not gold, Game Over!");
                                    break;
                                case 2:printf("All your efforts were for nothing, Game Over!");
                                    break;
                                case 3:printf("Congratulations!! You won the treasure.");
                                    break;
                            }
                   
                
            }
             else{  printf("Foolish player, Game Over!");
                            }
            
    
                
            
            
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
