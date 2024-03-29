//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVDelegatingPlaybackCoordinatorBufferingCommand_h
#define AVDelegatingPlaybackCoordinatorBufferingCommand_h
@import Foundation;

#include "AVDelegatingPlaybackCoordinatorPlaybackControlCommand.h"
#include "AVCoordinatedPlaybackParticipant.h"
#include "AVDelegatingPlaybackCoordinator.h"

@class NSDate, NSString;

@interface AVDelegatingPlaybackCoordinatorBufferingCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
  /* instance variables */
  AVDelegatingPlaybackCoordinator *_coordinator;
  AVCoordinatedPlaybackParticipant *_originator;
  NSString *_expectedCurrentItemIdentifier;
  long long _commandOrderIndex;
}

@property (readonly, nonatomic) float anticipatedPlaybackRate;
@property (readonly, nonatomic) NSDate *completionDueDate;

/* instance methods */
- (id)init;
- (id)initWithCoordinator:(id)coordinator originator:(id)originator expectedCurrentItemIdentifier:(id)identifier commandOrderIndex:(long long)index anticipatedPlaybackRate:(float)rate completionDueDate:(id)date;
- (void)dealloc;
- (id)originator;
- (id)expectedCurrentItemIdentifier;
@end

#endif /* AVDelegatingPlaybackCoordinatorBufferingCommand_h */
