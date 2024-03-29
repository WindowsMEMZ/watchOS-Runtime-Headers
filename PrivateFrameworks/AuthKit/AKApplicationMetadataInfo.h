//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKApplicationMetadataInfo_h
#define AKApplicationMetadataInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AKApplicationMetadataInfo : NSObject<NSSecureCoding>

@property (readonly, copy, nonatomic) NSString *authorizedAppListVersion;
@property (readonly, copy, nonatomic) NSDictionary *teams;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithResponseInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* AKApplicationMetadataInfo_h */
