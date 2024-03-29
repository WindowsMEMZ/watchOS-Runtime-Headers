//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SSUCacheDirectoryProviderTemporary_h
#define SSUCacheDirectoryProviderTemporary_h
@import Foundation;

#include "SSUCacheDirectoryProvider-Protocol.h"

@class NSString, NSURL;

@interface SSUCacheDirectoryProviderTemporary : NSObject<SSUCacheDirectoryProvider>

@property (readonly, nonatomic) NSURL *_directory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)lookupOrCreateCacheDirectory:(id *)directory;
- (void)dealloc;
@end

#endif /* SSUCacheDirectoryProviderTemporary_h */
