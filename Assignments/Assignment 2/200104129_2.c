//Write  a  program  to  determine  the GCD(greatest  common  divisor)  and LCM(leastcommon multiple) of 3 numbers

#include <stdio.h>
int main()
{
    int x, y,z,j, i,gcd,lcm,mul,max,min;

    printf("Enter three numbers: "); //taking input from the user
    scanf("%d %d %d", &x, &y,&z);


    for(i=1; i <= x && i <= y && i <= z; ++i) //finding out the gcd 
    {
        if(x%i==0 && y%i==0 && z%i==0)
            gcd = i;
    }

    max=(x>y && x>z) ? x : (y>z) ? y :z ;

    min=(x<y && x<z) ? x : (y<z) ? y :z ;

    for(int i =max; ; i++)
    {
        if (i%x==0 && i%y==0 && i%z==0 )
        {
            lcm=i;
            break;
        }
        
    }

    
    /*
    mul = (x * y * z); //finding out the multiplication

    for(j=1; i>=x && j>=y && j>=z ; ++j)
    {

    if (j%x==0 && j%y==0 && j%z==0 )
    gcd=j ;

    }
     
    if (gcd==1 && x!=y && x!=z && y!=z) //if the gcd is 1 then this will run and solve a problem found while debugging
    {
       
       if (x%2==0 && y%2==0)  //if there is only two even number
       {
           lcm=mul/(gcd*2);
       }
       else if(y%2==0 && z%2==0)
       {
           lcm=mul/(gcd*2);
       }
       else if(x%2==0 && z%2==0)
       {
           lcm=mul/(gcd*2);
       }
       else 
       {
           lcm=mul/gcd;
       }   
    }
    else if (x==2*y ||y==2*z || x==2*z || y==2*x ||z==x*2||z==y*2)
    {
        if (x<=y && y<=z) //finding out the lowest value
      {
        lcm= mul/(gcd*x*2);
      }
    else if (x<=z && z<=y) 
     {
        lcm= mul/(gcd*x*2);
     }
    else if (y<=x && x<=z)
      {
        lcm= mul/(gcd*y*2);
       }
    else if (y<=z && z<=x)
       {
        lcm= mul/(gcd*y*2);
        }
    else if (z<=y && y<=x)
       {
        lcm= mul/(gcd*z*2);
        }
    else if (z<=x && x<=y)
       {
        lcm= mul/(gcd*z*2); 
        }

    }
    else if (x<=y && y<=z) //finding out the lowest value
    {
        lcm= mul/(gcd*x);
    }
    else if (x<=z && z<=y) 
    {
        lcm= mul/(gcd*x);
    }
    else if (y<=x && x<=z)
    {
        lcm= mul/(gcd*y);
    }
    else if (y<=z && z<=x)
    {
        lcm= mul/(gcd*y);
    }
    else if (z<=y && y<=x)
    {
        lcm= mul/(gcd*z);
    }
    else if (z<=x && x<=y)
    {
        lcm= mul/(gcd*z); 
    }
    */
    printf("G.C.D of %d ,%d and %d is %d  \nL.C.M of %d ,%d and %d is %d \n max num is %d   \n min num is %d", x, y,z, gcd,x,y,z,lcm,max,min);//printing out the values of gcd lcm

    return 0;
}