//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPrivacyReportViewController_h
#define SFPrivacyReportViewController_h
@import Foundation;

#include "UIViewController.h"
#include "SFPrivacyReportDetailToggleTableViewCellDelegate-Protocol.h"
#include "SFPrivacyReportExplanationTableViewCellDelegate-Protocol.h"
#include "SFPrivacyReportGridViewDelegate-Protocol.h"
#include "SFTableViewDiffableDataSourceDelegate-Protocol.h"
#include "UITableViewDelegatePrivate-Protocol.h"

@class NSString, SFTableViewDiffableDataSource, UITableView, WBSPrivacyReportData, WKWebView;

@interface SFPrivacyReportViewController : UIViewController<UITableViewDelegatePrivate, SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate> {
  /* instance variables */
  UITableView *_tableView;
  BOOL _showExplanationDetailView;
  WBSPrivacyReportData *_privacyReportData;
  SFTableViewDiffableDataSource *_diffableDataSource;
  BOOL _needsRowHeightUpdate;
  long long _listDetailType;
  double _maxCountForDetailList;
  BOOL _showingCurrentWebsite;
  BOOL _usesInsetStyle;
  WKWebView *_webView;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL websiteDetailShouldSeparateBlockedTrackers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithDomain:(id)domain;
- (id)initWithWebView:(id)view;
- (void)viewDidLoad;
- (void)_createTableViewIfNeededLoadingReport:(BOOL)report;
- (void)_updateUsesInsetStyle;
- (void)_updateLayoutMargins;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)_reloadDataLoadingReport:(BOOL)report;
- (void)_doneBarButtonItemAction:(id)action;
- (long long)_sectionTypeFromSectionIndex:(long long)index;
- (id)_cellForRowWithIndexPath:(id)path itemIdentifier:(id)identifier;
- (void)cellDidToggleDetailType:(id)type;
- (void)cellDidToggleExpandDetailedExplanation:(id)explanation;
- (void)gridViewDidUpdateContentSize:(id)size;
- (void)setNeedsUpdateRowHeight;
- (id)dataSource:(id)source headerTextForSection:(long long)section;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(long long)section;
- (BOOL)tableView:(id)view shouldDrawBottomSeparatorForSection:(long long)section;
- (long long)tableView:(id)view editingStyleForRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (BOOL)tableView:(id)view canFocusRowAtIndexPath:(id)path;
@end

#endif /* SFPrivacyReportViewController_h */
