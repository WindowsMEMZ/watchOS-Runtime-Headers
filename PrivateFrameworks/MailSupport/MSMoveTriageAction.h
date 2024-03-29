//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MSMoveTriageAction_h
#define MSMoveTriageAction_h
@import Foundation;

#include "MSTriageAction.h"

@class ECMessageFlagChange, EMMailbox;

@interface MSMoveTriageAction : MSTriageAction {
  /* instance variables */
  EMMailbox *_destinationMailbox;
  long long _destinationMailboxType;
  ECMessageFlagChange *_flagChange;
  BOOL _copyMessages;
}

/* instance methods */
- (id)initWithMessageListSelection:(id)selection origin:(long long)origin actor:(long long)actor delegate:(id)delegate destinationMailbox:(id)mailbox flagChange:(id)change copyMessages:(BOOL)messages;
- (id)initWithMessageListSelection:(id)selection origin:(long long)origin actor:(long long)actor delegate:(id)delegate destinationMailboxType:(long long)type flagChange:(id)change copyMessages:(BOOL)messages;
- (id)_changeAction;
@end

#endif /* MSMoveTriageAction_h */
