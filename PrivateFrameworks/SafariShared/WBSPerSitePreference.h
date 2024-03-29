//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSPerSitePreference_h
#define WBSPerSitePreference_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface WBSPerSitePreference : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;

/* class methods */
+ (id)localizedStringForBinaryPreferenceValue:(id)value;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* WBSPerSitePreference_h */
