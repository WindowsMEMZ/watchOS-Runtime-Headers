//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINamespaceRecord_h
#define TRINamespaceRecord_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface TRINamespaceRecord : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;
@property (readonly, nonatomic) NSURL *treatmentURL;

/* class methods */
+ (id)recordWithName:(id)name compatibilityVersion:(unsigned int)version treatmentURL:(id)url;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name compatibilityVersion:(unsigned int)version treatmentURL:(id)url;
- (id)copyWithReplacementName:(id)name;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)version;
- (id)copyWithReplacementTreatmentURL:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToRecord:(id)record;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)init;
@end

#endif /* TRINamespaceRecord_h */
