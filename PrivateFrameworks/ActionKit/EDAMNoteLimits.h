//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNoteLimits_h
#define EDAMNoteLimits_h
@import Foundation;

#include "FATObject.h"

@class NSNumber;

@interface EDAMNoteLimits : FATObject

@property (retain, nonatomic) NSNumber *noteResourceCountMax;
@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *resourceSizeMax;
@property (retain, nonatomic) NSNumber *noteSizeMax;
@property (retain, nonatomic) NSNumber *uploaded;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNoteLimits_h */
