//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKEventDetailTitleCell_h
#define EKEventDetailTitleCell_h
@import Foundation;

#include "EKEventDetailCell.h"
#include "ConferenceCellDelegate-Protocol.h"
#include "EKEventDetailConferenceCell.h"
#include "EKEventDetailSuggestedLocationCell.h"
#include "EKEventDetailSuggestedLocationCellDelegate-Protocol.h"
#include "EKEventDetailTitleCellDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface EKEventDetailTitleCell : EKEventDetailCell<UITextViewDelegate, EKEventDetailSuggestedLocationCellDelegate, ConferenceCellDelegate> {
  /* instance variables */
  UILabel *_titleView;
  NSMutableArray *_locationItems;
  BOOL _showAllLocation;
  struct _NSRange { unsigned long long location; unsigned long long length; } _showLocationRange;
  EKEventDetailSuggestedLocationCell *_suggestedLocationCell;
  EKEventDetailConferenceCell *_conferenceDetailView;
  UILabel *_travelTimeView;
  NSMutableArray *_dateTimeViews;
  UILabel *_recurrenceView;
  UILabel *_statusView;
  UIButton *_editButton;
  unsigned int _visibleItems;
  BOOL _observingLocaleChanges;
  BOOL _hideTopCellSeparator;
  BOOL _hideBottomCellSeparator;
  int _lastPosition;
}

@property (weak, nonatomic) NSObject<EKEventDetailTitleCellDelegate> *delegate;
@property (nonatomic) BOOL hasMapItemLaunchOptionFromTimeToLeaveNotification;
@property (nonatomic) BOOL showingInlineDayView;
@property (nonatomic) unsigned long long numberOfTitleLines;
@property (readonly, nonatomic) UIView *sourceViewForPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_registerForInvalidation;
+ (void)_invalidateCachedFonts;
+ (id)_titleFont;
+ (id)_largeTitleFont;
+ (id)_locationFont;

/* instance methods */
- (void)dealloc;
- (id)initWithEvent:(id)event editable:(BOOL)editable style:(long long)style;
- (void)layoutMarginsDidChange;
- (void)contentSizeCategoryChanged:(id)changed;
- (BOOL)_useLargeFonts;
- (void)setTitle:(id)title;
- (void)_setDateTimeString:(id)string line:(unsigned long long)line;
- (void)setTravelTimeString:(id)string;
- (void)setRecurrenceString:(id)string;
- (void)setStatusString:(id)string;
- (void)setColor:(id)color;
- (void)setPrimaryTextColor:(id)color;
- (void)setLocation:(id)location;
- (void)addLocation:(id)location;
- (BOOL)update;
- (BOOL)_shouldShowConferenceCell;
- (void)editButtonTapped;
- (void)setHideTopCellSeparator:(BOOL)separator;
- (void)setHideBottomCellSeparator:(BOOL)separator;
- (void)_updateSeparatorStyle;
- (id)_titleView;
- (void)handleTapOnLabel:(id)label;
- (id)_dateTimeViewForLine:(unsigned long long)line;
- (id)_travelTimeView;
- (id)_recurrenceView;
- (id)_statusView;
- (id)_editButton;
- (id)_suggestedLocationCell;
- (id)_conferenceDetailView;
- (double)titleHeight;
- (void)layoutSubviews;
- (double)_layoutForWidth:(double)width;
- (void)layoutForWidth:(double)width position:(int)position;
- (void)_promptForSpanWithSourceView:(id)view completionBlock:(id /* block */)block;
- (void)didTapAddSuggestedLocationCell:(id)cell disambiguatedLocation:(id)location;
- (void)didTapDismissSuggestedLocationCell:(id)cell;
- (void)_saveEventWithSpan:(long long)span;
- (id)owningViewController;
- (void)conferenceCellUpdated:(id)updated;
- (BOOL)conferenceCellShouldPresentShareSheet:(id)sheet;
- (void)conferenceCell:(id)cell requestPresentShareSheetWithActivityItems:(id)items withPopoverSourceView:(id)view;
@end

#endif /* EKEventDetailTitleCell_h */
