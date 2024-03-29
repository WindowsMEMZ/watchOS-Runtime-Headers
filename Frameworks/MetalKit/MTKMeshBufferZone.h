//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 161.0.0.0.0
//
#ifndef MTKMeshBufferZone_h
#define MTKMeshBufferZone_h
@import Foundation;

#include "MDLMeshBufferAllocator-Protocol.h"
#include "MDLMeshBufferZone-Protocol.h"
#include "MTKMeshBufferAllocator.h"

@class NSMutableOrderedSet, NSString;
@protocol MTLBuffer;

@interface MTKMeshBufferZone : NSObject<MDLMeshBufferZone> {
  /* instance variables */
  NSMutableOrderedSet *_buffers;
  BOOL _destroyInvoked;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator;
@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity allocator:(id)allocator;
- (id)newBufferWithLength:(unsigned long long)length type:(unsigned long long)type;
- (void)destroyBuffer:(id)buffer;
@end

#endif /* MTKMeshBufferZone_h */
