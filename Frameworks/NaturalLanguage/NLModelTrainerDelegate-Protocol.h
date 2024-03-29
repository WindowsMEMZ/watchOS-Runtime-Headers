//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLModelTrainerDelegate_Protocol_h
#define NLModelTrainerDelegate_Protocol_h
@import Foundation;

@protocol NLModelTrainerDelegate <NSObject>
@optional
/* instance methods */
- (void)modelTrainer:(id)trainer logMessage:(id)message;
- (BOOL)modelTrainerShouldStop:(id)stop;
@end

#endif /* NLModelTrainerDelegate_Protocol_h */
