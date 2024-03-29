//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDPrivacyPolicy_h
#define _CDPrivacyPolicy_h
@import Foundation;

@interface _CDPrivacyPolicy : NSObject

@property (readonly, nonatomic) BOOL canPersistOnStorage;
@property (readonly, nonatomic) double temporalPrecision;

/* class methods */
+ (id)sharedPrivacyPolicy;

/* instance methods */
- (id)init;
- (id)initWithTemporalPrecision:(double)precision canPersistOnStorage:(BOOL)storage;
- (id)description;
@end

#endif /* _CDPrivacyPolicy_h */
