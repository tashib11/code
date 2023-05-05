#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count= 0;
   FILE  *ptr ;
   ptr = fopen("given.txt","r");
   char str1[100],str2[100];
   while( fscanf(ptr,"%[^\n]s",str1) !=EOF){
         while( fscanf(ptr,"%[^\n]s",str2) !=EOF){
            int l1= strlen(str1);
            int l2 = strlen(str2);
            if(l1==l2){
            for ( int i = 0 ;i<l1; i++){
                for(int j = 0 ; j<l2;j++){
                        if(str1[i]==str2[j]){
                            count++;
                        }

                }
            }



         }else{
           printf("invaliud");
         }
           if( count==l1){
    printf("anagram");
    break;
   }else{
   printf("not anagramn");
   break;
   }
         }

   }



   fclose (ptr);
    return 0;
}
