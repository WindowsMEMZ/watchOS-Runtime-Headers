//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInteractionProgressObserver_Protocol_h
#define UIInteractionProgressObserver_Protocol_h
@import Foundation;

@protocol UIInteractionProgressObserver <NSObject>
@optional
/* instance methods */
- (void)interactionProgressDidUpdate:(id)update;
- (void)interactionProgress:(id)progress didEnd:(BOOL)end;
@end

#endif /* UIInteractionProgressObserver_Protocol_h */
