//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLMeshBufferDataAllocator_h
#define MDLMeshBufferDataAllocator_h
@import Foundation;

#include "MDLMeshBufferAllocator-Protocol.h"

@class NSString;

@interface MDLMeshBufferDataAllocator : NSObject<MDLMeshBufferAllocator>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)newZone:(unsigned long long)zone;
- (id)newZoneForBuffersWithSize:(id)size andType:(id)type;
- (id)newBuffer:(unsigned long long)buffer type:(unsigned long long)type;
- (id)newBufferWithData:(id)data type:(unsigned long long)type;
- (id)newBufferFromZone:(id)zone length:(unsigned long long)length type:(unsigned long long)type;
- (id)newBufferFromZone:(id)zone data:(id)data type:(unsigned long long)type;
@end

#endif /* MDLMeshBufferDataAllocator_h */
