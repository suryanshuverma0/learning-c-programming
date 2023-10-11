int main()
{   struct complex *c;
    struct complex c1={2,3};
    struct complex c2={4,5};
    c=&c1;
    //c1.img , c->img , (*c).img
    printf("%d",(*c).img);
    return 0;
}
