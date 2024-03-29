//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKBRTFingerDetection_h
#define _UIKBRTFingerDetection_h
@import Foundation;

#include "_UIKBRTKeyboardTouchObserver.h"
#include "UIView.h"
#include "_UIKBRTFingerDetectionView.h"
#include "_UIKBRTFingerInfo.h"

@class NSMapTable, NSMutableDictionary;

@interface _UIKBRTFingerDetection : _UIKBRTKeyboardTouchObserver

@property (nonatomic) UIView *feedbackParentView;
@property (retain, nonatomic) _UIKBRTFingerDetectionView *feedbackView;
@property (retain, nonatomic) NSMapTable *fingerFeedbackViewMap;
@property (retain, nonatomic) NSMutableDictionary *touches;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeLeftIndex;
@property (retain, nonatomic) _UIKBRTFingerInfo *fakeRightIndex;

/* instance methods */
- (id)init;
- (id)initWithParentView:(id)view;
- (void)dealloc;
- (void)reset;
- (void)updateWithFCenter:(struct CGPoint { double x0; double x1; })fcenter jCenter:(struct CGPoint { double x0; double x1; })center keySize:(struct CGSize { double x0; double x1; })size rowOffsets:(id)offsets homeRowOffsetIndex:(int)index;
- (void)addTouchLocation:(struct CGPoint { double x0; double x1; })location withRadius:(double)radius withTouchTime:(double)time withIdentifier:(id)identifier;
- (void)moveTouchWithIdentifier:(id)identifier toLocation:(struct CGPoint { double x0; double x1; })location withRadius:(double)radius atTouchTime:(double)time;
- (void)removeTouchWithIdentifier:(id)identifier touchCancelled:(BOOL)cancelled;
- (unsigned long long)fingerIdForTouchWithIdentifier:(id)identifier;
- (id)touchIdentifiersForFingerId:(unsigned long long)id;
- (struct CGPoint { double x0; double x1; })touchLocationForFingerId:(unsigned long long)id;
- (id)fingerIdsRelatedToTouchWithIdentifier:(id)identifier sinceTimestamp:(double)timestamp includeThumbs:(BOOL)thumbs;
- (BOOL)_linkTouchesInArray:(id)array withIndexes:(id)indexes opposingHandIndexes:(id)indexes unassignedIndexes:(id)indexes thumb:(id)thumb;
- (void)_updateTouchInfoFromOutsideInWithArray:(id)array indexes:(id)indexes newIdentityDict:(id)dict fakeIndex:(id)index;
- (void)_updateTouchInfoForFingerID:(unsigned long long)id;
- (void)_updateFingerFeedback;
- (void)_updateFingerFeedback:(id)feedback;
@end

#endif /* _UIKBRTFingerDetection_h */
