//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPMediaLibraryEntityChange_h
#define _MPMediaLibraryEntityChange_h
@import Foundation;

#include "MPMediaEntity.h"

@class NSString;

@interface _MPMediaLibraryEntityChange : NSObject

@property (readonly, nonatomic) MPMediaEntity *entity;
@property (readonly, copy, nonatomic) NSString *anchor;
@property (readonly, nonatomic) long long deletionType;

/* instance methods */
- (id)initWithEntity:(id)entity anchor:(id)anchor deletionType:(long long)type;
@end

#endif /* _MPMediaLibraryEntityChange_h */
