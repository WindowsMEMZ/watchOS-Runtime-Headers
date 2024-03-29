//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextInputSessionAction_h
#define _UITextInputSessionAction_h
@import Foundation;

@class NSString;

@interface _UITextInputSessionAction : NSObject

@property (nonatomic) long long source;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } relativeRangeBefore;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) long long textInputActionsSource;
@property (nonatomic) long long textInputActionsType;
@property (readonly, nonatomic) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *keyboardVariant;
@property (copy, nonatomic) NSString *keyboardLayout;
@property (copy, nonatomic) NSString *keyboardType;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) long long flagOptions;
@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionEndAction *asEnd;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionCopyAction *asCopy;
@property (readonly, nonatomic) _UITextInputSessionCutAction *asCut;
@property (readonly, nonatomic) _UITextInputSessionPasteAction *asPaste;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property (readonly, nonatomic) _UITextInputSessionKeyboardDockItemButtonPressAction *asKeyboardDockItemButtonPress;
@property (readonly, nonatomic) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property (readonly, nonatomic) _UITextInputSessionDictationEndedAction *asDictationEnded;
@property (readonly, nonatomic) _UITextInputSessionReplaceTextAction *asReplaceText;
@property (readonly, nonatomic) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidate;

/* instance methods */
- (long long)mergeActionIfPossible:(id)possible;
- (id)description;
- (id)inputModeUniqueString;
- (BOOL)isMergeableWith:(id)with;
@end

#endif /* _UITextInputSessionAction_h */
