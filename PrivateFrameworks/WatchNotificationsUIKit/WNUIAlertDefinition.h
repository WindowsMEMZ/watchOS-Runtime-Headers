//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertDefinition_h
#define WNUIAlertDefinition_h
@import Foundation;

@class NSString;

@interface WNUIAlertDefinition : NSObject

@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *hostApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL compatibilityDefinition;

/* instance methods */
- (id)initWithDomain:(id)domain hostApplicationBundleIdentifier:(id)identifier isCompatibilityDefinition:(BOOL)definition;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isCompatibilityDefinition;
@end

#endif /* WNUIAlertDefinition_h */
