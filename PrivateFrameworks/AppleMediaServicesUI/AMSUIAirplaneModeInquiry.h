//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef AMSUIAirplaneModeInquiry_h
#define AMSUIAirplaneModeInquiry_h
@import Foundation;

@protocol AMSUIAirplaneModeInquiryDelegate;

@interface AMSUIAirplaneModeInquiry : NSObject

@property (weak, nonatomic) NSObject<AMSUIAirplaneModeInquiryDelegate> *delegate;
@property (readonly, nonatomic) BOOL isEnabled;

/* class methods */
+ (id)settingsURL;

/* instance methods */
@end

#endif /* AMSUIAirplaneModeInquiry_h */
