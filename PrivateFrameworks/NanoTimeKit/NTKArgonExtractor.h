//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKArgonExtractor_h
#define NTKArgonExtractor_h
@import Foundation;

#include "NTKArgonExtractorOperation.h"
#include "NTKArgonExtractorProviding-Protocol.h"

@class NSMapTable, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface NTKArgonExtractor : NSObject<NTKArgonExtractorProviding> {
  /* instance variables */
  NSString *_inProgressPath;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NTKArgonExtractorOperation *performingOperation;
@property (readonly, nonatomic) NSMutableOrderedSet *queuedKeyDescriptorOperations;
@property (readonly, nonatomic) NSMapTable *extractionCallbacksByDescriptor;
@property (readonly, nonatomic) NSMapTable *removalCallbacksByDescriptor;
@property (readonly, nonatomic) NSString *extractionPath;
@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_createUnprotectedDirectoryAtPath:(id)path error:(id *)error;

/* instance methods */
- (id)initWithSourcePath:(id)path inProgressPath:(id)path extractionPath:(id)path;
- (void)removeExtractedKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)_queue_removeKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)extractUsingKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)_queue_extractUsingKeyDescriptor:(id)descriptor completion:(id /* block */)completion;
- (void)_queue_performNextOperationIfNeeded;
- (void)_queue_extractKeyDescriptor:(id)descriptor;
- (void)_queue_removeKeyDescriptor:(id)descriptor;
@end

#endif /* NTKArgonExtractor_h */
