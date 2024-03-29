//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTableViewSectionController_Protocol_h
#define PKTableViewSectionController_Protocol_h
@import Foundation;

@protocol PKTableViewSectionController <NSObject>

@property (readonly, nonatomic) NSArray *sectionIdentifiers;

/* instance methods */
- (long long)tableView:(id)view numberOfRowsInSectionIdentifier:(id)identifier;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
@optional
/* instance methods */
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (BOOL)shouldHighlightRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (double)tableView:(id)view heightForHeaderInSectionIdentifier:(id)identifier;
- (double)tableView:(id)view heightForFooterInSectionIdentifier:(id)identifier;
- (double)estimatedHeightForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)tableView:(id)view viewForHeaderInSectionIdentifier:(id)identifier;
- (id)tableView:(id)view viewForFooterInSectionIdentifier:(id)identifier;
- (id)titleForHeaderInSectionIdentifier:(id)identifier;
- (id)titleForFooterInSectionIdentifier:(id)identifier;
- (BOOL)tableView:(id)view canEditRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (long long)editingStyleForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)tableView:(id)view leadingSwipeActionsConfigurationForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (BOOL)shouldDrawTopSeparatorForSectionIdentifier:(id)identifier;
- (BOOL)shouldDrawBottomSeparatorForSectionIdentifier:(id)identifier;
@end

#endif /* PKTableViewSectionController_Protocol_h */
