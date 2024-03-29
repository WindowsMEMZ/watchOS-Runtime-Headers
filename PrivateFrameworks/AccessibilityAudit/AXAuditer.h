//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditer_h
#define AXAuditer_h
@import Foundation;

#include "AXAuditCategoryDelegate-Protocol.h"
#include "AXAuditCategoryResultDelegate-Protocol.h"
#include "AXAuditerDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXAuditer : NSObject<AXAuditCategoryResultDelegate, AXAuditCategoryDelegate>

@property (retain, nonatomic) NSArray *_auditCategories;
@property (retain, nonatomic) NSMutableArray *_results;
@property (retain, nonatomic) NSArray *_currentTypesToAuditFor;
@property (weak, nonatomic) NSObject<AXAuditerDelegate> *delegate;
@property (nonatomic) int targetPid;
@property (nonatomic) unsigned long long categoryType;
@property (retain, nonatomic) NSMutableArray *currentRunningCategories;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *auditQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)init;
- (void)_initializeAuditCategories;
- (id)_allCategoriesDescription;
- (id)_auditCategoryForClass:(Class)class;
- (id)allSupportedAuditTypes;
- (void)_clearCurrentRunningCategories;
- (void)startWithAuditTypes:(id)types;
- (void)runCategories:(id)categories;
- (void)_runCategories:(id)categories;
- (void)didCompleteCategory:(id)category;
- (void)auditCategoryResult:(id)result didAppendLogWithMessage:(id)message;
- (void)auditCategory:(id)category didEncounterIssue:(id)issue;
- (id)detectionResultsFromImageData:(id)data;
- (id)_currentTime;
@end

#endif /* AXAuditer_h */
