unsigned long long factorialByLoop(int n) {
   unsigned long long result = 1;
   for(int i = 2; i <= n; ++i) {
       result *= i;
   }
   return result;
}
