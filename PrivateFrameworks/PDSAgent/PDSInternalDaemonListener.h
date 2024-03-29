//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef PDSInternalDaemonListener_h
#define PDSInternalDaemonListener_h
@import Foundation;

#include "PDSKVStore-Protocol.h"
#include "PDSRemoteInternal-Protocol.h"

@interface PDSInternalDaemonListener : NSObject<PDSRemoteInternal>

@property (retain, nonatomic) NSObject<PDSKVStore> *kvStore;

/* instance methods */
- (id)initWithKVStore:(id)kvstore;
- (void)setStringValue:(id)value forKey:(id)key withCompletion:(id /* block */)completion;
- (void)setNumberValue:(id)value forKey:(id)key withCompletion:(id /* block */)completion;
- (void)setDataValue:(id)value forKey:(id)key withCompletion:(id /* block */)completion;
- (void)stringRepresentationForKey:(id)key withCompletion:(id /* block */)completion;
- (void)kvStateDumpWithCompletion:(id /* block */)completion;
@end

#endif /* PDSInternalDaemonListener_h */
