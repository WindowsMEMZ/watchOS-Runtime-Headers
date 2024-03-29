//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICRemoteRequestOperationExecutionContext_h
#define ICRemoteRequestOperationExecutionContext_h
@import Foundation;

#include "ICRemoteRequestOperation.h"
#include "NSSecureCoding-Protocol.h"

@interface ICRemoteRequestOperationExecutionContext : NSObject<NSSecureCoding>

@property (readonly, nonatomic) ICRemoteRequestOperation *remoteRequestOperation;
@property (nonatomic) long long qualityOfService;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRemoteRequestOperation:(id)operation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ICRemoteRequestOperationExecutionContext_h */
