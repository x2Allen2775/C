/*
Union is a user defined data type but unlike structures, union members share same memory location.
Example:
struct abc {
int a; char b;
union abc {
int a; char bi
};
};
a's address = 6295624
b's address = 6295628
a's address = 6295616
b's address = 6295616





In union, members will share same memory location. If we make changes in one member then it will be reflected to other member as well.
Example:
union abc {
int a; char b;
}var;
int main() {
var.a = 65;
printf("a = %d\n", var.a);
printf("b = %c", var.b);
return 0;
• OUTPUT:
: a = 65
b = A
•••


since the ascii represwentTION OF A IS 65 HENCE IT IS THIS



size of the union is the max size of the largest member of the union




We can access members of union through pointers by using the arrow (->)
operator.
union abc {
int a; char b;
｝；
int main() {
union abc var;
var. a = 90;
union abc *p = &var;
printf("%d %c", p->a, p->b);
return 0;
• • • •••••
OUTPUT:
• ••••••
90 Z
*/