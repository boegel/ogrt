/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ogrt-protocol/ogrt.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ogrt.pb-c.h"
void   ogrt__fork__init
                     (OGRT__Fork         *message)
{
  static OGRT__Fork init_value = OGRT__FORK__INIT;
  *message = init_value;
}
size_t ogrt__fork__get_packed_size
                     (const OGRT__Fork *message)
{
  assert(message->base.descriptor == &ogrt__fork__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ogrt__fork__pack
                     (const OGRT__Fork *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ogrt__fork__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ogrt__fork__pack_to_buffer
                     (const OGRT__Fork *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ogrt__fork__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OGRT__Fork *
       ogrt__fork__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OGRT__Fork *)
     protobuf_c_message_unpack (&ogrt__fork__descriptor,
                                allocator, len, data);
}
void   ogrt__fork__free_unpacked
                     (OGRT__Fork *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &ogrt__fork__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ogrt__execve__init
                     (OGRT__Execve         *message)
{
  static OGRT__Execve init_value = OGRT__EXECVE__INIT;
  *message = init_value;
}
size_t ogrt__execve__get_packed_size
                     (const OGRT__Execve *message)
{
  assert(message->base.descriptor == &ogrt__execve__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ogrt__execve__pack
                     (const OGRT__Execve *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ogrt__execve__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ogrt__execve__pack_to_buffer
                     (const OGRT__Execve *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ogrt__execve__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
OGRT__Execve *
       ogrt__execve__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (OGRT__Execve *)
     protobuf_c_message_unpack (&ogrt__execve__descriptor,
                                allocator, len, data);
}
void   ogrt__execve__free_unpacked
                     (OGRT__Execve *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &ogrt__execve__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor ogrt__fork__field_descriptors[4] =
{
  {
    "hostname",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(OGRT__Fork, hostname),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parent_pid",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(OGRT__Fork, parent_pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "child_pid",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(OGRT__Fork, child_pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(OGRT__Fork, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ogrt__fork__field_indices_by_name[] = {
  2,   /* field[2] = child_pid */
  0,   /* field[0] = hostname */
  3,   /* field[3] = name */
  1,   /* field[1] = parent_pid */
};
static const ProtobufCIntRange ogrt__fork__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor ogrt__fork__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "OGRT.Fork",
  "Fork",
  "OGRT__Fork",
  "OGRT",
  sizeof(OGRT__Fork),
  4,
  ogrt__fork__field_descriptors,
  ogrt__fork__field_indices_by_name,
  1,  ogrt__fork__number_ranges,
  (ProtobufCMessageInit) ogrt__fork__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ogrt__execve__field_descriptors[7] =
{
  {
    "hostname",
    100,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(OGRT__Execve, hostname),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pid",
    101,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(OGRT__Execve, pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "parent_pid",
    102,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(OGRT__Execve, parent_pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "filename",
    103,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(OGRT__Execve, filename),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "arguments",
    104,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(OGRT__Execve, n_arguments),
    offsetof(OGRT__Execve, arguments),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "environment_variables",
    105,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(OGRT__Execve, n_environment_variables),
    offsetof(OGRT__Execve, environment_variables),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "uuid",
    106,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(OGRT__Execve, uuid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ogrt__execve__field_indices_by_name[] = {
  4,   /* field[4] = arguments */
  5,   /* field[5] = environment_variables */
  3,   /* field[3] = filename */
  0,   /* field[0] = hostname */
  2,   /* field[2] = parent_pid */
  1,   /* field[1] = pid */
  6,   /* field[6] = uuid */
};
static const ProtobufCIntRange ogrt__execve__number_ranges[1 + 1] =
{
  { 100, 0 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor ogrt__execve__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "OGRT.Execve",
  "Execve",
  "OGRT__Execve",
  "OGRT",
  sizeof(OGRT__Execve),
  7,
  ogrt__execve__field_descriptors,
  ogrt__execve__field_indices_by_name,
  1,  ogrt__execve__number_ranges,
  (ProtobufCMessageInit) ogrt__execve__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue ogrt__message_type__enum_values_by_number[2] =
{
  { "ForkMsg", "OGRT__MESSAGE_TYPE__ForkMsg", 100 },
  { "ExecveMsg", "OGRT__MESSAGE_TYPE__ExecveMsg", 101 },
};
static const ProtobufCIntRange ogrt__message_type__value_ranges[] = {
{100, 0},{0, 2}
};
static const ProtobufCEnumValueIndex ogrt__message_type__enum_values_by_name[2] =
{
  { "ExecveMsg", 1 },
  { "ForkMsg", 0 },
};
const ProtobufCEnumDescriptor ogrt__message_type__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "OGRT.MessageType",
  "MessageType",
  "OGRT__MessageType",
  "OGRT",
  2,
  ogrt__message_type__enum_values_by_number,
  2,
  ogrt__message_type__enum_values_by_name,
  1,
  ogrt__message_type__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
