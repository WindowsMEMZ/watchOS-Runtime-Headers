//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IEPatternizer_h
#define IEPatternizer_h
@import Foundation;

@interface IEPatternizer : NSObject
/* instance methods */
- (BOOL)generatePatterns:(id)patterns noOverwrite:(BOOL)overwrite deleteText:(BOOL)text userParamTypes:(id)types;
- (BOOL)generateCATs:(id)cats noOverwrite:(BOOL)overwrite deleteText:(BOOL)text userParamTypes:(id)types;
- (BOOL)updateCATMetadata:(id)catmetadata withMeta:(id)meta;
@end

#endif /* IEPatternizer_h */
