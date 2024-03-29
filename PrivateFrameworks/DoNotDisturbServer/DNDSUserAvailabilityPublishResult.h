//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSUserAvailabilityPublishResult_h
#define DNDSUserAvailabilityPublishResult_h
@import Foundation;

@class AKAvailability, NSString;

@interface DNDSUserAvailabilityPublishResult : NSObject

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) AKAvailability *availability;

/* instance methods */
- (id)initWithIdentifier:(id)identifier availability:(id)availability;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* DNDSUserAvailabilityPublishResult_h */
