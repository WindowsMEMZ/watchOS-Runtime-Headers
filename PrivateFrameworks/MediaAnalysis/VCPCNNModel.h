//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNModel_h
#define VCPCNNModel_h
@import Foundation;

#include "VCPCNNData.h"
#include "VCPCNNMetalContext.h"

@interface VCPCNNModel : NSObject {
  /* instance variables */
  VCPCNNBlock * _blocks[200];
  short _quantFactor;
  BOOL _useGPU;
  VCPCNNMetalContext *_context;
}

@property (readonly) VCPCNNData *output;

/* instance methods */
- (id)init;
- (id)initWithParameters:(short)parameters useGPU:(BOOL)gpu;
- (int)size;
- (id)getGPUContext;
- (int)add:(id)add;
- (int)prepareNetworkFromURL:(id)url withInputSize:(id)size;
- (int)forward:(id)forward;
- (int)dynamicForward:(id)forward paramFileUrl:(id)url cancel:(id /* block */)cancel;
@end

#endif /* VCPCNNModel_h */
