//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMChatTranscriptItemExtendedLayoutAttributes_h
#define IMChatTranscriptItemExtendedLayoutAttributes_h
@import Foundation;

#include "IMChatTranscriptItemLayoutAttributes.h"

@interface IMChatTranscriptItemExtendedLayoutAttributes : IMChatTranscriptItemLayoutAttributes

@property (nonatomic) long long layoutOrientation;
@property (nonatomic) struct CGSize { double x0; double x1; } drawableSize;
@property (nonatomic) double topMargin;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* IMChatTranscriptItemExtendedLayoutAttributes_h */
