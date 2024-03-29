//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef OSActivityStreamDelegate_Protocol_h
#define OSActivityStreamDelegate_Protocol_h
@import Foundation;

@protocol OSActivityStreamDelegate <NSObject>
/* instance methods */
- (BOOL)activityStream:(id)stream results:(id)results;
@optional
/* instance methods */
- (void)streamDidStart:(id)start;
- (void)streamDidFail:(id)fail error:(id)error;
- (void)streamDidStop:(id)stop;
- (BOOL)activityStream:(id)stream results:(id)results error:(id)error;
@end

#endif /* OSActivityStreamDelegate_Protocol_h */
