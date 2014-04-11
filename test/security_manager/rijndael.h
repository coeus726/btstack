// =============================== RIJNDAEL.H   ===============================
// from http://www.efgh.com/software/rijndael.htm,
// License: Public Domain, 
// Author:  Philip J. Erdelsky

#ifndef H__RIJNDAEL
#define H__RIJNDAEL

#if defined __cplusplus
extern "C" {
#endif

#include <stdint.h>

int  rijndaelSetupEncrypt(uint32_t *rk, const unsigned char *key, int keybits);
int  rijndaelSetupDecrypt(uint32_t *rk, const unsigned char *key, int keybits);
void rijndaelEncrypt(const uint32_t *rk, int nrounds, const unsigned char plaintext[16], unsigned char ciphertext[16]);
void rijndaelDecrypt(const uint32_t *rk, int nrounds, const unsigned char ciphertext[16], unsigned char plaintext[16]);
	
#define KEYBITS 128

#define KEYLENGTH(keybits) ((keybits)/8)
#define RKLENGTH(keybits)  ((keybits)/8+28)
#define NROUNDS(keybits)   ((keybits)/32+6)

#if defined __cplusplus
}
#endif

#endif
