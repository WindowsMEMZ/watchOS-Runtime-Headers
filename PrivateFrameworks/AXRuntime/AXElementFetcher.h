//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXElementFetcher_h
#define AXElementFetcher_h
@import Foundation;

#include "AXElement.h"
#include "AXElementGroup.h"
#include "AXElementGroupPruner.h"
#include "AXVisualElementGrouper.h"

@class NSArray, NSMapTable, NSMutableDictionary;
@protocol AXElementFetcherDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AXElementFetcher : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_elementFetchQueue;
  NSObject<OS_dispatch_queue> *_elementAccessQueue;
  NSObject<OS_dispatch_queue> *_filterAccessQueue;
  struct __AXObserver * _axRuntimeNotificationObserver;
  unsigned long long _scheduledFetchEvent;
  NSObject<OS_dispatch_source> *_eventCoalesceTimer;
}

@property (weak, nonatomic) NSObject<AXElementFetcherDelegate> *delegate;
@property (retain, nonatomic) NSMapTable *fetchObservers;
@property (nonatomic) unsigned long long activeFetchEvents;
@property (nonatomic) BOOL fetchingElements;
@property (retain, nonatomic) NSArray *currentApps;
@property (nonatomic) BOOL eventManagementEnabled;
@property (retain, nonatomic) NSArray *elementCache;
@property (retain, nonatomic) AXElementGroup *elementCommunityGroupCache;
@property (retain, nonatomic) AXElementGroup *rootGroupCache;
@property (retain, nonatomic) AXElementGroup *keyboardGroupCache;
@property (retain, nonatomic) NSMutableDictionary *postFetchFilters;
@property (retain, nonatomic) AXVisualElementGrouper *visualElementGrouper;
@property (readonly, nonatomic) AXElementGroupPruner *elementGroupPruner;
@property (nonatomic) BOOL didSendFakeScreenChangeOnLastFetch;
@property (retain, nonatomic) NSArray *customCurrentApps;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL willFetchElements;
@property (readonly, nonatomic) NSArray *availableElements;
@property (readonly, nonatomic) AXElement *nativeFocusElement;
@property (nonatomic) BOOL shouldIncludeNonScannerElements;
@property (nonatomic) BOOL groupingEnabled;
@property (nonatomic) long long elementGroupingHeuristics;
@property (readonly, nonatomic) AXElementGroup *rootGroup;
@property (readonly, nonatomic) AXElementGroup *keyboardGroup;
@property (readonly, nonatomic) AXElementGroup *firstKeyboardRow;
@property (readonly, nonatomic) AXElementGroup *lastKeyboardRow;
@property (readonly, nonatomic) AXElementGroup *elementCommunityGroup;

/* class methods */
+ (id)systemWideElement;
+ (id)springBoardElement;

/* instance methods */
- (id)initWithDelegate:(id)delegate fetchEvents:(unsigned long long)events enableEventManagement:(BOOL)management enableGrouping:(BOOL)grouping shouldIncludeNonScannerElements:(BOOL)elements beginEnabled:(BOOL)enabled;
- (void)dealloc;
- (id)description;
- (void)_setCurrentApplications:(id)applications;
- (id)inCallServiceApplication;
- (BOOL)_updateCurrentApps;
- (void)registerFetchObserver:(id)observer targetQueue:(id)queue;
- (void)unregisterFetchObserver:(id)observer;
- (void)unregisterAllFetchObservers;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)event;
- (void)_notifyObserversNativeFocusElementDidChange:(id)change;
- (void)_notifyObserversUpdateElementVisuals:(id)visuals;
- (void)_notifyObserversApplicationWasActivated:(id)activated;
- (void)_notifyObserversScreenWillChange:(struct __CFData *)change;
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)begin;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)event foundNewElements:(BOOL)elements;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)event;
- (void)addFetchEvents:(unsigned long long)events;
- (void)removeFetchEvents:(unsigned long long)events;
- (void)refresh;
- (void)fetchEventOccurred:(unsigned long long)occurred;
- (void)_fetchEventOccurred:(unsigned long long)occurred;
- (void)_handleNativeFocusItemDidChange:(struct __CFData *)change;
- (void)_handleUpdateElementVisuals:(struct __CFData *)visuals;
- (void)_handleApplicationWasActivated:(id)activated;
- (void)_handleScreenWillChange:(struct __CFData *)change;
- (void)_handleMediaDidBegin:(struct __CFData *)begin;
- (void)_tearDownEventCoalesceTimer;
- (void)_scheduleFetchEvent:(unsigned long long)event;
- (double)_delayForFetchEvent:(unsigned long long)event;
- (long long)_priorityForFetchEvent:(unsigned long long)event;
- (BOOL)_fetchEventCanBeManaged:(unsigned long long)managed;
- (id)_axNotificationsForManagedEvents;
- (void)enableEventManagement;
- (void)disableEventManagement;
- (BOOL)_shouldConsiderCacheAsInvalid;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)groups orElements:(id)elements appsDidChange:(BOOL)change;
- (BOOL)_fetchElements:(BOOL)elements;
- (id)_fetchUnprocessedElements:(id)elements;
- (void)addPostFetchFilter:(id /* block */)filter withIdentifier:(id)identifier;
- (void)removePostFetchFilterWithIdentifier:(id)identifier;
- (void)removeAllPostFetchFilters;
- (id)_filterElements:(id)elements withFilter:(id /* block */)filter;
- (id)findElementMatchingElement:(id)element;
- (id)findElementMatchingBlock:(id /* block */)block;
- (id)findElementsMatchingBlock:(id /* block */)block;
- (id)_findElementsMatchingBlock:(id /* block */)block internalRequest:(BOOL)request;
- (id)closestElementToElement:(id)element;
- (id)closestElementToPoint:(struct CGPoint { double x0; double x1; })point;
- (id)firstElement;
- (id)lastElement;
- (id)nextSiblingOfElement:(id)element didWrap:(BOOL *)wrap;
- (id)previousSiblingOfElement:(id)element didWrap:(BOOL *)wrap;
- (id)_siblingOfGroupable:(id)groupable forDirection:(BOOL)direction didWrap:(BOOL *)wrap;
- (id)nextSiblingOfGroupable:(id)groupable didWrap:(BOOL *)wrap;
- (id)previousSiblingOfGroupable:(id)groupable didWrap:(BOOL *)wrap;
- (id)_findGroupableMatchingGroupable:(id)groupable inElementGroup:(id)group;
- (id)findGroupableMatchingGroupable:(id)groupable;
- (id)_findGroupableMatchingBlock:(id /* block */)block inElementGroup:(id)group;
- (id)findGroupableMatchingBlock:(id /* block */)block;
- (id)_groupWithDictionary:(id)dictionary currentPid:(int)pid;
- (id)_groupWithItems:(id)items groupTraits:(unsigned long long)traits scanningBehaviorTraits:(unsigned long long)traits label:(id)label identifier:(id)identifier currentPid:(int)pid;
- (id)_filterGroup:(id)group withFilter:(id /* block */)filter;
- (id)_processAppGroup:(id)group keyboardGroup:(id *)group;
- (id)_fetchUnprocessedAppGroups;
- (BOOL)_fetchGroups:(BOOL)groups;
- (void)clearCache;
- (id)_debugStringForFetchEvents:(unsigned long long)events;
- (void)_debugLogElementCache;
- (BOOL)isEnabled;
- (BOOL)isFetchingElements;
- (BOOL)isEventManagementEnabled;
- (BOOL)isGroupingEnabled;
@end

#endif /* AXElementFetcher_h */
