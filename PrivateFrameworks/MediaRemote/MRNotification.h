//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNotification_h
#define MRNotification_h
@import Foundation;

@class NSDictionary, NSString;
@protocol OS_xpc_object;

@interface MRNotification : NSObject

@property (readonly, nonatomic) NSString *notification;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcMessage;

/* instance methods */
- (id)initWithNotification:(id)notification userInfo:(id)info;
@end

#endif /* MRNotification_h */
