public class p180417{
    public static void main(String[] args) {
        int f[]={45,13,12,16,9,5},i;
        char d[]={'a','b','c','d','e','f'};
        BinaryTree h=Huffman.huffman(f,d);
        Huffman.printCode(h," ");
        System.out.println();
    }
}