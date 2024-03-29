//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVUpdateGrantedDelegatesTaskGroup_h
#define CalDAVUpdateGrantedDelegatesTaskGroup_h
@import Foundation;

#include "CoreDAVTaskGroup.h"
#include "CalDAVGetGrantedDelegatesTaskGroup.h"
#include "CoreDAVPropPatchTaskDelegate-Protocol.h"
#include "CoreDAVTaskGroupDelegate-Protocol.h"

@class NSSet, NSString;

@interface CalDAVUpdateGrantedDelegatesTaskGroup : CoreDAVTaskGroup<CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>

@property (nonatomic) int state;
@property (retain, nonatomic) NSSet *addWriteURLs;
@property (retain, nonatomic) NSSet *addReadURLs;
@property (retain, nonatomic) NSSet *removeURLs;
@property (retain, nonatomic) NSSet *updatedWriteURLs;
@property (retain, nonatomic) NSSet *updatedReadURLs;
@property (retain, nonatomic) CalDAVGetGrantedDelegatesTaskGroup *getGrantedDelegatesTaskGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountInfoProvider:(id)provider addWriteURLs:(id)urls addReadURLs:(id)urls removeURLs:(id)urls taskManager:(id)manager;
- (void)_finishWithError:(id)error state:(int)state;
- (void)_fetchExistingGrantedDelegates;
- (void)_updateDelegatesWithAllowWrite:(BOOL)write;
- (void)_populateUpdatesFromFetched:(id)fetched allowWrite:(BOOL)write;
- (void)startTaskGroup;
- (void)taskGroup:(id)group didFinishWithError:(id)error;
- (void)propPatchTask:(id)task parsedResponses:(id)responses error:(id)error;
@end

#endif /* CalDAVUpdateGrantedDelegatesTaskGroup_h */
