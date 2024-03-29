//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXSandboxExtendedURL_h
#define CXSandboxExtendedURL_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface CXSandboxExtendedURL : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *sandboxExtensionToken;
@property (nonatomic) long long sandboxExtensionHandle;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithURL:(id)url;
- (id)init;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToSandboxExtendedURL:(id)url;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CXSandboxExtendedURL_h */
