/**
 * mcu_numeric_limits.h
 */

#pragma once

/**
 *
 */
void min_max_values_integers_defined_in_limit_h()
{
    /*
    On PlatformIO, the definitions of the macros below can be found here:

    AVR
    ~/.platformio/packages/toolchain-atmelavr/lib/gcc/avr/7.3.0/include-fixed/limits.h

    XTENSA-ESP32
    ~/.platformio/packages/toolchain-xtensa-esp32/lib/gcc/xtensa-esp32-elf/8.4.0/include-fixed/limits.h
    ~/.platformio/packages/toolchain-xtensa-esp32/lib/gcc/xtensa-esp32-elf/8.4.0/install-tools/include/limits.h

    SCHAR_MIN      = -128
    SCHAR_MAX      =  127
    SHRT_MIN       = -32768
    SHRT_MAX       =  32767
    INT_MIN        = -2147483648
    INT_MAX        =  2147483647
    UINT_MAX       =  4294967295
    LONG_MIN       = -2147483648
    LONG_MAX       =  2147483647
    ULONG_MAX      =  4294967295

    */

    Serial.print("\n");
    Serial.print("SCHAR_MIN      = ");
    Serial.println(SCHAR_MIN);
    Serial.print("SCHAR_MAX      =  ");
    Serial.println(SCHAR_MAX);
    Serial.print("SHRT_MIN       = ");
    Serial.println(SHRT_MIN);
    Serial.print("SHRT_MAX       =  ");
    Serial.println(SHRT_MAX);
    Serial.print("INT_MIN        = ");
    Serial.println(INT_MIN);
    Serial.print("INT_MAX        =  ");
    Serial.println(INT_MAX);
    Serial.print("UINT_MAX       =  ");
    Serial.println(UINT_MAX);
    Serial.print("LONG_MIN       = ");
    Serial.println(LONG_MIN);
    Serial.print("LONG_MAX       =  ");
    Serial.println(LONG_MAX);
    Serial.print("ULONG_MAX      =  ");
    Serial.println(ULONG_MAX);
}

/**
 *
 */
