# modularArithmeticProject
My project is about different tasks on modular arithmetic which can be helpful for you. In In short,the notation Z n or also Z n usually denotes a cyclic group, and particularly
the (additive) group of integers modulo n. For any modulus, n, the set of integers from 0 to n − 1 forms a group under modular addition: the inverse of any element a is n − a,
and 0 is the identity element. Let's take a look at Z7, for example.

Z7={0,1,2,3,4,5,6}


3+4=0 (mod 7),                                               2-5=4(mod 7),                                                            2x6=1(mod 7),
2+6=1(mod 7),                                             1-3=5(mod 7),                                                            4x4=2(mod 7),
4+5=2(mod 7),                                               4-5=6(mod 7),                                                            5x5=4(mod 7),  


The division operation is defined by multiplication by the reciprocal of the divisor. In other words, a:b=a*(1/b), where 1/b is the reciprotical element(the number which
multiplied with b gives 1).

In Z7 we have:

There is no reciptoric of 0(mod 7), 
1 is reciprotic number of 1(mod 7),
4 is reciprotic number of 2(mod 7),
5 is reciprotic number of 3(mod 7),
2 is reciprotic number of 4(mod 7),
1 is reciprotic number of 5(mod 7),
6 is reciprotic number of 6(mod 7),
2 : 3 ≡(mod 7) 2 × (1/3) ≡(mod 7) 2 × 5 ≡(mod 7) 3,
5 : 6 ≡(mod 7) 5 × (1/6) ≡(mod 7) 5 × 6 ≡(mod 7) 2,
3 : 4 ≡(mod 7) 3 × (1/4) ≡(mod 7) 3 × 2 ≡(mod 7) 6,
One of the most effective algorithms in cryptography required raising a high degree of elements from Zn. In other words, if a ∈ Zn, and m is a large natural number, 
then the goal is to calculate a^m for the optimal time. There are two approaches:
1) finding the smallest natural number k, for which a^k≡(mod 7) 1 and calculate a^k=(mod n) a^m mod k
For example, n=7,a=3,m=100, we have:


3^2= 3X3^1≡(mod 7) 2,
3^3= 3X3^2≡(mod 7) 3X2≡(mod 7) 6,
3^4= 3X3^3≡(mod 7) 3X6≡(mod 7) 4,
3^5= 3X3^4≡(mod 7) 3X4≡(mod 7) 5,
3^6= 3X3^5≡(mod 7) 3X5≡(mod 7) 1,
3^100≡(mod 7) 3^100 mod 6≡(mod 7) 3^4≡(mod 7) 4,


2)
n=7,a=3,m=100
100=64+32+4 so we have:


3^2=(3^1)^2≡(mod 7) 2,
3^4=(3^2)^2≡(mod 7) 2^2≡(mod 7) 4,
3^8=(3^4)^2≡(mod 7) 4^2≡(mod 7) 2,
3^16=(3^8)^2≡(mod 7) 2^2≡(mod 7) 4,
3^32=(3^16)^2≡(mod 7) 4^2≡(mod 7) 2,
3^64=(3^32)^2≡(mod 7) 2^2≡(mod 7) 4,
So we have:
3^100=3^64+32+4≡(mod 7) 4x2x4≡(mod 7) 4
How to work with with program?

When you run the program, a menu list will be shown on the screen and you will be expected to write a number from 1 to 13. Which task will be executed depends on the number you write. On the mmenu list you will see every task what is supposed to do. Also when you choose which task you want to see, you must also enter the number of Z. I think that there are vey different tasks on modular arithmetic and I wish my project would be helpful to do these tasks.
If you enter number 1, the first task will be executed which will show you all the remainders(0,1,2....n-1) from Zn.
If you enter number 2, the second task will be executed which will show you the additions of the elements from Zn.
If you enter number 3, the third task will be executed which will show you all the substractions of the elements from Zn.
If you enter number 4, the fourth task will be executed which will show you all the multiplication of the elements from Zn.
If you enter number 5, the fifth task will be executed which will give you the reciprotic number to all of the elemets from Zn. If the number does not have a reciprotic
number -1 will be written.
If you enter number 6, the sixth task will be executed which will show you the reciprotic number of a number from Zn which you will be expected to enter.
If you enter number 7, the seventh task will be executed which will show you all the divisions of the elements from Zn.
If you enter number 8, the eighth task will be executed which will bring a number from Zn to a power using the first fast algorithm. You will be expected to enter
the number from Zn and the power.
If you enter number 9, the ninth task will be executed which will bring a number from Zn to a power using the second fast algorithm. You will be expected to enter
the number from Zn and the power.
If you enter number 10, the tenth task will show you if a number from Zn is a primitive root or not. You will be expected to enter the number.
If you enter number 11, the eleventh task will show you all the primitive roots of Zn.
If you enter number 12, the twelfth task will will be executed and will calculate the discrete logarithm of a number from Zn.You will be expected to enter a number.
If you enter number 13, the thirteenth task will be executed and will show you if Zn a Fn.
If you enter a smaller number than 1 or a bigger number than 13, you will be expected to enter e new number while you enter a number from this range[1,13]



