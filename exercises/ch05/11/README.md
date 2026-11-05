## Exercise 5.11
表 5-5 给出了美国佐治亚州的电话区号，以及每个区号所对应地区最大的城市。编写一个 switch语句，其控制表达式是变量 area_code。如果 area_code的值在表中，switch语句打印出相应的城市名；否则 switch 语句显示消息“Area code not recognized”。使用 5.3 节讨论的方法，使 switch语句尽可能地简单。
## Solution
```C
switch(area_code) {
    case 229: printf("Albany\n"); break;
    case 404: case 470 : case 678: case 770:
        printf("Atlanta\n"); break;
    case 478: printf("Macon\n"); break;
    case 706: case 762:
        printf("Columbus\n"); break;
    case 912:
        printf("Savannah\n"); break;
}
```
