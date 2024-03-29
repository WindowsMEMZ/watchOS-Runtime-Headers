//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLBindingInternal_h
#define MTLBindingInternal_h
@import Foundation;

#include ".h"
#include "MTLArgument.h"
#include "MTLArgumentCompat-Protocol.h"
#include "MTLBinding-Protocol.h"
#include "MTLPointerType.h"
#include "MTLStructType.h"
#include "MTLStructTypeInternal.h"
#include "MTLType.h"

@class NSString;

@interface MTLBindingInternal : <MTLArgumentCompat, MTLBinding> {
  /* instance variables */
  MTLType *_typeInfo;
}

@property BOOL isUsed;
@property BOOL argument;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long textureDataType;
@property (readonly) BOOL isDepthTexture;
@property (readonly) unsigned long long objectPayloadAlignment;
@property (readonly) unsigned long long objectPayloadDataSize;
@property (readonly) unsigned long long meshVertexCount;
@property (readonly) unsigned long long meshPrimitiveCount;
@property (readonly) unsigned long long meshTopologyType;
@property (readonly) MTLStructTypeInternal *meshVertexStruct;
@property (readonly) MTLStructTypeInternal *meshPrimitiveStruct;
@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) unsigned long long indirectConstantAlignment;
@property (readonly) unsigned long long indirectConstantDataSize;
@property (readonly) unsigned long long indirectConstantDataType;
@property (readonly, @dynamic) unsigned long long bufferPixelFormat;
@property (readonly, @dynamic) unsigned long long bufferALUType;
@property (readonly, @dynamic) MTLStructType *structType;
@property (readonly) unsigned long long builtInType;
@property (readonly) unsigned long long builtInDataType;
@property (readonly) unsigned long long imageBlockKind;
@property (readonly) unsigned long long imageBlockDataSize;
@property (readonly) MTLStructTypeInternal *imageBlockMasterStructMembers;
@property (readonly) BOOL aliasImplicitImageBlock;
@property (readonly) unsigned long long aliasImplicitImageBlockRenderTarget;
@property (readonly) BOOL vertexDescriptorBuffer;
@property (readonly) unsigned long long threadgroupMemoryDataType;
@property (readonly) MTLStructType *threadgroupMemoryStructType;
@property (readonly) NSString *name;
@property (readonly) long long type;
@property (readonly) unsigned long long access;
@property (readonly) unsigned long long index;
@property (readonly) BOOL active;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL used;

/* instance methods */
- (id)initWithName:(id)name type:(unsigned long long)type access:(unsigned long long)access index:(unsigned long long)index active:(BOOL)active arrayLength:(unsigned long long)length;
- (id)initWithName:(id)name type:(unsigned long long)type access:(unsigned long long)access index:(unsigned long long)index active:(BOOL)active arrayLength:(unsigned long long)length typeDescription:(id)description;
- (void)dealloc;
- (id)dataTypeDescription;
- (id)formattedDescription:(unsigned long long)description withPrintedTypes:(id)types;
- (id)formattedDescription:(unsigned long long)description;
- (BOOL)isActive;
- (BOOL)isEqual:(id)equal;
- (BOOL)isArgument;
- (void)setIsArgument:(BOOL)argument;
- (BOOL)isVertexDescriptorBuffer;
@end

#endif /* MTLBindingInternal_h */
