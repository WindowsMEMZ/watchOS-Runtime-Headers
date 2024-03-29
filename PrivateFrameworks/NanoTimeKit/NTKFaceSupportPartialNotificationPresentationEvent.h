//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceSupportPartialNotificationPresentationEvent_h
#define NTKFaceSupportPartialNotificationPresentationEvent_h
@import Foundation;

@class NSDate, NSString;

@interface NTKFaceSupportPartialNotificationPresentationEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *pushDate;
@property (readonly, copy, nonatomic) NSString *identifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier pushDate:(id)date;
- (id)presentationEventWithStatus:(long long)status artworkUsed:(long long)used errorCode:(long long)code optOutStatus:(long long)status;
@end

#endif /* NTKFaceSupportPartialNotificationPresentationEvent_h */
