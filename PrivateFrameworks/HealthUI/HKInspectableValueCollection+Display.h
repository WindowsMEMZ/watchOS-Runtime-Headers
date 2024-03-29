//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKInspectableValueCollection_Display_h
#define HKInspectableValueCollection_Display_h
@import Foundation;

@interface HKInspectableValueCollection (Display)
/* class methods */
+ (void)parseValueCollection:(id)collection referenceRanges:(id)ranges healthRecordsStore:(id)store withCompletion:(id /* block */)completion;
+ (void)parseUncodedValueCollection:(id)collection referenceRanges:(id)ranges withCompletion:(id /* block */)completion;

/* instance methods */
- (id)displayString;
- (id)_stringsForValues:(id)values;
- (id)_joinValueStrings:(id)strings;
@end

#endif /* HKInspectableValueCollection_Display_h */
