//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVSkitReader_h
#define KVSkitReader_h
@import Foundation;

#include "KVProvisionalResourceManager.h"
#include "KVSkitReadAccess-Protocol.h"
#include "KVSkitWrapper.h"

@class NSString, NSURL;

@interface KVSkitReader : NSObject<KVSkitReadAccess> {
  /* instance variables */
  NSURL *_directoryURL;
  KVProvisionalResourceManager *_resourceManager;
  KVSkitWrapper *_skit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithSkitDirectoryURL:(id)url;
- (id)initWithSkitDirectoryURL:(id)url lifespan:(double)lifespan;
- (id)init;
- (void)dealloc;
- (id /* block */)_activationBlock;
- (id /* block */)_deactivationBlock;
- (BOOL)deactivate;
- (id)indexLocale;
- (void)prewarm;
- (id)matchSpans:(id)spans error:(id *)error;
@end

#endif /* KVSkitReader_h */
