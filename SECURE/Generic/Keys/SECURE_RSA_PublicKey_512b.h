static const CRYPTO_MPI_LIMB _SECURE_RSA_PublicKey_512b_N_aLimbs[] = {
  CRYPTO_MPI_LIMB_DATA4(0xF7, 0x13, 0x6E, 0x82),
  CRYPTO_MPI_LIMB_DATA4(0x04, 0x1B, 0x5D, 0x68),
  CRYPTO_MPI_LIMB_DATA4(0x1D, 0x13, 0x7C, 0x5C),
  CRYPTO_MPI_LIMB_DATA4(0xC0, 0x8B, 0xDC, 0x06),
  CRYPTO_MPI_LIMB_DATA4(0x5A, 0x49, 0xC5, 0x8E),
  CRYPTO_MPI_LIMB_DATA4(0x36, 0x7B, 0x27, 0xB5),
  CRYPTO_MPI_LIMB_DATA4(0xE2, 0x91, 0x6C, 0x80),
  CRYPTO_MPI_LIMB_DATA4(0x5B, 0x2D, 0x90, 0xF3),
  CRYPTO_MPI_LIMB_DATA4(0x36, 0xEB, 0x41, 0x9F),
  CRYPTO_MPI_LIMB_DATA4(0x50, 0x52, 0xC4, 0x63),
  CRYPTO_MPI_LIMB_DATA4(0x8A, 0x37, 0x34, 0xB2),
  CRYPTO_MPI_LIMB_DATA4(0x5A, 0xA3, 0xEE, 0x8C),
  CRYPTO_MPI_LIMB_DATA4(0x6B, 0x0B, 0xF5, 0x97),
  CRYPTO_MPI_LIMB_DATA4(0x37, 0xEA, 0x81, 0x76),
  CRYPTO_MPI_LIMB_DATA4(0xB4, 0xE9, 0xF3, 0xD1),
  CRYPTO_MPI_LIMB_DATA4(0x6C, 0x22, 0xEC, 0xC5)
};

static const CRYPTO_MPI_LIMB _SECURE_RSA_PublicKey_512b_E_aLimbs[] = {
  CRYPTO_MPI_LIMB_DATA3(0x01, 0x00, 0x01)
};

static const CRYPTO_RSA_PUBLIC_KEY _SECURE_RSA_PublicKey_512b = {
  { CRYPTO_MPI_INIT_RO(_SECURE_RSA_PublicKey_512b_N_aLimbs) },
  { CRYPTO_MPI_INIT_RO(_SECURE_RSA_PublicKey_512b_E_aLimbs) },
};
