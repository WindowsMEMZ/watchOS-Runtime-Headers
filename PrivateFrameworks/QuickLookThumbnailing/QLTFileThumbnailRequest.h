//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLTFileThumbnailRequest_h
#define QLTFileThumbnailRequest_h
@import Foundation;

#include "QLTThumbnailRequest.h"
#include "FPSandboxingURLWrapper.h"
#include "QLCacheBasicVersionedFileIdentifier.h"

@interface QLTFileThumbnailRequest : QLTThumbnailRequest

@property (readonly, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (readonly, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (readonly, @dynamic, nonatomic) QLCacheBasicVersionedFileIdentifier *fileIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithFileAtURL:(id)url size:(struct CGSize { double x0; double x1; })size scale:(double)scale iconMode:(BOOL)mode;
- (id)initWithFileAtURL:(id)url size:(struct CGSize { double x0; double x1; })size minimumDimension:(double)dimension scale:(double)scale iconMode:(BOOL)mode error:(id *)error;
- (id)initWithFileAtURL:(id)url size:(struct CGSize { double x0; double x1; })size minimumDimension:(double)dimension scale:(double)scale iconMode:(BOOL)mode error:(id *)error shouldMakeSandboxWrapper:(BOOL)wrapper;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)computeContentType;
- (BOOL)shouldProvideFoldedGenericIcon;
@end

#endif /* QLTFileThumbnailRequest_h */
