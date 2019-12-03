public class p132315{
    public static void main(String[] args) {
        Character[] x={'A','C','C','A','C','C','A','C','C','A','C','C', 
                       'A','C','C','A','C','C','A','C','C','A','C','C', 
                       'A','C','C','C','C'},
                    y={'A','C','C','A','C','C','A','C','C','A','C','C', 
                    'A','C','C','A','C','C','A','C','C','A','C','C', 
                    'A','C','C','C'};
        int[][] c;
        c=Lcs.lcsLength(x,y);
        Lcs.printLcs(c,x,y,29,28);
        System.out.println();

        Integer[] a={389,207,155,300,299,170,158,65},b={389,300,299,207,170,158,155,65};
        c=Lcs.lcsLength(a,b);
        Lcs.printLcs(c,a,b,8,8);
        System.out.println();
    }
}