//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXItemProviderSandboxedResource_h
#define _EXItemProviderSandboxedResource_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSURL;

@interface _EXItemProviderSandboxedResource : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSData *sandboxExtensionToken;
@property (copy, nonatomic) NSURL *resourceURL;
@property (nonatomic) BOOL accessingSecurityScopedResource;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithContentsOfURL:(id)url auditToken:(struct { unsigned int x0[8] })token error:(id *)error;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)resolveURLAndReturnError:(id *)error;
- (BOOL)isAccessingSecurityScopedResource;
@end

#endif /* _EXItemProviderSandboxedResource_h */
