//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUILabeledAvatarView_h
#define EKUILabeledAvatarView_h
@import Foundation;

#include "UIView.h"

@class CNAvatarView, CNContact, UIImageView, UILabel, UIView, UIViewController;
@protocol EKUILabeledAvatarViewDelegate;

@interface EKUILabeledAvatarView : UIView

@property (retain) CNAvatarView *avatar;
@property (retain) UIImageView *badge;
@property (retain) UIView *pressedAccentOverlay;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property unsigned long long options;
@property (retain) CNContact *contact;
@property (weak, nonatomic) NSObject<EKUILabeledAvatarViewDelegate> *delegate;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) unsigned long long selectionState;
@property (weak) UIViewController *viewController;
@property (nonatomic) BOOL loadContactsAsynchronously;

/* class methods */
+ (id)contactKeysToFetch;
+ (id)_createAvatarView;
+ (id)sortedAvatarListFromParticipants:(id)participants;

/* instance methods */
- (id)init;
- (id)initWithPlacement:(unsigned long long)placement options:(unsigned long long)options;
- (id)initWithIdentity:(id)identity placement:(unsigned long long)placement options:(unsigned long long)options;
- (id)initWithEmail:(id)email fullName:(id)name firstName:(id)name lastName:(id)name placement:(unsigned long long)placement options:(unsigned long long)options;
- (id)initWithContact:(id)contact placement:(unsigned long long)placement options:(unsigned long long)options;
- (void)setup;
- (void)updateLabel;
- (void)updateWithAddress:(id)address fullName:(id)name firstName:(id)name lastName:(id)name;
- (void)updateWithParticipant:(id)participant;
- (void)updateWithContacts:(id)contacts;
- (void)updateAvatarViewWithAddress:(id)address fullName:(id)name firstName:(id)name lastName:(id)name;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)didTap;
- (void)didLongPress;
@end

#endif /* EKUILabeledAvatarView_h */
