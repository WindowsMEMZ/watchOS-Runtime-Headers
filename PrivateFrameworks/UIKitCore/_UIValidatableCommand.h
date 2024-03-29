//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIValidatableCommand_h
#define _UIValidatableCommand_h
@import Foundation;

#include "UICommand.h"
#include "UICommand.h"
#include "UICommandAlternate.h"

@interface _UIValidatableCommand : UICommand {
  /* instance variables */
  UICommand *_command;
  UICommandAlternate *_alternate;
}

/* instance methods */
- (SEL)action;
- (id)propertyList;
- (id)alternates;
- (id)init;
- (void)useCommand:(id)command alternate:(id)alternate;
@end

#endif /* _UIValidatableCommand_h */
