//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDHealthLogsEncryptor_h
#define DEDHealthLogsEncryptor_h
@import Foundation;

#include "DEDEncryptor-Protocol.h"

@class NSString;

@interface DEDHealthLogsEncryptor : NSObject<DEDEncryptor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)encryptLogsAtPath:(id)path outputDirectory:(id)directory withPublicKey:(id)key;
- (id)encryptLogsAtPath:(id)path outputDirectory:(id)directory withMetadata:(id)metadata;
@end

#endif /* DEDHealthLogsEncryptor_h */
