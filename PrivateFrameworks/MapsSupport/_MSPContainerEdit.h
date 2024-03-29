//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef _MSPContainerEdit_h
#define _MSPContainerEdit_h
@import Foundation;

#include "MSPContainerEdit-Protocol.h"

@class NSString;

@interface _MSPContainerEdit : NSObject<MSPContainerEdit>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)ifAddition:(id /* block */)addition ifRemoval:(id /* block */)removal ifReplacement:(id /* block */)replacement ifContentUpdate:(id /* block */)update ifReplacedEntirely:(id /* block */)entirely;
- (void)useImmutableObjectsFromMap:(id)map intermediateMutableObjectTransferBlock:(id /* block */)block;
@end

#endif /* _MSPContainerEdit_h */
