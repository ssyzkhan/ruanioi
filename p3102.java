/*
Get The Invertion
Description
This term Amy begin to learn another important Course--Linear Algebra.
When she comes to determinant, she finds it boring to calculate the inversion
of a given sequence every time. So she asked for her best friend Ray to write a 
Program to solve it. She would be his partner when dancing Rumba in return.
The inversion is definded as follows: for a given sequence A, the inversion is
the total number of pairs< <i,j> satisfies i<j and A[i]>A[j].
Input
The input file contains multiple test cases. The first line contains the size of
the sequence, an integer N(1<N<500000). Then N integers come indicating the element
of the sequence. The element is an integer no more then 1,000,000,000. N = 0 means
the end of the input and should not be processed.
Output
Output exactly one integer for each test case: the inversion of the given sequence.
Sample Input
3
1 2 3
2
2 1
0
Sample Output
0
1

在插入排序算法INSERTION-SORT(A)中的内嵌While循环实际上是在检测j在有序子序列A[1...j-1]中
有几个下标与其构成逆序。由于A[1...j-1]中的元素始终保持是原序列中的前j-1个元素，所以一旦A[j]
插到合适的位置，使得A[1...j]有序，则在下一轮的迭代中，新的A[j]相对于A[1...j-1]所构成的逆序
数不变。因此，INSERTION-SORT(A)的内嵌while循环之行次数恰好是A中元素构成逆序总数。所以，解决
此问题的算法可描述如下：
GET-THE-INVERSION(A)
1 count <- 0 w设置逆序计数器，初始化为0
2 for j <- 2 to length[A]
3      do key <- A[j]
4         i <- j-1
5         while i>0 and A[i] > key
6            do A[i+1] <- A[i]
7                i <- i-1
8                count <- count + 1 w计数器增加1
9         A[i+1] <- key
10 return count
*/
//import java.util.*;
public class p3102{
    public static void main(String args[]){
        int A[]={5,1,9,4,6,2,0,3,8,7};
        int i,totalInversion;
        totalInversion=Inversion.getTheInversion(A);
        for(i=0;i<10;i++)
            System.out.printf(A[i]+" ");
        System.out.println();
        System.out.println(totalInversion);
    }
}