//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIColorKernel_h
#define CIColorKernel_h
@import Foundation;

#include "CIKernel.h"

@interface CIColorKernel : CIKernel

@property (nonatomic) BOOL perservesAlpha;

/* class methods */
+ (id)SDOFV2MetalKernelNamed:(id)named;
+ (id)SDOFV3MetalKernelNamed:(id)named;
+ (id)kernelWithString:(id)string;

/* instance methods */
- (id)initWithString:(id)string;
- (id)_initWithReflection:(struct CIKernelReflection { int x0; int x1; char * x2; char * x3; struct vector<CI::KernelArgumentType, std::allocator<CI::KernelArgumentType>> { int * x0; int * x1; struct __compressed_pair<CI::KernelArgumentType *, std::allocator<CI::KernelArgumentType>> { int * x0; } x2; } x4; struct vector<std::string, std::allocator<std::string>> { void * x0; void * x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void * x0; } x2; } x5; id x6; unsigned int x7; int x8; unsigned long long x9; unsigned long long x10; BOOL x11; BOOL x12; })reflection constants:(id)constants constantTypes:(id)types;
- (BOOL)preservesRange;
- (void)setPreservesRange:(BOOL)range;
- (BOOL)canReduceOutputChannels;
- (void)setCanReduceOutputChannels:(BOOL)channels;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent roiCallback:(id /* block */)callback arguments:(id)arguments options:(id)options;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent roiCallback:(id /* block */)callback arguments:(id)arguments;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent arguments:(id)arguments options:(id)options;
- (id)applyWithExtent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extent arguments:(id)arguments;
@end

#endif /* CIColorKernel_h */
