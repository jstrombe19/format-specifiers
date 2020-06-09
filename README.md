# format-specifiers

Here is a complete list of format specifiers available in C:

Type                        Examples                            printf chars

char                        'a','\n'                            %c
_Bool                       0,1                                 %i,%u
short int                   --                                  %hi,%hx,%ho
unsigned short int          --                                  %hu,%hx,%ho
int                         12,-97,0xFFE0,0177                  %i,%x,%o,%d
unsigned int                12u,100U,0XFFu                      %li,%lx,%lo
long int                    12L,-2001,0xffffL                   %li,%lx,%lo
unsigned long int           12UL,100ul,0xffeeUL                 %lu,%lx,%lo
long long int               0xe5e5e5e5LL,50011                  %lli,%llx,%llo
unsigned long long int      12ull,0xffeeULL                     %llu,%llx,%llo
float                       12.34f,3.1e-5f,0x1.5p10,0x1P-1      %f,%e,%g,%a
double                      12.34,3.1e-5,0x.1p3                 %f,%e,%g,%a
long double                 12.341,3.1e-51                      %Lf,%Le,%Lg
string                      "this is a string"                  %s