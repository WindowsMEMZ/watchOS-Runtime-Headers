//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLPipelineLoader_h
#define MLPipelineLoader_h
@import Foundation;

#include "MLCompiledModelLoader-Protocol.h"
#include "MLSpecificationCompiler-Protocol.h"

@class NSString;

@interface MLPipelineLoader : NSObject<MLCompiledModelLoader, MLSpecificationCompiler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)compileSpecification:(void *)specification toArchive:(void *)archive options:(id)options error:(id *)error;
+ (id)compiledVersionForSpecification:(void *)specification options:(id)options error:(id *)error;
+ (id)loadModelFromCompiledArchive:(void *)archive modelVersionInfo:(id)info compilerVersionInfo:(id)info configuration:(id)configuration error:(id *)error;
@end

#endif /* MLPipelineLoader_h */
