//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMContactCardPreviewGenerator_h
#define IMContactCardPreviewGenerator_h
@import Foundation;

#include "IMImagePreviewGenerator.h"
#include "IMPreviewGeneratorProtocol-Protocol.h"
#include "IMUTITypeInformation-Protocol.h"

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator<IMPreviewGeneratorProtocol, IMUTITypeInformation>
/* class methods */
+ (id)UTITypes;
+ (struct CGImage *)newPreviewFromSourceURL:(id)url withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints error:(id *)error;
+ (id)vCardDataForURL:(id)url;
+ (struct CGImage *)newMonogramImageForData:(id)data constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints;
+ (BOOL)supportsBlastDoor;
+ (struct CGImage *)newPreviewFromSourceURL:(id)url previewURL:(id)url senderContext:(id)context withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints error:(id *)error;
+ (id)contactCardPreviewPayloadsDirectoryFrom:(id)from previewURL:(id)url;
+ (id)contactCardPreviewPayloadFileURLFrom:(id)urlfrom previewURL:(id)url withFileExtension:(id)extension;
+ (double)contactMonogramDiameter;
+ (struct CGImage *)monogramForFirstName:(id)name lastName:(id)name;
+ (id)generateContactPlistFrom:(id)from previewURL:(id)url senderContext:(id)context error:(id *)error;
+ (struct CGImage *)newContactCardPreviewFrom:(id)from previewURL:(id)url senderContext:(id)context withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints error:(id *)error;
@end

#endif /* IMContactCardPreviewGenerator_h */
