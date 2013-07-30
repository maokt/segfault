int main(void)
{
    int *i = (int*)"not a number";
    *i = 0xdead;
    return 0;
}
