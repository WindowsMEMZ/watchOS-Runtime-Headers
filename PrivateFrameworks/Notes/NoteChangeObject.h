//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef NoteChangeObject_h
#define NoteChangeObject_h
@import Foundation;

#include "NSManagedObject.h"
#include "NoteStoreObject.h"

@class NSMutableSet, NSNumber;

@interface NoteChangeObject : NSManagedObject

@property (retain, @dynamic, nonatomic) NoteStoreObject *store;
@property (retain, @dynamic, nonatomic) NSNumber *changeType;
@property (retain, @dynamic, nonatomic) NSMutableSet *noteIntegerIds;
@property (retain, @dynamic, nonatomic) NSMutableSet *noteServerIds;
@property (retain, @dynamic, nonatomic) NSMutableSet *noteServerIntIds;

@end

#endif /* NoteChangeObject_h */
