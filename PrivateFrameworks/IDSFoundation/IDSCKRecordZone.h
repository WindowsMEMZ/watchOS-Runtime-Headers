//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCKRecordZone_h
#define IDSCKRecordZone_h
@import Foundation;

#include "IDSCKRecordZoneID.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface IDSCKRecordZone : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) IDSCKRecordZoneID *zoneID;

/* class methods */
+ (Class)__class;
+ (id)alloc;

/* instance methods */
@end

#endif /* IDSCKRecordZone_h */
