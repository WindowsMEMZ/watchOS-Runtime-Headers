//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRINotificationReactionChecker_h
#define TRINotificationReactionChecker_h
@import Foundation;

#include "TRIDateProviding-Protocol.h"
#include "TRIExperimentDatabase.h"
#include "TRINotificationReactionCheckerProtocol-Protocol.h"
#include "TRIRolloutDatabase.h"

@interface TRINotificationReactionChecker : NSObject<TRINotificationReactionCheckerProtocol> {
  /* instance variables */
  NSObject<TRIDateProviding> *_dateProvider;
  TRIRolloutDatabase *_rolloutDb;
  TRIExperimentDatabase *_experimentDb;
}

/* instance methods */
- (id)initWithDateProvider:(id)provider rolloutDatabase:(id)database experimentDatabase:(id)database;
- (struct { unsigned char x0; })reactionForHotfixDeployment:(id)deployment hotfixDeploymentDate:(id)date;
- (BOOL)_isOutdatedDeploymentDate:(id)date;
- (BOOL)_isExistingDeployment:(id)deployment;
- (struct { unsigned char x0; })reactionForRollbackExperimentId:(id)id;
@end

#endif /* TRINotificationReactionChecker_h */
