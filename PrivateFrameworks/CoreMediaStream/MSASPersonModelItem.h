//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef MSASPersonModelItem_h
#define MSASPersonModelItem_h
@import Foundation;

#include "MSASAlbum.h"
#include "NSCopying-Protocol.h"
#include "NSObject-Protocol.h"

@class NSString;

@interface MSASPersonModelItem : NSObject<NSCopying>

@property (nonatomic) int errorCount;
@property (retain, nonatomic) MSASAlbum *album;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSObject<NSObject> *object;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MSASPersonModelItem_h */
