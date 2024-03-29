//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXPlaceholderSeed_h
#define IXPlaceholderSeed_h
@import Foundation;

#include "IXOwnedDataPromiseSeed.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface IXPlaceholderSeed : IXOwnedDataPromiseSeed<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *bundleName;
@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) unsigned long long installType;
@property (readonly, nonatomic) BOOL isAppExtension;
@property (nonatomic) unsigned long long placeholderType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (Class)clientPromiseClass;
@end

#endif /* IXPlaceholderSeed_h */
