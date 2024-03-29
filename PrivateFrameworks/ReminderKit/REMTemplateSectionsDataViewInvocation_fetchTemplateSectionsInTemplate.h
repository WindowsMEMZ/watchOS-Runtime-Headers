//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMTemplateSectionsDataViewInvocation_fetchTemplateSectionsInTemplate_h
#define REMTemplateSectionsDataViewInvocation_fetchTemplateSectionsInTemplate_h
@import Foundation;

#include "REMStoreInvocation.h"
#include "NSSecureCoding-Protocol.h"
#include "REMObjectID.h"

@interface REMTemplateSectionsDataViewInvocation_fetchTemplateSectionsInTemplate : REMStoreInvocation<NSSecureCoding>

@property (readonly, nonatomic) REMObjectID *templateObjectID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParentTemplateObjectID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* REMTemplateSectionsDataViewInvocation_fetchTemplateSectionsInTemplate_h */
