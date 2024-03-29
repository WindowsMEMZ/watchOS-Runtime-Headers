//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef _SiriCoreSQLiteIndexInfo_h
#define _SiriCoreSQLiteIndexInfo_h
@import Foundation;

#include "SiriCoreSQLiteIndex-Protocol.h"

@class NSArray, NSString;

@interface _SiriCoreSQLiteIndexInfo : NSObject<SiriCoreSQLiteIndex>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name columns:(id)columns;
@end

#endif /* _SiriCoreSQLiteIndexInfo_h */
