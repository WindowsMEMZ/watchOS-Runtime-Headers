//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplayConfigurationBuilder_h
#define FBSDisplayConfigurationBuilder_h
@import Foundation;

#include "FBSDisplayConfiguration.h"
#include "FBSDisplayMode.h"

@class NSSet, NSString;

@interface FBSDisplayConfigurationBuilder : NSObject {
  /* instance variables */
  FBSDisplayConfiguration *_configuration;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSString *_lock_uniqueIdentifier;
  FBSDisplayMode *_lock_currentMode;
  FBSDisplayMode *_lock_preferredMode;
  NSSet *_lock_otherModes;
  struct CGSize { double width; double height; } _lock_pixelSize;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lock_nativeBounds;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lock_bounds;
  BOOL _lock_geometrySet;
  BOOL _lock_secure;
  BOOL _lock_mainLike;
  BOOL _lock_cloningSupported;
  BOOL _lock_cloningSet;
  long long _lock_overscanCompensation;
  struct CGSize { double width; double height; } _lock_safeOverscanRatio;
  BOOL _lock_overscanned;
  BOOL _lock_overscanSet;
}

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)_lock_sanitizedModeForMode:(id)mode;
- (id)buildConfigurationWithError:(out id *)error;
- (void)setUniqueIdentifier:(id)identifier;
- (void)setCurrentMode:(id)mode preferredMode:(id)mode otherModes:(id)modes;
- (void)setPixelSize:(struct CGSize { double x0; double x1; })size nativeBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setExpectsSecureRendering;
- (void)setUIKitMainLike;
- (void)setCloningNotSupported;
- (void)setCloningSupported:(BOOL)supported;
- (void)setOverscanned:(BOOL)overscanned compensation:(long long)compensation safeRatio:(struct CGSize { double x0; double x1; })ratio;
@end

#endif /* FBSDisplayConfigurationBuilder_h */
