//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetViewModelInterface_Protocol_h
#define SHSheetViewModelInterface_Protocol_h
@import Foundation;

@protocol SHSheetViewModelInterface <NSObject>

@property (readonly, copy, nonatomic) NSArray *peopleSuggestions;
@property (readonly, copy, nonatomic) NSArray *activities;
@property (readonly, copy, nonatomic) NSArray *metadataValues;
@property (readonly, nonatomic) BOOL showOptions;
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, copy, nonatomic) NSArray *restrictedActivityTypes;

@end

#endif /* SHSheetViewModelInterface_Protocol_h */
