//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _WKWebExtensionControllerConfiguration_h
#define _WKWebExtensionControllerConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface _WKWebExtensionControllerConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) BOOL persistent;
@property (readonly, nonatomic) NSUUID *identifier;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)defaultConfiguration;
+ (id)nonPersistentConfiguration;
+ (id)configurationWithIdentifier:(id)identifier;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isPersistent;
@end

#endif /* _WKWebExtensionControllerConfiguration_h */
