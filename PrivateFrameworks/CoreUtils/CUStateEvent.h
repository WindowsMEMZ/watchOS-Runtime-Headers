//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUStateEvent_h
#define CUStateEvent_h
@import Foundation;

@class NSDictionary, NSString;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

/* class methods */
+ (id)enterState;
+ (id)exitState;
+ (id)initialTransition;

/* instance methods */
- (id)initWithName:(id)name userInfo:(id)info;
- (void)dealloc;
- (id)description;
@end

#endif /* CUStateEvent_h */
