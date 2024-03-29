//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFMyriadAdvertisementContextMutation_h
#define _AFMyriadAdvertisementContextMutation_h
@import Foundation;

#include "AFMyriadAdvertisementContext.h"
#include "AFMyriadAdvertisementContextMutating-Protocol.h"

@class NSData, NSString;

@interface _AFMyriadAdvertisementContextMutation : NSObject<AFMyriadAdvertisementContextMutating> {
  /* instance variables */
  AFMyriadAdvertisementContext *_base;
  unsigned long long _generation;
  NSData *_contextData;
  double _contextFetchDelay;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasGeneration; unsigned int x :1 hasContextData; unsigned int x :1 hasContextFetchDelay; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (unsigned long long)getGeneration;
- (void)setGeneration:(unsigned long long)generation;
- (id)getContextData;
- (void)setContextData:(id)data;
- (double)getContextFetchDelay;
- (void)setContextFetchDelay:(double)delay;
@end

#endif /* _AFMyriadAdvertisementContextMutation_h */
