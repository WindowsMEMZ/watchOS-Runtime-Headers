//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef NSMutableArray_OSAKCDataExtension_h
#define NSMutableArray_OSAKCDataExtension_h
@import Foundation;

@interface NSMutableArray (OSAKCDataExtension)
/* instance methods */
- (void)addImage:(unsigned char x[16])image address:(unsigned long long)address size:(unsigned long long)size;
- (void)addImageLegacy:(unsigned char x[16])legacy address:(unsigned long long)address size:(unsigned long long)size name:(const char *)name path:(const char *)path arch:(const char *)arch;
- (void)sortByAddressAndSetInferredSizes;
- (void)section_push:(id)section_push;
- (id)section_pop;
- (void)addPart:(id)part;
- (void)push:(id)push;
- (id)pop;
- (id)top;
- (id)parent;
@end

#endif /* NSMutableArray_OSAKCDataExtension_h */
