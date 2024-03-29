//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXSceneSessionConnectionRequest_h
#define _EXSceneSessionConnectionRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "_EXSceneSessionParameters.h"

@class NSUUID, NSXPCListenerEndpoint;

@interface _EXSceneSessionConnectionRequest : NSObject<NSSecureCoding>

@property (retain) NSUUID *identifier;
@property (retain) NSXPCListenerEndpoint *hostEndpoint;
@property (retain) _EXSceneSessionParameters *parameters;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _EXSceneSessionConnectionRequest_h */
