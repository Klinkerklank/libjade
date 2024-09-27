#ifndef JADE_HASH_sha256_amd64_opt_API_H
#define JADE_HASH_sha256_amd64_opt_API_H

#define JADE_HASH_sha256_amd64_opt_BYTES 32

#define JADE_HASH_sha256_amd64_opt_ALGNAME "SHA256"
#define JADE_HASH_sha256_amd64_opt_ARCH    "amd64"
#define JADE_HASH_sha256_amd64_opt_IMPL    "opt"

#include <stdint.h>

int jade_hash_sha256_amd64_opt(
 uint8_t *hash,
 const uint8_t *input,
 uint64_t input_length
);

#endif
