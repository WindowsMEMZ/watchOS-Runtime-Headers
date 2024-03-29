//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLMeshBufferZoneDefault_h
#define MDLMeshBufferZoneDefault_h
@import Foundation;

#include "MDLMeshBufferAllocator-Protocol.h"
#include "MDLMeshBufferZone-Protocol.h"

@class NSString;

@interface MDLMeshBufferZoneDefault : NSObject<MDLMeshBufferZone> {
  /* instance variables */
  unsigned long long _usedCapacity;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, retain, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity allocator:(id)allocator;
- (BOOL)reserveMemory:(unsigned long long)memory allocator:(id)allocator;
- (void)cancelMemory:(unsigned long long)memory;
@end

#endif /* MDLMeshBufferZoneDefault_h */