void min_max_values_integers_defined_in_stdint_h()
{
    /*
        On PlatformIO, the definitions of the macros below can be found here:

        AVR
        ~/.platformio/packages/toolchain-atmelavr/avr/include/stdint.h

        XTENSA-ESP32
        ~/.platformio/packages/toolchain-xtensa-esp32/xtensa-esp32-elf/sys-include/stdint.h

        INT8_MIN      = -128
        INT8_MIN - 1  =  127
        INT8_MAX      =  127
        INT8_MAX + 1  = -128

        INT16_MIN     = -32768
        INT16_MIN - 1 =  32767
        INT16_MAX     =  32767
        INT16_MAX + 1 = -32768

        INT32_MIN     = -2147483648
        INT32_MIN - 1 =  2147483647
        INT32_MAX     =  2147483647
        INT32_MAX + 1 = -2147483648

        INT64_MIN     = -9223372036854775808
        INT64_MIN - 1 =  9223372036854775807
        INT64_MAX     =  9223372036854775807
        INT64_MAX + 1 = -9223372036854775808

        UINT8_MIN     =  0
        UINT8_MIN - 1 =  255
        UINT8_MAX     =  255
        UINT8_MAX + 1 =  0

        UINT16_MIN     =  0
        UINT16_MIN - 1 =  65535
        UINT16_MAX     =  65535
        UINT16_MAX + 1 =  0

        UINT32_MIN     =  0
        UINT32_MIN - 1 =  4294967295
        UINT32_MAX     =  4294967295
        UINT32_MAX + 1 =  0

        UINT64_MIN     =  0
        UINT64_MIN - 1 =  18446744073709551615
        UINT64_MAX     =  18446744073709551615
        UINT64_MAX + 1 =  0
    */

    Serial.print("\n");
    Serial.print("INT8_MIN      = ");
    Serial.println((int8_t)(INT8_MIN));
    Serial.print("INT8_MIN - 1  =  ");
    Serial.println((int8_t)(INT8_MIN - 1));
    Serial.print("INT8_MAX      =  ");
    Serial.println((int8_t)(INT8_MAX));
    Serial.print("INT8_MAX + 1  = ");
    Serial.println((int8_t)(INT8_MAX + 1));

    Serial.print("\n");
    Serial.print("INT16_MIN     = ");
    Serial.println((int16_t)(INT16_MIN));
    Serial.print("INT16_MIN - 1 =  ");
    Serial.println((int16_t)(INT16_MIN - 1));
    Serial.print("INT16_MAX     =  ");
    Serial.println((int16_t)(INT16_MAX));
    Serial.print("INT16_MAX + 1 = ");
    Serial.println((int16_t)(INT16_MAX + 1));

    Serial.print("\n");
    Serial.print("INT32_MIN     = ");
    Serial.println((int32_t)(INT32_MIN));
    Serial.print("INT32_MIN - 1 =  ");
    Serial.println((int32_t)(INT32_MIN - 1));
    Serial.print("INT32_MAX     =  ");
    Serial.println((int32_t)(INT32_MAX));
    Serial.print("INT32_MAX + 1 = ");
    Serial.println((int32_t)(INT32_MAX + 1));

#if !defined(__AVR__)
    // On AVR, Serial cannot print 64 bit values.
    // We’ll use dedicated functions below.
    Serial.print("\n");
    Serial.print("INT64_MIN     = ");
    Serial.println((int64_t)(INT64_MIN));
    Serial.print("INT64_MIN - 1 =  ");
    Serial.println((int64_t)(INT64_MIN - 1));
    Serial.print("INT64_MAX     =  ");
    Serial.println((int64_t)(INT64_MAX));
    Serial.print("INT64_MAX + 1 = ");
    Serial.println((int64_t)(INT64_MAX + 1));
#endif

#if defined(__AVR__)
    Serial.print("\n");
    Serial.print("INT64_MIN     = ");
    println64(&Serial, (int64_t)(INT64_MIN));
    Serial.print("INT64_MIN - 1 =  ");
    println64(&Serial, (int64_t)(INT64_MIN - 1));
    Serial.print("INT64_MAX     =  ");
    println64(&Serial, (int64_t)(INT64_MAX));
    Serial.print("INT64_MAX + 1 = ");
    println64(&Serial, (int64_t)(INT64_MAX + 1));
#endif

    Serial.print("\n");
    Serial.print("UINT8_MIN     =  ");
    Serial.println((uint8_t)(0));
    Serial.print("UINT8_MIN - 1 =  ");
    Serial.println((uint8_t)((uint8_t)(0) - (uint8_t)(1)));
    Serial.print("UINT8_MAX     =  ");
    Serial.println((uint8_t)(UINT8_MAX));
    Serial.print("UINT8_MAX + 1 =  ");
    Serial.println((uint8_t)(UINT8_MAX + 1));

    Serial.print("\n");
    Serial.print("UINT16_MIN     =  ");
    Serial.println((uint16_t)(0));
    Serial.print("UINT16_MIN - 1 =  ");
    Serial.println((uint16_t)((uint16_t)(0) - (uint16_t)(1)));
    Serial.print("UINT16_MAX     =  ");
    Serial.println((uint16_t)(UINT16_MAX));
    Serial.print("UINT16_MAX + 1 =  ");
    Serial.println((uint16_t)(UINT16_MAX + 1));

    Serial.print("\n");
    Serial.print("UINT32_MIN     =  ");
    Serial.println((uint32_t)(0));
    Serial.print("UINT32_MIN - 1 =  ");
    Serial.println((uint32_t)((uint32_t)(0) - (uint32_t)(1)));
    Serial.print("UINT32_MAX     =  ");
    Serial.println((uint32_t)(UINT32_MAX));
    Serial.print("UINT32_MAX + 1 =  ");
    Serial.println((uint32_t)(UINT32_MAX + 1));

#if !defined(__AVR__)
    // On AVR, Serial cannot print 64 bit values.
    // We’ll use dedicated functions below.
    Serial.print("\n");
    Serial.print("UINT64_MIN     =  ");
    Serial.println((uint64_t)(0));
    Serial.print("UINT64_MIN - 1 =  ");
    Serial.println((uint64_t)((uint64_t)(0) - (uint64_t)(1)));
    Serial.print("UINT64_MAX     =  ");
    Serial.println((uint64_t)(UINT64_MAX));
    Serial.print("UINT64_MAX + 1 =  ");
    Serial.println((uint64_t)(UINT64_MAX + 1));
#endif

#if defined(__AVR__)
    Serial.print("\n");
    Serial.print("UINT64_MIN     =  ");
    println64(&Serial, (uint64_t)(0));
    Serial.print("UINT64_MIN - 1 =  ");
    println64(&Serial, (uint64_t)((uint64_t)(0) - (uint64_t)(1)));
    Serial.print("UINT64_MAX     =  ");
    println64(&Serial, (uint64_t)(UINT64_MAX));
    Serial.print("UINT64_MAX + 1 =  ");
    println64(&Serial, (uint64_t)(UINT64_MAX + 1));
#endif
}

/**
 *
 */
