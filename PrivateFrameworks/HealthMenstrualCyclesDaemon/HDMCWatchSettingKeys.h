//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMCWatchSettingKeys_h
#define HDMCWatchSettingKeys_h
@import Foundation;

@class NSString;

@interface HDMCWatchSettingKeys : NSObject

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *featureSettingEnabledKey;
@property (readonly, copy, nonatomic) NSString *defaultsEnabledKey;
@property (readonly, copy, nonatomic) NSString *lastReconciledEnabledKey;

/* instance methods */
- (id)initWithFeatureIdentifier:(id)identifier defaultsEnabledKey:(id)key;
- (id)initWithFeatureIdentifier:(id)identifier featureSettingEnabledKey:(id)key defaultsEnabledKey:(id)key lastReconciledEnabledKey:(id)key;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* HDMCWatchSettingKeys_h */
