#include <stdio.h>
#include <string.h>
#include "lian86.h"
void sha1(const BYTE *, unsigned, DWORD[5]);
int main(void)
{
    DWORD d[5]; char hex[41];
    struct { const char *in; const char *want; } v[] = {
        {"abc", "a9993e364706816aba3e25717850c26c9cd0d89d"},
        {"", "da39a3ee5e6b4b0d3255bfef95601890afd80709"},
        {"The quick brown fox jumps over the lazy dog", "2fd4e1c67a2d28fced849ee1bb76e7391b93eb12"},
    };
    int bad = 0;
    for (int i = 0; i < 3; i++) {
        sha1((const BYTE *)v[i].in, (unsigned)strlen(v[i].in), d);
        for (int k = 0; k < 5; k++) sprintf(hex + k*8, "%08x", d[k]);
        int ok = strcmp(hex, v[i].want) == 0;
        printf("  sha1(%-45s) %s\n", *v[i].in ? v[i].in : "\"\"", ok ? "OK" : "FAIL");
        if (!ok) { printf("    got  %s\n    want %s\n", hex, v[i].want); bad = 1; }
    }
    return bad;
}
