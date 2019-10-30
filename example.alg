begin
   integer i,entrada;
   integer procedure fib (n); value n; integer n;
      fib := if n <= 1 then n else fib(n-1) + fib (n - 2);

   outstring (1, "Digite um inteiro\n");
   ininteger ( 0, entrada );
   for i := 1 step 1 until entrada do
   begin
      outinteger (1, i); space (1); outinteger (1, fib (i)); newline (1)
   end;
   
end;


