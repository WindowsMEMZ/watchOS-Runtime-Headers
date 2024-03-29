//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef INStopShareETAIntentHandling_Protocol_h
#define INStopShareETAIntentHandling_Protocol_h
@import Foundation;

@protocol INStopShareETAIntentHandling <NSObject>
/* instance methods */
- (void)handleStopShareETA:(id)eta completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmStopShareETA:(id)eta completion:(id /* block */)completion;
- (void)resolveRecipientsForStopShareETA:(id)eta withCompletion:(id /* block */)completion;
@end

#endif /* INStopShareETAIntentHandling_Protocol_h */
