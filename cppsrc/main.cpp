/* cppsrc/main.cpp */
#include <napi.h>
#include "Samples/functionexample.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  functionexample::Init(env, exports);
  return exports;
}

NODE_API_MODULE(testaddon, InitAll)