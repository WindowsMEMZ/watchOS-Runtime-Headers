//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusEnvironmentPrivate_Protocol_h
#define _UIFocusEnvironmentPrivate_Protocol_h
@import Foundation;

@protocol _UIFocusEnvironmentPrivate <UIFocusEnvironment>

@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic) BOOL eligibleForFocusOcclusion;
@property (readonly, nonatomic) long long preferredFocusMovementStyle;
@property (readonly, copy, nonatomic) NSArray *linearFocusMovementSequences;

@optional
/* instance methods */
- (BOOL)_allowsFocusToLeaveViaHeading:(unsigned long long)heading;
- (void)_setNeedsNonDeferredFocusUpdate;
- (long long)_rotaryFocusMovementAxis;
- (BOOL)_isEligibleForFocusInteraction;
- (BOOL)_isEligibleForFocusOcclusion;
- (long long)_preferredFocusMovementStyle;
- (id)_linearFocusMovementSequences;
@end

#endif /* _UIFocusEnvironmentPrivate_Protocol_h */
