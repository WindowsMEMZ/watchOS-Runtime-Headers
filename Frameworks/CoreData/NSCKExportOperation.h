//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSCKExportOperation_h
#define NSCKExportOperation_h
@import Foundation;

#include "NSManagedObject.h"
#include "NSCKExportMetadata.h"

@class NSNumber, NSSet, NSString;

@interface NSCKExportOperation : NSManagedObject

@property (retain, @dynamic, nonatomic) NSNumber *statusNum;
@property (retain, @dynamic, nonatomic) NSString *identifier;
@property (retain, @dynamic, nonatomic) NSCKExportMetadata *exportMetadata;
@property (nonatomic) unsigned long long status;
@property (retain, @dynamic, nonatomic) NSSet *objects;

/* class methods */
+ (id)entityPath;
@end

#endif /* NSCKExportOperation_h */
