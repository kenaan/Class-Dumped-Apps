//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEPOIRoutingGeometry, NSArray;

@interface AWEPOIRoutingRoute : AWEBaseApiModel
{
    AWEPOIRoutingGeometry *_origin;
    AWEPOIRoutingGeometry *_destination;
    NSArray *_paths;
}

+ (id)pathsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) AWEPOIRoutingGeometry *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) AWEPOIRoutingGeometry *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;

@end

