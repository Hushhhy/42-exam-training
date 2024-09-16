unsigned char reverse_bits(unsigned char octet)
{
    return (((octet >> 7) << 0) |
            ((octet >> 6) << 1) |
            ((octet >> 5) << 2) |
            ((octet >> 4) << 3) |
            ((octet >> 3) << 4) |
            ((octet >> 2) << 5) |
            ((octet >> 1) << 6) |
            ((octet >> 0) << 7));
}
