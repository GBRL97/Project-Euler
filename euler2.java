import static java.lang.System.out;
public class euler2 {
    static int findFibEvenSum(int max)
    {
        int a=1;
        int b=1;
        int c,sum;
        sum=0;
        while(a<max)
        {
            if(a%2==0)sum+=a;
            c=a+b;
            a=b;
            b=c;
        }
        return sum;
    }
    public static void main(String args[])
    {
        int score=findFibEvenSum(4000000);
        out.print(score);

    }
}
