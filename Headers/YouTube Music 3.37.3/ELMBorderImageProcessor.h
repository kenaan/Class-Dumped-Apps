//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMImageProcessor-Protocol.h"

@class NSString;

@interface ELMBorderImageProcessor : NSObject <ELMImageProcessor>
{
    // Error parsing type: {BorderImageProcessor="_vptr$MessageLite"^^?"_internal_metadata_"{InternalMetadataWithArenaLite="ptr_"^v}"_has_bits_"{HasBits<1>="has_bits_"[1I]}"_cached_size_"{CachedSize="size_"{atomic<int>="__a_"Ai}}"linear_gradient_"^{LinearGradient}"image_radius_corners_"^{RectCorners}"border_width_"f"border_color_"I"rounding_"(RoundingUnion="corner_radius_"f"circular_"B)"_oneof_case_"[1I]}, name: _processor
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didDrawInContext:(struct CGContext *)arg1;
- (void)willDrawInContext:(struct CGContext *)arg1;
-     // Error parsing type: @72@0:8{BorderImageProcessor=^^?{InternalMetadataWithArenaLite=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}^{LinearGradient}^{RectCorners}fI(RoundingUnion=fB)[1I]}16, name: initWithProcessor:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
