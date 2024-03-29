//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInputSessionActionInformation_h
#define _UITextInputSessionActionInformation_h
@import Foundation;

@class NSString;

@interface _UITextInputSessionActionInformation : NSObject

@property (copy, nonatomic) NSString *sessionActionString;
@property (nonatomic) BOOL sessionHasOnlyPrimaryInput;
@property (nonatomic) BOOL sessionHasDictation;

/* instance methods */
@end

#endif /* _UITextInputSessionActionInformation_h */
