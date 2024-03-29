//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UICollaborationInviteWithLinkActivity_h
#define UICollaborationInviteWithLinkActivity_h
@import Foundation;

#include "UIActivity.h"
#include "SFCollaborationService-Protocol.h"
#include "UICollaborationActivity-Protocol.h"

@class NSString;
@protocol SFCollaborationItem;

@interface UICollaborationInviteWithLinkActivity : UIActivity<UICollaborationActivity>

@property (retain, nonatomic) NSObject<SFCollaborationItem> *collaborationItem;
@property (nonatomic) BOOL isCollaborative;
@property (weak, nonatomic) NSObject<SFCollaborationService> *collaborationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

/* instance methods */
- (long long)_defaultSortGroup;
- (id)activityType;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (id)activityTitle;
- (BOOL)_allowsAutoCancelOnDismiss;
- (BOOL)canPerformWithCollaborationItem:(id)item activityItems:(id)items;
- (BOOL)canPerformWithActivityItems:(id)items;
- (void)prepareWithActivityItems:(id)items;
- (void)performActivity;
@end

#endif /* UICollaborationInviteWithLinkActivity_h */
