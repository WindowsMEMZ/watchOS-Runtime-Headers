//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 149.1.0.0.0
//
#ifndef AXAuditNode_h
#define AXAuditNode_h
@import Foundation;

#include "AXAuditElement.h"

@class NSArray, NSString;

@interface AXAuditNode : NSObject

@property (retain, nonatomic) AXAuditElement *auditElement;
@property (retain, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *humanReadableDescription;
@property (copy, nonatomic) NSString *humanReadableRoleDescription;
@property (copy, nonatomic) NSString *className;
@property (nonatomic) BOOL isIgnored;

/* class methods */
+ (void)registerTransportableObjectWithManager:(id)manager;

/* instance methods */
- (id)initWithAuditElement:(id)element description:(id)description roleDescription:(id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)debugPrintDescendants;
- (void)_printDescendantsWithLevel:(unsigned long long)level;
- (id)description;
@end

#endif /* AXAuditNode_h */
