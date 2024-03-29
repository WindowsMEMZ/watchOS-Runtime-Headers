//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFNotificationActionAlert_h
#define WFNotificationActionAlert_h
@import Foundation;

@class NSString;

@interface WFNotificationActionAlert : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *body;

/* instance methods */
- (id)initWithTitle:(id)title body:(id)body;
@end

#endif /* WFNotificationActionAlert_h */
