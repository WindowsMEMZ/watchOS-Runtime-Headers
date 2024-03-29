//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVRawXPCDecoder_h
#define UVRawXPCDecoder_h
@import Foundation;

#include "AnySecureDecoder-Protocol.h"
#include "OS_xpc_object-Protocol.h"

@class NSString;

@interface UVRawXPCDecoder : NSObject<AnySecureDecoder>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithXpcDictionary:(id)dictionary;
- (id)decodeObjectOfClass:(Class)class forKey:(id)key;
@end

#endif /* UVRawXPCDecoder_h */