void min_max_values_float()
{
    /*
    The macros below are defined in <float.h>
    ~/.platformio/packages/toolchain-xtensa-esp32/lib/gcc/xtensa-esp32-elf/8.4.0/include/float.h

    sign:      1 bit (0..1)
    exponent:  8 bit (-127..128)
    mantissa: 23 bit (0..2^23 = 0..8'388'608)
    total:    32 bit (-3.4028235E+38..+3.4028235E+38)

    (-1)^sign × mantissa × 2^exponent

    https://www.arduino.cc/reference/en/language/variables/data-types/float/
    https://matloka.com/blog/floating-point-101
    https://en.cppreference.com/w/c/types/limits
    */
    Serial.println("\n# MIN MAX FOR FLOATS\n");

    Serial.print("DECIMAL_DIG     = ");
    Serial.println(DECIMAL_DIG);
    Serial.print("FLT_RADIX       = ");
    Serial.println(FLT_RADIX);
    Serial.print("FLT_MIN         = ");
    Serial.println(FLT_MIN, 12);
    Serial.print("FLT_MAX         = ");
    Serial.println(FLT_MAX, 12);
    Serial.print("FLT_EPSILON     = ");
    Serial.println(FLT_EPSILON, 12);
    Serial.print("FLT_DIG         = ");
    Serial.println(FLT_DIG);
    Serial.print("FLT_MANT_DIG    = ");
    Serial.println(FLT_MANT_DIG);
    Serial.print("FLT_MIN_EXP     = ");
    Serial.println(FLT_MIN_EXP);
    Serial.print("FLT_MIN_10_EXP  = ");
    Serial.println(FLT_MIN_10_EXP);
    Serial.print("FLT_MAX_EXP     = ");
    Serial.println(FLT_MAX_EXP);
    Serial.print("FLT_MAX_10_EXP  = ");
    Serial.println(FLT_MAX_10_EXP);
    Serial.print("FLT_ROUNDS      = ");
    Serial.println(FLT_ROUNDS);
    Serial.print("FLT_EVAL_METHOD = ");
    Serial.println(FLT_EVAL_METHOD);
#if !defined __AVR__ && !defined ESP32
    Serial.print("FLT_DECIMAL_DIG = ");
    Serial.println(FLT_DECIMAL_DIG);
    Serial.print("FLT_HAS_SUBNORM = ");
    Serial.println(FLT_HAS_SUBNORM);
#endif

    Serial.println("\n# INTERESTING FLOAT STUFF\n");
    Serial.print("3.4028235E+39f              = ");
    Serial.println(3.4028235E+39f);
    Serial.print("3.4028235E+38f              = ");
    Serial.println(3.4028235E+38f);
    Serial.print("-3.4028235E+38f             = ");
    Serial.println(-3.4028235E+38f);
    Serial.print("-3.4028235E+38f / 0         = ");
    Serial.println(-3.4028235E+38f / 0);
    // Serial.print("1 / 0                       = ");
    // Serial.println(1 / 0);
    Serial.print("0.1f                        = ");
    Serial.println(0.1f, 12);
    Serial.print("isnan(1/0)                  = ");
    Serial.println(isnan(1/0));
    Serial.print("isinf(1/0)                  = ");
    Serial.println(isinf(1/0));
    Serial.print("isinf(-3.4028235E+38f / 0)  = ");
    Serial.println(isinf(-3.4028235E+38f / 0));

    // Serial.println(22300766.00f);
    // Serial.println(22300767.00f);
    // Serial.println(22300768.00f);
    // Serial.println(22300767.00f == 22300768.00f);

    // Serial.println();
    // Serial.println(-22300766.00f);
    // Serial.println(-22300767.00f);
    // Serial.println(-22300768.00f);
    // Serial.println(-22300767.00f == -22300768.00f);
    // Serial.println(-2230077.00f == -2230078.00f);
}

/**
 *
 */
void min_max_values_integers()
{
#if defined __AVR_ATmega328P__
    Serial.println("# MIN AND MAX VALUES FOR __AVR_ATmega328P__ ARCHITECTURE");
#elif defined __AVR_ATmega2560__
    Serial.println("# MIN AND MAX VALUES FOR __AVR_ATmega2560__ ARCHITECTURE");
#elif defined ESP32
    Serial.println("# MIN AND MAX VALUES FOR ESP32 ARCHITECTURE");
#elif defined ESP8266
    Serial.println("# MIN AND MAX VALUES FOR ESP8266 ARCHITECTURE");
#endif

    min_max_values_integers_defined_in_stdint_h();
    min_max_values_integers_defined_in_limit_h();
}
