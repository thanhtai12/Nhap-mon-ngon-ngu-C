Program BT;
var
  a, b, c,
  ha,hb,hc,
  ma,mb,mc,
  S.p,R : Real;
begin
   write('nhap 3 canh cau tam giac');
   readln(a,b,c);
   
   p :=(a+b+C)/2;
   S :=sqrt(p*(p-a)*(p-b)*(p-c));
   R :=(a*b*c)/(4*S);
   
   ha :=2*s/a;
   hb :=2*S/b;
   hc :=2*S/c;
   
   ma :=sqrt(2*sqr(b)+2*sqr(c)-sqr(a))/2;
   mb :=sqrt(2*sqr(a)+2*sqr(c)-sqr(b))/2;
   mc :=sqrt(2*sqr(a)+2*sqr(b)-sqr(c))/2;
