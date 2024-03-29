//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISSymbolImageDescriptor_h
#define ISSymbolImageDescriptor_h
@import Foundation;

#include "IFSymbolImageDescriptor.h"
#include "ISImageDescriptor-Protocol.h"

@class NSString;

@interface ISSymbolImageDescriptor : IFSymbolImageDescriptor<ISImageDescriptor>

@property (nonatomic) unsigned long long size;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* ISSymbolImageDescriptor_h */
