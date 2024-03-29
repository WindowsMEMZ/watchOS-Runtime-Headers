//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKTransitItemIncidentCell_h
#define MKTransitItemIncidentCell_h
@import Foundation;

#include "MKCustomSeparatorCell.h"
#include "MKTransitItemIncidentView-Protocol.h"
#include "MKTransitItemIncidentView.h"

@class NSString;

@interface MKTransitItemIncidentCell : MKCustomSeparatorCell<MKTransitItemIncidentView> {
  /* instance variables */
  MKTransitItemIncidentView *_incidentView;
}

@property (nonatomic) long long cellPosition;
@property (nonatomic) BOOL padBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_configureViews;
- (void)setLeadingSeparatorInset:(double)inset;
- (void)setTrailingSeparatorInset:(double)inset;
- (void)setSeparatorHidden:(BOOL)hidden;
- (void)_updateIncidentViewBottomOffset;
- (void)configureWithIncident:(id)incident referenceDate:(id)date shouldShowImage:(BOOL)image inSiri:(BOOL)siri;
- (void)configureWithIncidentMessage:(id)message referenceDate:(id)date shouldShowImage:(BOOL)image inSiri:(BOOL)siri;
- (void)configureWithMessage:(id)message incident:(id)incident referenceDate:(id)date shouldShowImage:(BOOL)image inSiri:(BOOL)siri;
@end

#endif /* MKTransitItemIncidentCell_h */
