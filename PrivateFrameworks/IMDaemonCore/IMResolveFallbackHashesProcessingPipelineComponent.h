//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMResolveFallbackHashesProcessingPipelineComponent_h
#define IMResolveFallbackHashesProcessingPipelineComponent_h
@import Foundation;

#include "IMPipelineComponent.h"

@interface IMResolveFallbackHashesProcessingPipelineComponent : IMPipelineComponent
/* instance methods */
- (id)_associatedMessageGUIDForInput:(id)input error:(id *)error;
- (id)_threadIdentifierForInput:(id)input error:(id *)error;
- (id)_messageGUIDForInput:(id)input providedGUID:(id)guid fallbackHash:(id)hash;
- (id)_messageGUIDForMessageWithFallbackHash:(id)hash chat:(id)chat;
- (id)runIndividuallyWithInput:(id)input;
@end

#endif /* IMResolveFallbackHashesProcessingPipelineComponent_h */
