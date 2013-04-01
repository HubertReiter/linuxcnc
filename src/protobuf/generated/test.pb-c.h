/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_test_2eproto__INCLUDED
#define PROTOBUF_C_test_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "types.pb-c.h"

typedef struct _Test1 Test1;
typedef struct _Test2 Test2;
typedef struct _Test3 Test3;


/* --- enums --- */


/* --- messages --- */

struct  _Test1
{
  ProtobufCMessage base;
};
#define TEST1__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&test1__descriptor) \
     }


struct  _Test2
{
  ProtobufCMessage base;
};
#define TEST2__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&test2__descriptor) \
     }


struct  _Test3
{
  ProtobufCMessage base;
};
#define TEST3__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&test3__descriptor) \
     }


/* Test1 methods */
void   test1__init
                     (Test1         *message);
size_t test1__get_packed_size
                     (const Test1   *message);
size_t test1__pack
                     (const Test1   *message,
                      uint8_t             *out);
size_t test1__pack_to_buffer
                     (const Test1   *message,
                      ProtobufCBuffer     *buffer);
Test1 *
       test1__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   test1__free_unpacked
                     (Test1 *message,
                      ProtobufCAllocator *allocator);
/* Test2 methods */
void   test2__init
                     (Test2         *message);
size_t test2__get_packed_size
                     (const Test2   *message);
size_t test2__pack
                     (const Test2   *message,
                      uint8_t             *out);
size_t test2__pack_to_buffer
                     (const Test2   *message,
                      ProtobufCBuffer     *buffer);
Test2 *
       test2__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   test2__free_unpacked
                     (Test2 *message,
                      ProtobufCAllocator *allocator);
/* Test3 methods */
void   test3__init
                     (Test3         *message);
size_t test3__get_packed_size
                     (const Test3   *message);
size_t test3__pack
                     (const Test3   *message,
                      uint8_t             *out);
size_t test3__pack_to_buffer
                     (const Test3   *message,
                      ProtobufCBuffer     *buffer);
Test3 *
       test3__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   test3__free_unpacked
                     (Test3 *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Test1_Closure)
                 (const Test1 *message,
                  void *closure_data);
typedef void (*Test2_Closure)
                 (const Test2 *message,
                  void *closure_data);
typedef void (*Test3_Closure)
                 (const Test3 *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor test1__descriptor;
extern const ProtobufCMessageDescriptor test2__descriptor;
extern const ProtobufCMessageDescriptor test3__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_test_2eproto__INCLUDED */
