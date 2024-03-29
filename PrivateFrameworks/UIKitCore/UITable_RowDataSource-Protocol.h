//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITable_RowDataSource_Protocol_h
#define UITable_RowDataSource_Protocol_h
@import Foundation;

@protocol UITable_RowDataSource <UITable>

@property (readonly, nonatomic) NSObject<UITableConstants> *constants;
@property (readonly, nonatomic) double headerFooterLeadingMarginWidth;
@property (readonly, nonatomic) double headerFooterTrailingMarginWidth;
@property (readonly, nonatomic) double defaultSectionHeaderHeight;
@property (readonly, nonatomic) double defaultSectionFooterHeight;
@property (readonly, nonatomic) double sidePadding;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } _contentInset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } tableContentInset;
@property (readonly, nonatomic) double paddingAboveFirstSectionHeader;
@property (readonly, nonatomic) double paddingAboveSectionHeaders;
@property (readonly, nonatomic) double sectionHeaderToFirstRowPadding;
@property (readonly, nonatomic) double sectionFooterToLastRowPadding;
@property (readonly, nonatomic) long long headerFooterPinningBehavior;
@property (readonly, nonatomic) double rowSpacing;
@property (readonly, nonatomic) BOOL isTableHeaderAutohiding;
@property (readonly, nonatomic) double heightForTableHeader;
@property (readonly, nonatomic) double heightForTableFooter;
@property (readonly, nonatomic) BOOL providesRowHeights;
@property (readonly, nonatomic) BOOL estimatesHeights;
@property (readonly, nonatomic) BOOL estimatesRowHeights;
@property (readonly, nonatomic) BOOL estimatesSectionHeaderHeights;
@property (readonly, nonatomic) BOOL estimatesSectionFooterHeights;
@property (readonly, nonatomic) UIView *tableHeaderView;
@property (readonly, nonatomic) UIView *tableFooterView;
@property (readonly, nonatomic) BOOL shouldUseSearchBarHeaderBehavior;
@property (readonly, nonatomic) BOOL shouldUseNewHeaderFooterBehavior;

/* instance methods */
- (double)_heightForRowAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_sizeForHeaderInSection:(long long)section;
- (double)_heightForFooterInSection:(long long)section;
- (double)_estimatedHeightForRowAtIndexPath:(id)path;
- (double)_estimatedHeightForHeaderInSection:(long long)section;
- (double)_estimatedHeightForFooterInSection:(long long)section;
- (double)_dataSourceHeightForRowAtIndexPath:(id)path;
- (double)_dataSourceHeightForHeaderInSection:(long long)section;
- (double)_dataSourceHeightForFooterInSection:(long long)section;
- (void)_prepareForRowDataHeaderFooterSizing;
- (void)_coalesceContentSizeUpdateWithDelta:(double)delta;
- (void)_applyContentSizeDeltaImmediately:(double)immediately;
- (id)_titleForHeaderInSection:(long long)section;
- (id)_titleForFooterInSection:(long long)section;
- (id)_detailTextForHeaderInSection:(long long)section;
- (long long)_titleAlignmentForHeaderInSection:(long long)section;
- (long long)_titleAlignmentForFooterInSection:(long long)section;
- (double)_maxTitleWidthForHeaderInSection:(long long)section;
- (double)_maxTitleWidthForFooterInSection:(long long)section;
- (BOOL)_shouldStripHeaderTopPaddingForSection:(long long)section;
- (void)_setHeight:(double)height forRowAtIndexPath:(id)path usingPresentationValues:(BOOL)values;
- (id)_constants;
- (double)_headerFooterLeadingMarginWidth;
- (double)_headerFooterTrailingMarginWidth;
- (double)_defaultSectionHeaderHeight;
- (double)_defaultSectionFooterHeight;
- (double)_sidePadding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tableContentInset;
- (double)_paddingAboveFirstSectionHeader;
- (double)_paddingAboveSectionHeaders;
- (double)_sectionHeaderToFirstRowPadding;
- (double)_sectionFooterToLastRowPadding;
- (long long)_headerFooterPinningBehavior;
- (double)_rowSpacing;
- (BOOL)_isTableHeaderAutohiding;
- (double)_heightForTableHeader;
- (double)_heightForTableFooter;
- (BOOL)_providesRowHeights;
- (BOOL)_estimatesHeights;
- (BOOL)_estimatesRowHeights;
- (BOOL)_estimatesSectionHeaderHeights;
- (BOOL)_estimatesSectionFooterHeights;
- (id)_tableHeaderView;
- (id)_tableFooterView;
- (BOOL)_shouldUseSearchBarHeaderBehavior;
- (BOOL)_shouldUseNewHeaderFooterBehavior;
@optional
/* instance methods */
- (void)_configureTableHeaderFooterView:(id)view forHeader:(BOOL)header section:(long long)section floating:(BOOL)floating withTitle:(id)title detailText:(id)text textAlignment:(long long)alignment fromClient:(BOOL)client;
@end

#endif /* UITable_RowDataSource_Protocol_h */
