//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef FCIssueReadingHistoryType_Protocol_h
#define FCIssueReadingHistoryType_Protocol_h
@import Foundation;

@protocol FCIssueReadingHistoryType 

@property (readonly, nonatomic) NSString *mostRecentlyVisitedIssueID;
@property (readonly, nonatomic) NSArray *recentlyVisitedIssueIDs;
@property (readonly, nonatomic) NSArray *recentlyEngagedIssueIDs;
@property (readonly, nonatomic) NSArray *allEngagedIssueIDs;

/* instance methods */
- (void)markIssueWithID:(id)id asVisitedWithBookmark:(id)bookmark;
- (void)markIssueAsBadgedWithID:(id)id;
- (void)markIssueAsEngagedWithID:(id)id;
- (void)markIssueAsSeenWithID:(id)id;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)id;
- (BOOL)hasIssueWithIDBeenVisited:(id)visited;
- (BOOL)hasIssueWithIDBeenBadged:(id)badged;
- (BOOL)hasIssueWithIDBeenEngaged:(id)engaged;
- (BOOL)hasIssueWithIDBeenSeen:(id)seen;
- (id)bookmarkForLastVisitToIssueWithID:(id)id;
- (id)lastVisitedDateForIssueWithID:(id)id;
- (id)lastEngagedDateForIssueWithID:(id)id;
- (id)lastSeenDateForIssueWithID:(id)id;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)id;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)prepareForUseWithCompletion:(id /* block */)completion;
@end

#endif /* FCIssueReadingHistoryType_Protocol_h */
