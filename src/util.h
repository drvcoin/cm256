// Copyright 2018 Filegear - All Rights Reserved

#pragma once

#include <arpa/inet.h>

#define return_false_if(condition) \
  if (condition) { return false; }

#define return_false_if_msg(condition, ...) \
  if (condition) { printf(__VA_ARGS__); return false; }

uint64_t htonll(uint64_t val);
uint64_t ntohll(uint64_t val);
