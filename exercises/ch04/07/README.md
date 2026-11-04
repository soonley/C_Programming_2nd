## Exercise 4.07
本章计算 UPC 校验位方法的最后几步是：把总的结果减去 1，相减后的结果除以 10 取余数，用 9 减去余数。换成下面的步骤也可以：总的结果除以 10 取余数，用 10 减去余数。这样做为什么可行？
> 中文版这里是不是翻译错了，原文如下：
> The algorithm for computing the UPC check digit ends with the following steps:
> Subtract 1 from the total.
> Compute the remainder when the adjusted total is divided by 10.
> Subtract the remainder from 9.
> It’s tempting to try to simplify the algorithm by using these steps instead:
> Compute the remainder when the total is divided by 10.
> Subtract the remainder from 10.
> Why doesn’t this technique work?
> 原文应该是问为什么不行
## Solution
简化后的算法会产生数字10的校验位（check digit)

