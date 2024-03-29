//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCKRecord_h
#define IDSCKRecord_h
@import Foundation;

#include "IDSCKRecordID.h"

@protocol IDSCKRecordKeyValueSetting;

@interface IDSCKRecord : NSObject

@property (readonly, copy, nonatomic) IDSCKRecordID *recordID;
@property (readonly, nonatomic) NSObject<IDSCKRecordKeyValueSetting> *encryptedValuesByKey;

/* class methods */
+ (Class)__class;
+ (id)alloc;

/* instance methods */
@end

#endif /* IDSCKRecord_h */
