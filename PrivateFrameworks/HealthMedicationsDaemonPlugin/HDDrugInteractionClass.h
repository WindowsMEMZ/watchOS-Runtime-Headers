//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDrugInteractionClass_h
#define HDDrugInteractionClass_h
@import Foundation;

#include "HKDrugInteractionClass.h"

@class NSArray;

@interface HDDrugInteractionClass : HKDrugInteractionClass

@property (readonly, copy, nonatomic) NSArray *relationships;

/* instance methods */
- (id)init;
- (id)initWithName:(id)name relationships:(id)relationships ancestorIdentifier:(id)identifier ontologyIdentifier:(id)identifier validRegionCodes:(id)codes;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
@end

#endif /* HDDrugInteractionClass_h */
