//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIMutableCatalog_h
#define CUIMutableCatalog_h
@import Foundation;

#include "CUICatalog.h"

@interface CUIMutableCatalog : CUICatalog {
  /* instance variables */
  unsigned int x :1 _checkRespondsTo;
  unsigned int x :1 _respondsToCheck;
}

/* instance methods */
- (id)initWithName:(id)name;
- (id)init;
- (id)initWithName:(id)name fromBundle:(id)bundle error:(id *)error;
- (void)dealloc;
- (unsigned long long)_storageRefForRendition:(id)rendition representsODRContent:(BOOL *)odrcontent;
- (id)_baseKeyForName:(id)name;
- (id)_baseImageKeyForName:(id)name;
- (void)insertCGImage:(struct CGImage *)cgimage name:(id)name scale:(double)scale idiom:(long long)idiom subtype:(long long)subtype;
- (void)removeImageNamed:(id)named scale:(double)scale idiom:(long long)idiom subtype:(long long)subtype;
- (void)insertCGImage:(struct CGImage *)cgimage withName:(id)name andDescription:(id)description;
- (void)removeImageNamed:(id)named withDescription:(id)description;
- (void)removeImagesNamed:(id)named;
@end

#endif /* CUIMutableCatalog_h */
