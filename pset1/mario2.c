#include <cs50.h>
#include<stdio.h>

int main(void)
{
    int height; //variable declaration

    do
    {
        printf("Height: ");
        height = get_int(); //user input
    }
    while(height<0 || height>23); //input bounds

    for(int i=0; i<height; i++) //rows
    {
        for(int j=0; j<height-i-1; j++) //spaces
        {
            printf("%s", " ");
        }
        for(int k=0; k<i+1; k++) //hashes
        {
            printf("#");
        }
        printf("%s%s"," "," ");
        for(int l=height; l>(height)-i-1; l--)
        {
            printf("#");
        }
       /** for()
        {

        }*/
        printf("\n"); //end row
    }
}