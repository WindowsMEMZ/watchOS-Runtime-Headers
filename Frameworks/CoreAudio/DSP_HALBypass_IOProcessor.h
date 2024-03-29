//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 290.153.3.50.1
//
#ifndef DSP_HALBypass_IOProcessor_h
#define DSP_HALBypass_IOProcessor_h
@import Foundation;

#include "HAL_DSP_HostCallbacks-Protocol.h"
#include "HAL_DSP_IOProcessor-Protocol.h"

@class NSString;

@interface DSP_HALBypass_IOProcessor : NSObject<HAL_DSP_IOProcessor>

@property (nonatomic) void * dspCallbacks;
@property (retain, nonatomic) NSObject<HAL_DSP_HostCallbacks> *hostCallbacks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)retrieveFormats:(id)formats error:(id *)error;
- (id)negotiateConfigurationChange:(id)change error:(id *)error;
- (id)adaptToConfigurationChange:(id)change withCallbacks:(void *)callbacks error:(id *)error;
- (id)getCustomPropertyList;
- (BOOL)hasCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })property;
- (BOOL)setCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })property withData:(id)data error:(id *)error;
- (id)getCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; })property;
@end

#endif /* DSP_HALBypass_IOProcessor_h */
