#ifndef OPENSSL_UTIL_H
#define OPENSSL_UTIL_H

#include <openssl/x509.h>
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include "pkcs11t.h"

CK_RV do_store_cert(CK_BYTE_PTR data, CK_ULONG len, X509 **cert);
CK_RV free_cert(X509 *cert);

CK_RV do_store_pubk(X509 *cert, EVP_PKEY **key);
CK_RV free_key(EVP_PKEY *key);

CK_RV do_pkcs_t1(CK_BYTE_PTR in, CK_ULONG in_len, CK_BYTE_PTR out, CK_ULONG out_len, CK_ULONG key_len);

#endif
