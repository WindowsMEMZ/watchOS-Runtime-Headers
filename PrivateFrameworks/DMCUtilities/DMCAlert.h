//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCAlert_h
#define DMCAlert_h
@import Foundation;

@class NSString;

@interface DMCAlert : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *defaultButtonText;
@property (retain, nonatomic) NSString *alternateButtonText;
@property (retain, nonatomic) NSString *otherButtonText;
@property (nonatomic) BOOL displayOnLockScreen;
@property (nonatomic) BOOL dismissOnLock;
@property (nonatomic) double dismissAfterTimeInterval;
@property (retain, nonatomic) id notification;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSString *summary;

/* instance methods */
- (id)notificationParametersOutFlags:(unsigned long long *)flags;
@end

#endif /* DMCAlert_h */
