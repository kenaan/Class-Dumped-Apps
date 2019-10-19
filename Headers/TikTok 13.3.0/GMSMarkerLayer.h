//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSOverlayLayer.h"

@interface GMSMarkerLayer : GMSOverlayLayer
{
}

+ (void)initialize;
+ (_Bool)needsDisplayForKey:(id)arg1;
- (void)executeAnimation:(id)arg1;
- (id)hintBrokenAnimationKeys;
- (_Bool)shouldAddActionForKey:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLayer:(id)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coord;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property float opacity; // @dynamic opacity;
@property(nonatomic) double rotation; // @dynamic rotation;

@end

