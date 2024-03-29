//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKTranscriptTapbackSupplementaryView_h
#define CKTranscriptTapbackSupplementaryView_h
@import Foundation;

#include "CKTranscriptCollectionSupplementaryView.h"
#include "CKAcknowledgmentBalloonView.h"

@interface CKTranscriptTapbackSupplementaryView : CKTranscriptCollectionSupplementaryView

@property (retain, nonatomic) CKAcknowledgmentBalloonView *balloonView;

/* class methods */
+ (id)supplementaryViewKindPrefix;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureForChatItem:(id)item context:(id)context animated:(BOOL)animated animationDuration:(double)duration animationCurve:(long long)curve;
@end

#endif /* CKTranscriptTapbackSupplementaryView_h */
