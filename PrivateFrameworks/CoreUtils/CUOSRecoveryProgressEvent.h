//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUOSRecoveryProgressEvent_h
#define CUOSRecoveryProgressEvent_h
@import Foundation;

@class NSDictionary, NSError, NSString;

@interface CUOSRecoveryProgressEvent : NSObject

@property (copy, nonatomic) NSString *authenticationText;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) int type;
@property (readonly, copy, nonatomic) NSDictionary *configInfo;

/* instance methods */
@end

#endif /* CUOSRecoveryProgressEvent_h */
