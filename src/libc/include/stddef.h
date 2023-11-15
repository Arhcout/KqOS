#pragma once

#include <stdint.h>

#define NULL ((void*)0)

#define offsetof(type,member) (&(((type*)NULL)->member))

typedef intmax_t size_t;
