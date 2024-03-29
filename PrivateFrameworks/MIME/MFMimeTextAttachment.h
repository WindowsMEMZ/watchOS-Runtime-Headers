//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFMimeTextAttachment_h
#define MFMimeTextAttachment_h
@import Foundation;

#include "MFMessageTextAttachment.h"

@interface MFMimeTextAttachment : MFMessageTextAttachment
/* instance methods */
- (id)initWithMimePart:(id)part;
- (id)_displayedMimePart;
- (void)download;
- (BOOL)hasBeenDownloaded;
- (unsigned int)approximateSize;
@end

#endif /* MFMimeTextAttachment_h */
