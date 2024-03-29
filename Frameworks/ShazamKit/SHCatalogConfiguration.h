//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHCatalogConfiguration_h
#define SHCatalogConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SHRange.h"

@class NSString;

@interface SHCatalogConfiguration : NSObject<NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSString *installationID;
@property (retain, nonatomic) SHRange *signatureDurationRange;
@property (nonatomic) double streamingBufferDuration;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SHCatalogConfiguration_h */
