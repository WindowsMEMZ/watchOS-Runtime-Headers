//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKSingleDayTimelineLayout_h
#define CUIKSingleDayTimelineLayout_h
@import Foundation;

@class NSArray, NSCalendar, NSDate, NSMutableArray;
@protocol CUIKSingleDayTimelineGeometryDelegate, CUIKSingleDayTimelineLayoutScreenUtils, CUIKSingleDayTimelineViewItem;

@interface CUIKSingleDayTimelineLayout : NSObject {
  /* instance variables */
  NSArray *_occurrences;
  unsigned long long _currentOccurrenceIndex;
  NSObject<CUIKSingleDayTimelineViewItem> *_currentOccurrence;
  NSMutableArray *_partitions;
  NSMutableArray *_occurrenceBuckets;
  NSMutableArray *_collidingOccurrences;
  NSDate *_startOfDay;
  NSDate *_endOfDay;
  double _startOfDayAbsoluteTime;
  double _endOfDayAbsoluteTime;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
  NSCalendar *_calendar;
  NSObject<CUIKSingleDayTimelineGeometryDelegate> *_geometryDelegate;
  NSObject<CUIKSingleDayTimelineLayoutScreenUtils> *_screenUtilsDelegate;
}

/* instance methods */
- (id)initWithOccurrences:(id)occurrences startOfDay:(id)day endOfDay:(id)day geometryDelegate:(id)delegate screenUtilsDelegate:(id)delegate calendar:(id)calendar;
- (void)applyLayoutToOccurrences;
- (void)applyLayoutToOccurrencesInResize:(BOOL)resize;
- (BOOL)isRightToLeftLayout;
- (void)_calculateVerticalFrameAspectsForOccurrence:(id)occurrence;
- (void)_popOccurrencesInPartition:(id)partition endingBeforeTime:(double)time;
- (void)_generateNewPartitions;
- (void)_mergePartitions;
- (double)_topOfOccurrence:(id)occurrence;
- (double)_endOfCollisionZoneForY:(double)y occurrence:(id)occurrence;
- (void)_findCollidingOccurrences;
- (void)_putCollidingOccurrencesIntoBucketsInResize:(BOOL)resize;
- (void)_reclaimSpaceFromStackedOccurrences;
- (void)_stampOccurrenceFrames;
- (void)_initializeFirstGridStripe;
- (BOOL)_inputIsInvalid;
- (void)_capVisibleTextForBucket:(id)bucket;
- (double)_adjustedStartTimeForOccurrence:(id)occurrence;
- (double)_adjustedEndTimeForOccurrence:(id)occurrence;
- (double)_effectiveEndTimeForOccurrence:(id)occurrence;
- (double)_combinedWidthOfPartitions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForStartSeconds:(long long)seconds endSeconds:(long long)seconds;
@end

#endif /* CUIKSingleDayTimelineLayout_h */
