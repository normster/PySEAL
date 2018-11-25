#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "seal/batchencoder.h"
#include "seal/bigpoly.h"
#include "seal/bigpolyarray.h"
#include "seal/biguint.h"
#include "seal/ciphertext.h"
#include "seal/ckks.h"
#include "seal/context.h"
#include "seal/decryptor.h"
#include "seal/defaultparams.h"
#include "seal/encoder.h"
#include "seal/encryptionparams.h"
#include "seal/encryptor.h"
#include "seal/evaluator.h"
#include "seal/galoiskeys.h"
#include "seal/intarray.h"
#include "seal/keygenerator.h"
#include "seal/memorymanager.h"
#include "seal/plaintext.h"
#include "seal/publickey.h"
#include "seal/randomgen.h"
#include "seal/relinkeys.h"
#include "seal/seal.h"
#include "seal/secretkey.h"
#include "seal/smallmodulus.h"
#include "seal/utilities.h"

namespace py = pybind11;

using namespace pybind11::literals;
using namespace seal;
using namespace std;

// http://pybind11.readthedocs.io/en/stable/classes.html

PYBIND11_MODULE(seal, m) {

//  py::class_<BigPoly>(m, "BigPoly");

}

