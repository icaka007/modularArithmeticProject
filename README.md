# modularArithmeticProject
My project is about different tasks on modular arithmetic which can be helpful for you. In In short,the notation Z n or also Z n usually denotes a cyclic group, and particularly
the (additive) group of integers modulo n. For any modulus, n, the set of integers from 0 to n − 1 forms a group under modular addition: the inverse of any element a is n − a,
and 0 is the identity element. Let's take a look at Z7, for example.

Z7={0,1,2,3,4,5,6}


3+4=0 (mod 7),                                               2-5=4(mod 7),                                                            2*6=1(mod 7),
2+6=1(mod 7),                                             1-3=5(mod 7),                                                            4*4=2(mod 7),
4+5=2(mod 7),                                               4-5=6(mod 7),                                                            5*5=4(mod 7),  


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


3^2= 3*3^1≡(mod 7) 2,
3^3= 3*3^2≡(mod 7) 3*2≡(mod 7) 6,
3^4= 3*3^3≡(mod 7) 3*6≡(mod 7) 4,
3^5= 3*3^4≡(mod 7) 3*4≡(mod 7) 5,
3^6= 3*3^5≡(mod 7) 3*5≡(mod 7) 1,
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
3^100=3^64+32+4≡(mod 7) 4*2*4≡(mod 7) 4

