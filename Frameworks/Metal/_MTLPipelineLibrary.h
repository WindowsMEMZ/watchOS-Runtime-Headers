//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef _MTLPipelineLibrary_h
#define _MTLPipelineLibrary_h
@import Foundation;

#include ".h"
#include "MTLDevice-Protocol.h"
#include "MTLPipelineCache-Protocol.h"
#include "MTLPipelineLibrarySPI-Protocol.h"

@class NSArray, NSString;

@interface _MTLPipelineLibrary : <MTLPipelineLibrarySPI> {
  /* instance variables */
  void * _pipelineLibraryData;
}

@property (copy, @dynamic) NSString *label;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSArray *pipelineNames;
@property BOOL disableRunTimeCompilation;
@property (readonly, @dynamic, nonatomic) NSObject<MTLPipelineCache> *pipelineCache;
@property (readonly, @dynamic, nonatomic) NSObject<MTLPipelineCache> *functionCache;
@property (readonly) NSArray *metallibPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDevice:(id)device pipelineLibraryData:(void *)data;
- (void)dealloc;
- (id)newComputePipelineStateWithName:(id)name options:(unsigned long long)options reflection:(id *)reflection error:(id *)error;
- (id)newRenderPipelineStateWithName:(id)name options:(unsigned long long)options reflection:(id *)reflection error:(id *)error;
- (id)newComputePipelineDescriptorWithName:(id)name error:(id *)error;
- (id)newRenderPipelineDescriptorWithName:(id)name error:(id *)error;
@end

#endif /* _MTLPipelineLibrary_h */
