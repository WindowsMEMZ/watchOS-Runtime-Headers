//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINotificationReactionCheckerProtocol_Protocol_h
#define TRINotificationReactionCheckerProtocol_Protocol_h
@import Foundation;

@protocol TRINotificationReactionCheckerProtocol 
/* instance methods */
- (struct { unsigned char x0; })reactionForHotfixDeployment:(id)deployment hotfixDeploymentDate:(id)date;
- (struct { unsigned char x0; })reactionForRollbackExperimentId:(id)id;
@end

#endif /* TRINotificationReactionCheckerProtocol_Protocol_h */
