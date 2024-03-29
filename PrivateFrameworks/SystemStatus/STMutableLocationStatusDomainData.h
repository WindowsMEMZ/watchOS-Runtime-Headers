//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableLocationStatusDomainData_h
#define STMutableLocationStatusDomainData_h
@import Foundation;

#include "STLocationStatusDomainData.h"
#include "STMutableListData.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSArray, NSString;

@interface STMutableLocationStatusDomainData : STLocationStatusDomainData<STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (readonly, copy, nonatomic) STMutableListData *locationAttributionListData;
@property (copy, @dynamic, nonatomic) NSArray *attributions;
@property (@dynamic, nonatomic) unsigned long long activeDisplayModes;
@property (copy, @dynamic, nonatomic) NSArray *locationAttributions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLocationAttributionListData:(id)data activeDisplayModes:(unsigned long long)modes;
- (void)addAttribution:(id)attribution;
- (void)removeAttribution:(id)attribution;
- (void)addLocationAttribution:(id)attribution;
- (void)removeLocationAttribution:(id)attribution;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableLocationStatusDomainData_h */
