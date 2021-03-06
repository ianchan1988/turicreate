/* Copyright © 2017 Apple Inc. All rights reserved.
 *
 * Use of this source code is governed by a BSD-3-clause license that can
 * be found in the LICENSE.txt file or at https://opensource.org/licenses/BSD-3-Clause
 */
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ArrayFeatureExtractor.proto

#ifndef PROTOBUF_ArrayFeatureExtractor_2eproto__INCLUDED
#define PROTOBUF_ArrayFeatureExtractor_2eproto__INCLUDED

#include <string>

#include <protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <protobuf/arena.h>
#include <protobuf/arenastring.h>
#include <protobuf/generated_message_util.h>
#include <protobuf/message_lite.h>
#include <protobuf/repeated_field.h>
#include <protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace CoreML {
namespace Specification {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_ArrayFeatureExtractor_2eproto();
void protobuf_InitDefaults_ArrayFeatureExtractor_2eproto();
void protobuf_AssignDesc_ArrayFeatureExtractor_2eproto();
void protobuf_ShutdownFile_ArrayFeatureExtractor_2eproto();

class ArrayFeatureExtractor;

// ===================================================================

class ArrayFeatureExtractor : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:CoreML.Specification.ArrayFeatureExtractor) */ {
 public:
  ArrayFeatureExtractor();
  virtual ~ArrayFeatureExtractor();

  ArrayFeatureExtractor(const ArrayFeatureExtractor& from);

  inline ArrayFeatureExtractor& operator=(const ArrayFeatureExtractor& from) {
    CopyFrom(from);
    return *this;
  }

  static const ArrayFeatureExtractor& default_instance();

  static const ArrayFeatureExtractor* internal_default_instance();

  void Swap(ArrayFeatureExtractor* other);

  // implements Message ----------------------------------------------

  inline ArrayFeatureExtractor* New() const { return New(NULL); }

  ArrayFeatureExtractor* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ArrayFeatureExtractor& from);
  void MergeFrom(const ArrayFeatureExtractor& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ArrayFeatureExtractor* other);
  void UnsafeMergeFrom(const ArrayFeatureExtractor& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 extractIndex = 1;
  int extractindex_size() const;
  void clear_extractindex();
  static const int kExtractIndexFieldNumber = 1;
  ::google::protobuf::uint64 extractindex(int index) const;
  void set_extractindex(int index, ::google::protobuf::uint64 value);
  void add_extractindex(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      extractindex() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_extractindex();

  // @@protoc_insertion_point(class_scope:CoreML.Specification.ArrayFeatureExtractor)
 private:

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > extractindex_;
  mutable int _extractindex_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_ArrayFeatureExtractor_2eproto_impl();
  friend void  protobuf_AddDesc_ArrayFeatureExtractor_2eproto_impl();
  friend void protobuf_AssignDesc_ArrayFeatureExtractor_2eproto();
  friend void protobuf_ShutdownFile_ArrayFeatureExtractor_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ArrayFeatureExtractor> ArrayFeatureExtractor_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ArrayFeatureExtractor

// repeated uint64 extractIndex = 1;
inline int ArrayFeatureExtractor::extractindex_size() const {
  return extractindex_.size();
}
inline void ArrayFeatureExtractor::clear_extractindex() {
  extractindex_.Clear();
}
inline ::google::protobuf::uint64 ArrayFeatureExtractor::extractindex(int index) const {
  // @@protoc_insertion_point(field_get:CoreML.Specification.ArrayFeatureExtractor.extractIndex)
  return extractindex_.Get(index);
}
inline void ArrayFeatureExtractor::set_extractindex(int index, ::google::protobuf::uint64 value) {
  extractindex_.Set(index, value);
  // @@protoc_insertion_point(field_set:CoreML.Specification.ArrayFeatureExtractor.extractIndex)
}
inline void ArrayFeatureExtractor::add_extractindex(::google::protobuf::uint64 value) {
  extractindex_.Add(value);
  // @@protoc_insertion_point(field_add:CoreML.Specification.ArrayFeatureExtractor.extractIndex)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
ArrayFeatureExtractor::extractindex() const {
  // @@protoc_insertion_point(field_list:CoreML.Specification.ArrayFeatureExtractor.extractIndex)
  return extractindex_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
ArrayFeatureExtractor::mutable_extractindex() {
  // @@protoc_insertion_point(field_mutable_list:CoreML.Specification.ArrayFeatureExtractor.extractIndex)
  return &extractindex_;
}

inline const ArrayFeatureExtractor* ArrayFeatureExtractor::internal_default_instance() {
  return &ArrayFeatureExtractor_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Specification
}  // namespace CoreML

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ArrayFeatureExtractor_2eproto__INCLUDED
