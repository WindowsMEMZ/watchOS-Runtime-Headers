//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSAppEvent_h
#define CSLSAppEvent_h
@import Foundation;

@class NSDate;

@interface CSLSAppEvent : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) unsigned long long reason;

/* class methods */
+ (id)eventTypeName:(unsigned long long)name;
+ (id)reasonName:(unsigned long long)name;

/* instance methods */
- (BOOL)isEqualToAppEvent:(id)event;
@end

#endif /* CSLSAppEvent_h */
