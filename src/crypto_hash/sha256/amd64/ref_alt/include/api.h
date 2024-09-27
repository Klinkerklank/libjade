#ifndef JADE_HASH_sha256_amd64_ref_alt_API_H
#define JADE_HASH_sha256_amd64_ref_alt_API_H

#define JADE_HASH_sha256_amd64_ref_alt_BYTES 32

#define JADE_HASH_sha256_amd64_ref_alt_ALGNAME "SHA256"
#define JADE_HASH_sha256_amd64_ref_alt_ARCH    "amd64"
#define JADE_HASH_sha256_amd64_ref_alt_IMPL    "ref_alt"

#include <stdint.h>

int jade_hash_sha256_amd64_ref_alt(
  uint8_t *hash,
  const uint8_t *input,
  uint64_t input_length
);

#endif
