int main(void)
{
    int *i = (int*)&main;
    *i = 0xdead;
    return 0;
}
