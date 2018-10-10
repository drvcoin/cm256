// Copyright 2018 Filegear - All Rights Reserved

#include "util.h"

#ifndef _WIN32
uint64_t htonll(uint64_t val)
{
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
  return (((uint64_t) htonl(val)) << 32) + htonl(val >> 32);
#else
  return val;
#endif
}

uint64_t ntohll(uint64_t val)
{
#if __BYTE_ORDER__ == __ORDER_LITTLE_ENDIAN__
  return (((uint64_t) ntohl(val)) << 32) + ntohl(val >> 32);
#else
  return val;
#endif
}
#endif
