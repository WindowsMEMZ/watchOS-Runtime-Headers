//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1838.60.8.0.0
//
#ifndef NEFileHandle_h
#define NEFileHandle_h
@import Foundation;

@class NSFileHandle;
@protocol OS_xpc_object;

@interface NEFileHandle : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) BOOL launchOwnerWhenReadable;
@property (readonly) NSFileHandle *handle;

/* instance methods */
- (id)initFromDictionary:(id)dictionary;
- (id)initWithFileDescriptor:(int)descriptor launchOwnerWhenReadable:(BOOL)readable;
@end

#endif /* NEFileHandle_h */
