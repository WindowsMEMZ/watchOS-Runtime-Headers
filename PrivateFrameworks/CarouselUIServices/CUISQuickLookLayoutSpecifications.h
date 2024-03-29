//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISQuickLookLayoutSpecifications_h
#define CUISQuickLookLayoutSpecifications_h
@import Foundation;

@class UIFont;

@interface CUISQuickLookLayoutSpecifications : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic) struct CGSize { double x0; double x1; } iconBadgeSize;
@property (nonatomic) double iconBadgeRatio;
@property (nonatomic) double iconCenterY;
@property (nonatomic) double titleTrailingOffset;
@property (nonatomic) double titleTopAnchorFromIcon;
@property (nonatomic) double subtitleBaselineOffset;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;

/* class methods */
+ (id)currentSpecifications;
+ (double)quickLookIconSizeForDisplayVariant:(long long)variant;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })iconSizeForVariant:(long long)variant;
- (double)iconCenterYForVariant:(long long)variant;
- (double)titleTrailingOffsetForVariant:(long long)variant;
- (double)titleTopAnchorFromIconForVariant:(long long)variant;
- (id)titleFontForVariant:(long long)variant;
- (id)subtitleFontForVariant:(long long)variant;
@end

#endif /* CUISQuickLookLayoutSpecifications_h */
