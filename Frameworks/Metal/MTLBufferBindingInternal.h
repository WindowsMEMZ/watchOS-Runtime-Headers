//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLBufferBindingInternal_h
#define MTLBufferBindingInternal_h
@import Foundation;

#include "MTLBindingInternal.h"
#include "MTLBufferBinding-Protocol.h"
#include "MTLPointerType.h"
#include "MTLStructType.h"

@class NSString;

@interface MTLBufferBindingInternal : MTLBindingInternal<MTLBufferBinding> {
  /* instance variables */
  unsigned int x :15 _dataType;
  unsigned int x :1 _vertexDescriptorBuffer;
  unsigned short _alignment;
  unsigned int _dataSize;
  unsigned long long _pixelFormat;
  unsigned long long _aluType;
}

@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly) BOOL used;
@property (readonly) BOOL argument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name type:(unsigned long long)type access:(unsigned long long)access isActive:(BOOL)active locationIndex:(unsigned long long)index arraySize:(unsigned long long)size dataType:(unsigned long long)type pixelFormat:(unsigned long long)format aluType:(unsigned long long)type isConstantBuffer:(BOOL)buffer dataSize:(unsigned long long)size alignment:(unsigned long long)alignment;
- (void)dealloc;
- (void)setDataSize:(unsigned long long)size;
- (void)setAlignment:(unsigned long long)alignment;
- (void)setVertexDescriptorBuffer:(BOOL)buffer;
- (BOOL)isVertexDescriptorBuffer;
- (void)setStructType:(id)type doRetain:(BOOL)retain;
- (void)setStructType:(id)type;
- (unsigned long long)bufferPixelFormat;
- (unsigned long long)bufferALUType;
- (id)structType;
- (id)bufferIndirectArgumentType;
- (id)formattedDescription:(unsigned long long)description;
- (BOOL)isEqual:(id)equal;
@end

#endif /* MTLBufferBindingInternal_h */
