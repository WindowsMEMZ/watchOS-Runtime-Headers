//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMResource_h
#define EDAMResource_h
@import Foundation;

#include "FATObject.h"
#include "EDAMData.h"
#include "EDAMResourceAttributes.h"

@class NSNumber, NSString;

@interface EDAMResource : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *noteGuid;
@property (retain, nonatomic) EDAMData *data;
@property (retain, nonatomic) NSString *mime;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) EDAMData *recognition;
@property (retain, nonatomic) EDAMResourceAttributes *attributes;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) EDAMData *alternateData;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMResource_h */
