//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLVertexAttributeData_h
#define MDLVertexAttributeData_h
@import Foundation;

#include "MDLMeshBufferMap.h"

@interface MDLVertexAttributeData : NSObject

@property (retain, nonatomic) MDLMeshBufferMap *map;
@property (nonatomic) void * dataStart;
@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long bufferSize;

/* instance methods */
- (void)setbufferSize:(unsigned long long)size;
- (id)init;
@end

#endif /* MDLVertexAttributeData_h */
