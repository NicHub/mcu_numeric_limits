/**
 * serial_print_64.h
 *
 * On AVR, Serial cannot print 64 bit values.
 * So here are some functions to do that.
 * Source:
 * https://github.com/greiman/SdFat/issues/130#issuecomment-460060196
 */

#pragma once

size_t print64(Print *pr, uint64_t n)
{
    char buf[21];
    char *str = &buf[sizeof(buf) - 1];
    *str = '\0';
    do
    {
        uint64_t m = n;
        n /= 10;
        *--str = m - 10 * n + '0';
    } while (n);
    pr->print(str);
}
size_t print64(Print *pr, int64_t n)
{
    size_t s = 0;
    if (n < 0)
    {
        n = -n;
        s = pr->print('-');
    }
    return s + print64(pr, (uint64_t)n);
}
size_t println64(Print *pr, int64_t n)
{
    return print64(pr, n) + pr->println();
}
size_t println64(Print *pr, uint64_t n)
{
    return print64(pr, n) + pr->println();
}
