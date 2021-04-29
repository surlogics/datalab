
void main()
{
  int x =0x7fffffff;
  int y = ~x;
  int t = (y+y);
  int t1 = !t;
  int t2 = (!(!y));
  printf("%02x %02x %02x\n",t1, t2, t1&t2);
}
