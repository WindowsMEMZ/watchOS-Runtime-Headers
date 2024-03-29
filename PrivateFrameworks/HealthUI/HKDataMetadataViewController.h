//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKDataMetadataViewController_h
#define HKDataMetadataViewController_h
@import Foundation;

#include "HKTableViewController.h"
#include "HKAdaptiveModalPresented-Protocol.h"
#include "HKDataMetadataReportAccessDelegate-Protocol.h"
#include "HKDataMetadataSubsampleDelegate-Protocol.h"
#include "HKDataMetadataViewControllerDelegate-Protocol.h"
#include "HKDataMetadataWorkoutRouteSection.h"
#include "HKLocationFetcher.h"
#include "HKLocationReadings.h"

@class HKSample, NSArray, NSMutableArray;
@protocol HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider;

@interface HKDataMetadataViewController : HKTableViewController<HKDataMetadataSubsampleDelegate, HKDataMetadataReportAccessDelegate, HKAdaptiveModalPresented>

@property (readonly, nonatomic) NSArray *subSampleTypes;
@property (readonly, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSMutableArray *sections;
@property (retain, nonatomic) HKLocationFetcher *locationFetcher;
@property (retain, nonatomic) HKLocationReadings *locationReadings;
@property (retain, nonatomic) NSObject<HKDataMetadataDeviceSectionRegulatedFeatureInfoProvider> *regulatedFeatureInfoProvider;
@property (retain, nonatomic) HKDataMetadataWorkoutRouteSection *workoutRouteSection;
@property (retain, nonatomic) HKSample *sample;

/* instance methods */
- (id)initWithSample:(id)sample usingInsetStyling:(BOOL)styling profileName:(id)name delegate:(id)delegate;
- (id)initWithSample:(id)sample usingInsetStyling:(BOOL)styling profileName:(id)name regulatedFeatureInfoProvider:(id)provider delegate:(id)delegate;
- (void)dealloc;
- (void)_localeOrDisplayTypeChange:(id)change;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (BOOL)_addSectionIfNonNull:(id)null;
- (void)_loadSections;
- (void)_exportButtonAction:(id)action;
- (void)_fetchSubSampleTypes;
- (void)_updateSubSampleTypes:(id)types error:(id)error;
- (struct CGSize { double x0; double x1; })_adjustedTableViewSize;
- (void)_updateWorkoutRouteSize;
- (void)_addWorkoutRouteSection;
- (void)_fetchWorkoutRouteLocations;
- (void)_fetchRoutesWithSamplesHandler:(id /* block */)handler;
- (void)finishedAggregateQuery;
- (id)defaultPredicateForSampleType:(id)type;
- (id)viewControllerForSampleType:(id)type subSamplePredicate:(id)predicate title:(id)title;
- (id)accessViewControllerForSample:(id)sample healthStore:(id)store;
- (long long)numberOfSectionsInTableView:(id)view;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)viewControllerWillEnterAdaptiveModal;
- (void)viewControllerDidLeaveAdaptiveModal;
@end

#endif /* HKDataMetadataViewController_h */
