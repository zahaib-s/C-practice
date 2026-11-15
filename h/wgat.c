int secondMaximum(int a, int b, int c) {
    if (a == b && b == c) return -1;

    if (a == b && a > c) return c;
    if (a == c && a > b) return b;
    if (b == c && b > a) return a;

    if (a > b) { int t = a; a = b; b = t; }
    if (b > c) { int t = b; b = c; c = t; }
    if (a > b) { int t = a; a = b; b = t; }
    return b;
}
int main(){
    int a,b,c;
    a=10;b=15;c=2;
    
}