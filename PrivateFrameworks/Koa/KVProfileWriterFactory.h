//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVProfileWriterFactory_h
#define KVProfileWriterFactory_h
@import Foundation;

#include "KVProfileWriterProvider-Protocol.h"

@class NSString;

@interface KVProfileWriterFactory : NSObject<KVProfileWriterProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)profileWriterForFormat:(unsigned char)format outputStream:(id)stream error:(id *)error;
@end

#endif /* KVProfileWriterFactory_h */
