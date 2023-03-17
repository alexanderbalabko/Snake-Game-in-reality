#include <stdio.h>
#include <stdlib.h>


void show( char array[10][10]);


int main()
{
    size_t x = 5;
    size_t y = 5;

    char field[10][10];
//----
    for ( size_t i = 0; i < 10; ++i)


        for ( size_t j = 0; j < 10; ++j)
        {
            field[i][j] = '*';
        }

        puts("");
    }
    field[5][5] = '+';
//----
   while(x != -100)
   {

       char cout;
       show(field);
       scanf("%c", &cout);
       field[y][x] = '*';
       switch(cout)
       {
       case('w'):
        ++y;

        break;
       case('a'):
        --x;

        break;
       case('d'):
        ++x;

        break;
       case('s'):
        --y;

        break;
        //принудительный выход из цикла


       }

field[y][x] = '+';

   }

}



void show( char array[][10])
{
 for ( size_t i = 0; i < 10; ++i)
    {
        for ( size_t j = 0; j < 10; ++j)
        {
            printf("%c ", array[i][j]);
        }

        puts("");
    }
}
