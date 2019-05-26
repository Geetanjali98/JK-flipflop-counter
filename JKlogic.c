int JKlogic(int J,int K)
{
  int CK=1,Q=0,NQ=1,s,r;
  s=!(CK&&J&&NQ);
  r=!(CK&&K&&Q);
  Q=!(s&&NQ);
  NQ=!(r&&Q);
  
  return Q;
}
  
