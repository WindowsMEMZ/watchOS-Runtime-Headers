//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKSendAnimationContext_h
#define CKSendAnimationContext_h
@import Foundation;

#include "CKSendAnimationContext-Protocol.h"

@class CABackdropLayer, NSArray, NSString, UIView;

@interface CKSendAnimationContext : NSObject<CKSendAnimationContext>

@property (copy, nonatomic) NSArray *animatableViews;
@property (copy, nonatomic) NSArray *animatableTextViews;
@property (copy, nonatomic) NSArray *throwBalloonViews;
@property (copy, nonatomic) NSArray *framesOfAddedChatItems;
@property (copy, nonatomic) NSArray *throwBalloonViewAttributesCollection;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSString *impactIdentifier;
@property (nonatomic) BOOL shouldRepeat;
@property (nonatomic) BOOL isSender;
@property (nonatomic) BOOL beginAnimationFromTranscriptPresentedState;
@property (retain, nonatomic) NSArray *messages;
@property (retain, nonatomic) CABackdropLayer *backdropLayer;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } quickReplySourceRect;
@property (readonly, nonatomic) BOOL shouldUseQuickReplySourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* CKSendAnimationContext_h */
