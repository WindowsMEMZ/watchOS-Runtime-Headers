//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1270.60.4.0.0
//
#ifndef ICLUninstallRecord_h
#define ICLUninstallRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface ICLUninstallRecord : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSDictionary *legacyDictionary;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)uninstallRecordArrayToDictionary:(id)dictionary;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* ICLUninstallRecord_h */
