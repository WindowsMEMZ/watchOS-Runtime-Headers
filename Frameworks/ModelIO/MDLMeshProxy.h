//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 266.1.0.0.0
//
#ifndef MDLMeshProxy_h
#define MDLMeshProxy_h
@import Foundation;

#include "MDLMesh.h"
#include "NSSecureCoding-Protocol.h"

@interface MDLMeshProxy : MDLMesh<NSSecureCoding>
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithVertexBuffers:(id)buffers vertexCount:(unsigned long long)count descriptor:(id)descriptor submeshes:(id)submeshes;
@end

#endif /* MDLMeshProxy_h */
