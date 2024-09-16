unsigned char reverse_bits(unsigned char octet)
{
    return (((octet >> 8) << 0) |
            ((octet >> 7) << 1) |
            ((octet >> 6) << 2) |
            ((octet >> 5) << 3) |
            ((octet >> 4) << 4) |
            ((octet >> 3) << 5) |
            ((octet >> 2) << 6) |
            ((octet >> 1) << 7) |
            ((octet >> 0) << 8));
}