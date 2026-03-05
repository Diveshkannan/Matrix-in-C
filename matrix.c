#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int array[3][3]={
               {1,2,3},
               {4,5,6},
               {7,8,9}
               };
    int primary=0;
    int secondary=0;
    int length=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<length;i++)
    {
        primary+=array[i][i];
        secondary+=array[i][length-i-1];
    }
    printf(" Primary:%i \n Secondary:%i\n",primary,secondary);

}
