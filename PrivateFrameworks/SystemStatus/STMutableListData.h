//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableListData_h
#define STMutableListData_h
@import Foundation;

#include "STListData.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSArray, NSString;

@interface STMutableListData : STListData<STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (copy, @dynamic, nonatomic) NSArray *objects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)addObject:(id)object;
- (void)removeObject:(id)object;
- (void)removeAllOccurrencesOfObject:(id)object;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableListData_h */
