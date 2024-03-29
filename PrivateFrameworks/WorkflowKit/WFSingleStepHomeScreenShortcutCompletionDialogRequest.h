//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSingleStepHomeScreenShortcutCompletionDialogRequest_h
#define WFSingleStepHomeScreenShortcutCompletionDialogRequest_h
@import Foundation;

#include "WFDialogRequest.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface WFSingleStepHomeScreenShortcutCompletionDialogRequest : WFDialogRequest<NSSecureCoding> {
  /* instance variables */
  BOOL _requiresRunningShortcut;
}

@property (readonly, nonatomic) NSString *applicationBundleIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithShortcutName:(id)name applicationBundleIdentifier:(id)identifier;
- (BOOL)requiresRunningShortcut;
- (void)setRequiresRunningShortcut:(BOOL)shortcut;
@end

#endif /* WFSingleStepHomeScreenShortcutCompletionDialogRequest_h */
