int findGCD(int a,int b)
{
     while(a!=b)
     {
          if(a>b)
              return findGCD(a-b,b);
          else
             return findGCD(a,b-a);
     }
     return a;
}


int abs(int n)
{
    if( n>0 )
        return n;
    else return n*(-1);
}