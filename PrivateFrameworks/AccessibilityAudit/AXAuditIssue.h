//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditIssue_h
#define AXAuditIssue_h
@import Foundation;

#include "AXAuditElement.h"
#include "AXAuditIssueDescriptionManager.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AXAuditIssue : NSObject<NSCopying>

@property (nonatomic) long long issueClassification;
@property (retain, nonatomic) AXAuditIssueDescriptionManager *descManager;
@property (retain, nonatomic) NSString *auditTestType;
@property (retain, nonatomic) AXAuditElement *auditElement;
@property (retain, nonatomic) NSString *elementDescription;
@property (retain, nonatomic) NSArray *longDescExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } elementRect;
@property (nonatomic) struct CGPoint { double x0; double x1; } containerOrigin;
@property (retain, nonatomic) NSString *elementText;
@property (retain, nonatomic) NSString *mlGeneratedDescription;
@property (nonatomic) BOOL isDuplicate;
@property (retain, nonatomic) NSString *screenGroupId;
@property (retain, nonatomic) NSString *foregroundColor;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *timeStamp;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSArray *suggestedSelectorsToFix;
@property (retain, nonatomic) NSNumber *imageIdentifier;

/* class methods */
+ (Class)_auditIssueClassForType:(long long)type;
+ (id)auditIssueForClassification:(long long)classification;
+ (void)registerTransportableObjectWithManager:(id)manager;

/* instance methods */
- (id)init;
- (long long)_platformForClassification:(long long)classification;
- (id)foundLogMessage;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)_isSameRelativeLocationAsAuditIssue:(id)issue;
- (unsigned long long)hash;
- (long long)compare:(id)compare;
- (id)description;
@end

#endif /* AXAuditIssue_h */
