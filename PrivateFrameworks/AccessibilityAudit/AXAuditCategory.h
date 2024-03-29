//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditCategory_h
#define AXAuditCategory_h
@import Foundation;

#include "AXAuditCaseResult.h"
#include "AXAuditCategoryDelegate-Protocol.h"
#include "AXAuditCategoryResult.h"

@class NSArray, NSMutableArray, NSSet, NSString;

@interface AXAuditCategory : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AXAuditCaseResult *currentCaseResult;
@property (retain, nonatomic) NSArray *caseSelectorsForAuditing;
@property (retain, nonatomic) NSMutableArray *_currentTestingCaseSelectors;
@property (retain, nonatomic) AXAuditCategoryResult *_result;
@property (weak, nonatomic) NSObject<AXAuditCategoryDelegate> *delegate;
@property (nonatomic) int targetPid;
@property (nonatomic) unsigned long long categoryType;
@property (readonly, nonatomic) NSSet *allSupportedAuditTypes;
@property (retain, nonatomic) NSSet *currentAuditTypesToTestFor;
@property (retain, nonatomic) NSString *lastCaseSelectorFinishedName;

/* instance methods */
- (id)init;
- (BOOL)localIssueShouldRun:(id)run;
- (BOOL)shouldRunAuditTestType:(id)type;
- (BOOL)supportsAuditTestType:(id)type;
- (id)_availableCasesDescription;
- (id)description;
- (id)result;
- (BOOL)supportAuditGroup:(unsigned long long)group;
- (void)run;
- (void)start;
- (void)stop;
- (id)caseStartedForSelectorName:(id)name;
- (void)caseEndedForSelectorName:(id)name result:(id)result;
- (void)addIssueWithClassification:(long long)classification auditElement:(id)element;
- (void)addIssueWithClassification:(long long)classification auditElement:(id)element elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect elementDescription:(id)description;
- (void)addIssueWithClassification:(long long)classification auditElement:(id)element elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect elementDescription:(id)description mlGeneratedDescription:(id)description;
- (BOOL)_isAppleInternalBuild;
- (void)addIssueWithClassification:(long long)classification auditElement:(id)element elementRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect elementDescription:(id)description mlGeneratedDescription:(id)description longDescExtraInfo:(id)info elementText:(id)text;
@end

#endif /* AXAuditCategory_h */
