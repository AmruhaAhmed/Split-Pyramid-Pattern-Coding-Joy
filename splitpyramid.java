class splitpyramid
{
    void main()
    {
         int s=7;//number of spaces to be printed
         int i,j;//loop counters
         for(i=1;i<=7;i++)
         {
             for(j=1;j<=s;j++)
             {
                 System.out.print("  ");
             }
             for(j=1;j<=i;j++)
             {
                 System.out.print("* ");
             }
             System.out.print(" ");
             for(j=1;j<=i;j++)
             {
                 System.out.print("* ");
             }
             System.out.println();
             s--;
           }
    }
}