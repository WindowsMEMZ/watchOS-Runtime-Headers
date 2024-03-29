//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NCNotificationOptions_h
#define NCNotificationOptions_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSSet, NSString;

@interface NCNotificationOptions : NSObject<BSDescriptionProviding, NSCopying, NSMutableCopying> {
  /* instance variables */
  BOOL _addToLockScreenWhenLocked;
}

@property (readonly, copy, nonatomic) NSSet *alertSuppressionContexts;
@property (readonly, copy, nonatomic) NSString *alternateActionLabel;
@property (readonly, nonatomic) BOOL dismissAutomatically;
@property (readonly, nonatomic) BOOL dismissAutomaticallyForCarPlay;
@property (readonly, nonatomic) BOOL overridesQuietMode;
@property (readonly, nonatomic) BOOL overridesDowntime;
@property (readonly, nonatomic) BOOL alertsWhenLocked;
@property (readonly, nonatomic) BOOL addToLockScreenWhenUnlocked;
@property (readonly, nonatomic) unsigned long long lockScreenPersistence;
@property (readonly, nonatomic) unsigned long long lockScreenPriority;
@property (readonly, nonatomic) unsigned long long realertCount;
@property (readonly, nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (readonly, nonatomic) BOOL canPlaySound;
@property (readonly, nonatomic) BOOL canTurnOnDisplay;
@property (readonly, nonatomic) BOOL requestsFullScreenPresentation;
@property (readonly, nonatomic) BOOL preemptsPresentedNotification;
@property (readonly, nonatomic) BOOL displaysActionsInline;
@property (readonly, nonatomic) BOOL revealsAdditionalContentOnPresentation;
@property (readonly, nonatomic) BOOL suppressesTitleWhenLocked;
@property (readonly, nonatomic) BOOL suppressesSubtitleWhenLocked;
@property (readonly, nonatomic) BOOL suppressesBodyWhenLocked;
@property (readonly, copy, nonatomic) NSString *speechLanguage;
@property (readonly, nonatomic) BOOL playMediaWhenRaised;
@property (readonly, nonatomic) unsigned long long contentPreviewSetting;
@property (readonly, nonatomic) BOOL silencedByMenuButtonPress;
@property (readonly, nonatomic) BOOL overridesPocketMode;
@property (readonly, nonatomic) BOOL hideClearActionInList;
@property (readonly, nonatomic) BOOL numberOfLinesInfinite;
@property (readonly, nonatomic) BOOL coalescesWhenLocked;
@property (readonly, nonatomic) BOOL preventsAutomaticLock;
@property (readonly, nonatomic) BOOL revealsAdditionalContentIfNoDefaultAction;
@property (readonly, nonatomic) BOOL lauchUsingSiriForCarPlayDefaultAction;
@property (readonly, nonatomic) BOOL allowActionsForCarPlay;
@property (readonly, nonatomic) BOOL hideCloseActionForCarPlay;
@property (readonly, nonatomic) BOOL shouldAnnounceForCarPlay;
@property (readonly, nonatomic) BOOL suppressPresentationInAmbient;
@property (readonly, nonatomic) BOOL screenCaptureProhibited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationOptions:(id)options;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isNumberOfLinesInfinite;
@end

#endif /* NCNotificationOptions_h */
