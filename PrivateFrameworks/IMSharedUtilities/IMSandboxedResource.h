//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMSandboxedResource_h
#define IMSandboxedResource_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IMSandboxedResource : NSObject<NSSecureCoding>

@property (nonatomic) long long sandboxExtensionHandle;
@property (retain, nonatomic) id resource;
@property (retain, nonatomic) NSString *sandboxExtension;

/* class methods */
+ (Class)resourceClass;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)dealloc;
- (void)authorizeForPID:(int)pid;
- (BOOL)accessResourceByConsumingSandboxExtensionWithBlock:(id /* block */)block;
- (char *)_sandboxExtensionForPID:(int)pid;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* IMSandboxedResource_h */
