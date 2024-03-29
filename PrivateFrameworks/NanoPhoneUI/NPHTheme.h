//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1042.2.11.0.0
//
#ifndef NPHTheme_h
#define NPHTheme_h
@import Foundation;

@interface NPHTheme : NSObject
/* class methods */
+ (id)dialedNumbersLabelFont;
+ (id)formattedStringForSeconds:(double)seconds;
+ (id)blurImageFromView:(id)view;
+ (id)recentCallGlyphImageForVideo:(BOOL)video outgoing:(BOOL)outgoing rtt:(BOOL)rtt withFont:(id)font;
+ (id)recentsVerifiedCheckmarkImageWithFont:(id)font;
+ (id)RTTImage;
+ (id)addParticipantImage;
+ (id)keypadImage;
+ (id)imageForSymbolName:(id)name withFont:(id)font;
+ (id)AirPodsRouteImage;
+ (id)AirPods3RouteImage;
+ (id)AirPodsProRouteImage;
+ (id)AirPodsMaxRouteImage;
+ (id)PowerBeatsRouteImage;
+ (id)BeatsSoloRouteImage;
+ (id)BeatsSoloProRouteImage;
+ (id)BeatsStudioRouteImage;
+ (id)BeatsXRouteImage;
+ (id)Beats364RouteImage;
+ (id)genericBluetoothRouteImage;
+ (id)iPhoneRouteImage;
+ (id)iPhoneXRouteImage;
+ (id)WatchRouteImage;
+ (id)BeatsX2Image;
+ (id)beatsStudioBuds;
+ (id)beatsFitProImage;
+ (id)imageForBluetoothProductId:(id)id;
+ (id)imageForAudioRouteDeviceType:(long long)type;
+ (id)TapToRadarImage;
+ (id)systemFontWithWeight:(double)weight ofSize:(double)size;
+ (double)nphDeviceSpecificFloatValueWithp394Value:(double)value p448hValue:(double)value p41hValue:(double)value p45hValue:(double)value p502hValue:(double)value;
@end

#endif /* NPHTheme_h */
