//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIRightClickEmptySpaceInteraction_h
#define EKUIRightClickEmptySpaceInteraction_h
@import Foundation;

#include "EKUIRightClickEmptySpaceInteractionDelegate-Protocol.h"
#include "UIInteraction-Protocol.h"

@class NSString, UIView;

@interface EKUIRightClickEmptySpaceInteraction : NSObject<UIInteraction>

@property (retain, nonatomic) NSObject<UIInteraction> *interaction;
@property (weak, nonatomic) NSObject<EKUIRightClickEmptySpaceInteractionDelegate> *delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)localizedPasteStringForEventCount:(unsigned long long)count includeHere:(BOOL)here;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)didMoveToView:(id)view;
- (void)willMoveToView:(id)view;
@end

#endif /* EKUIRightClickEmptySpaceInteraction_h */
